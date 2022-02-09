#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Item {
    string name;
    float price;
    int quantity;
    Item* Next = NULL;
};

void showAllInfo(fstream & read);
void showNullInfo(fstream & read);
void showExpensiveThenInfo(fstream & read, double number);
void getRowFileDate(string str, string & name, string & price, string & quantity);
void GetNum(double& number);
void FileToBinary(fstream & read);
Item* FillStruct(fstream & read);
double StrToDouble(string price);

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Ukrainian");
    fstream GET_FILE;
    char* fileName = new char[40];
    double num;
    //отримання імені файлу
    if (argc < 2) 
    {
        cout << "Введiть iм’я файлa: ";
        cin >> fileName;
    }
    else
    {
        fileName = argv[1];
    }
    GET_FILE.open(fileName, ios::in);
    //Якшо файл вдалось вiдкрити перейти далi, iнакше вивести повiдомлення про помилку
    if (GET_FILE.is_open())  
    {
        for (;;)
        {
            int func;
            cout << "\nОберiть фукнцiю\n"
                << "1. Вивести на екран всi товари\n"
                << "2. Вивести на екран товари, яких немає не складi\n"
                << "3. Вивести на екран товари, дорощi заданої вартостi\n"
                << "4. Записати усi данi в бiнарний файл\n"
                << "5. Вихiд\n";
            cin >> func;
            cout << "\n";
            switch (func)
            {
            case 1:
                GET_FILE.seekg(0, ios::beg); //перемістити вказівник читання файлу на початок
                showAllInfo(GET_FILE);       //Функція друку усіх товаріх 
                break;
            case 2:
                GET_FILE.seekg(0, ios::beg); //перемістити вказівник читання файлу на початок
                showNullInfo(GET_FILE);      //Функція друку усіх товаріх, яких немає в наявності на складі
                break;
            case 3:
                GetNum(num);                 //функція отримання числа для порівння
                GET_FILE.seekg(0, ios::beg); //перемістити вказівник читання файлу на початок
                showExpensiveThenInfo(GET_FILE, num);  //Функція друку усіх товарів, ціна яких більше введеної
                break;
            case 4:
                GET_FILE.seekg(0, ios::beg); //перемістити вказівник читання файлу на початок
                FileToBinary(GET_FILE);
                break;
            case 5:
                GET_FILE.close();  //закрити файл
                system("pause");
                return 0;
                break;
            default:
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "\nПомилка. Ведiть число повторно\n";
                break;
            }
        }	
    }
    else
    {
        cout << "Не вдалося зчитати файл за заданим шляхом" << endl;
    }
    system("pause");
    return 0;
}

/// <summary>
/// Функція друку усіх товаріх 
/// </summary>
/// <param name="read">файл</param>
void showAllInfo(fstream& read)
{
    string name, price, quantity, str;
    //цикл працює поки не досягнуто кінця файлу
    while (!read.eof()){
        getline(read, str);  //отримання рядку
        //Обробляти дані тільки якщо рядок не пустий
        if (str != "")
        {
            getRowFileDate(str, name, price, quantity);  // Функція отримання даних з рядка файлу
            cout << "\nТовар " << name << " має цiну " << price << " i знаходиться на складi у кiлькостi " << quantity << " одиниць товару";
        }  
    }
    cout << endl;
}
/// <summary>
/// Функція друку усіх товарів, яких немає в наявності на складі
/// </summary>
/// <param name="read">файл</param>
void showNullInfo(fstream& read)
{
    string name, price, quantity, str;
    //цикл працює поки не досягнуто кінця файлу
    while (!read.eof()) {
        getline(read, str);  //отримання рядку
        //Обробляти дані тільки якщо рядок не пустий
        if (str != "")
        {
            getRowFileDate(str, name, price, quantity);  // Функція отримання даних з рядка файлу
            //Перевірка, чи дорівнює кількість товарів нулю
            if (quantity[0] == '0')
            {
                cout << "\nТовар " << name << " має цiну " << price << " i знаходиться на складi у кiлькостi " << quantity << " одиниць товару";
            }
        }
    }
    cout << endl;
}
/// <summary>
/// Функція друку усіх товарів, ціна яких більше введеної
/// </summary>
/// <param name="read">файл</param>
/// <param name="number">число для порівняння</param>
void showExpensiveThenInfo(fstream& read, double number)
{
    string name, price, quantity, str;
    //цикл працює поки не досягнуто кінця файлу
    while (!read.eof()) {
        getline(read, str);  //отримання рядку
        //Обробляти дані тільки якщо рядок не пустий
        if (str != "")
        {
            getRowFileDate(str, name, price, quantity);  // Функція отримання даних з рядка файлу
            //Порівняння ціни товару з введеним числом
            if (stod(price) > number)
            {
                cout << "\nТовар " << name << " має цiну " << price << " i знаходиться на складi у кiлькостi " << quantity << " одиниць товару";
            }
        }   
    }
    cout << endl;
}
/// <summary>
/// Функція отримання даних з рядка файлу
/// </summary>
/// <param name="str">рядок з файлу</param>
/// <param name="name">назва товару</param>
/// <param name="price">ціна товару</param>
/// <param name="quantity">кількість товару</param>
void getRowFileDate(string str, string& name, string& price, string& quantity)
{
    int dot1, dot2;
    dot1 = str.find(',', 0);                //пошук першої коми в рядку
    dot2 = str.find(',', dot1+1);           //пошук другої коми в рядку
    name.assign(str, 0, dot1);              //копіювання з рядку необхідних частин
    price.assign(str, dot1+1, dot2-dot1-1);
    quantity.assign(str, dot2+1, str.length()-dot2-1);
}
/// <summary>
/// Функція отримання числа з консолі
/// </summary>
/// <param name="number">число для введення</param>
void GetNum(double& number) 
{
    cout << "Введiть число для порiвняння з цiною товарiв => ";
    while (true)
    {
        cin >> number;
        if (!cin)
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "\nПомилка. Введiть число повторно => ";
        }
        else if (number < 0 )
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "\nПомилка. Цiна має бути бiльше 0 або дорiвнювати 0";
        }
        else break;
    }
    cout << endl;
}
/// <summary>
/// Функція перенесення інформації з текстового файлу у бінарний
/// </summary>
/// <param name="read">файл</param>
void FileToBinary(fstream& read) 
{
    Item* item = FillStruct(read); // список з даними про товари
    fstream bin;
    char* fileName = new char[40];
    cout << "\nВведiть iм’я файлa: ";
    cin >> fileName;
    bin.open(fileName, ios::binary | ios::out | ios::trunc);
    if (bin.is_open())
    {
        //запис даних зі списку у файл поки не буде досягнуто кінця файлу
        while (item != NULL)
        {
            bin.write((char*)(&item->name), sizeof item->name);
            bin.write((char*)(&item->price), sizeof item->price);
            bin.write((char*)(&item->quantity), sizeof item->quantity);
            item = item->Next;
        } 
        bin.close();
        cout << "\nОперацiя пройшла успiшно\n";
    }
    else 
    {
        cout << "Не вдалося зчитати файл за заданим шляхом" << endl;
    }
}
/// <summary>
/// Функція записує всі дані з файлу у структуру(список)
/// </summary>
/// <param name="read">файл</param>
/// <returns>повертає вказівник на структуру(список) з даними про товар</returns>
Item* FillStruct(fstream& read)
{
    Item* item = NULL;
    string name, price, quantity, str;
    //цикл працює поки не досягнуто кінця файлу
    while (!read.eof()) {
        getline(read, str);  //отримання рядку
        //Обробляти дані тільки якщо рядок не пустий
        if (str != "")
        {
            getRowFileDate(str, name, price, quantity);  // Функція отримання даних з рядка файлу
            //створення нового компоненту списку та заповнення його даними
            Item* nw = new Item; //елемент для додавання до структури
            nw->name = name;
            nw->price = StrToDouble(price);
            nw->quantity = stoi(quantity);
            Item* tmp = item;
            //Якщо список пустий заповнити
            if (item == NULL)
            {
                item = nw;
            } 
            //інакше пройти по списку до останнього елементу та додати новий
            else
            {
                while (tmp->Next != NULL)
                {
                    tmp = tmp->Next;
                }
                tmp->Next = nw;
            }
        }
    }
    return item;
}
/// <summary>
/// Функція переведення строки в дійсне число
/// </summary>
/// <param name="str">строка</param>
/// <returns>повертає дійсне число</returns>
double StrToDouble(string str) 
{
    double rightPart, leftPart;
    //пошук позиції точки у дійсному числі
    int dot1 = str.find('.', 0);
    string strNum;
    //відділення та переведеня дробної частини у ціле число
    strNum.assign(str, dot1 + 1, str.length() - dot1-1);
    int numAfterDot = stoi(strNum);
    //переведення цілої частини у дробне число
    rightPart = (double)numAfterDot / 100;
    //права частина числа
    leftPart = stod(str);
    return rightPart+ leftPart;
}