#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
#include <ctime>

using namespace std;

void Get_Size(int& size);
void Get_Size_FromFILE(int& size, int argc, char* argv[], char* name);
int** Creat_Arr(int** arr, int size);
void Fill_Arr(int** arr, int size);
void Fill_ArrRand(int** arr, int size);
void Get_Arr_FromFILE(int** arr, char* name, int size);
void Show_Arr(int** arr, int size);
void Write_Arr_InFile(int argc, char* argv[], int size, int** arr);
void Max_Element(int** arr, int size);
int Min_Element(int** arr, int size, int& rowNum);
void Sort(int** arr, int size, int rowNum);
void Delete_Arr(int** arr, int size);

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "ru");
	srand(time(NULL));
	for (;;)
	{
		cout << "\nВыберите метод получения даных для матрицы\n" << "1->Ввод через консоль\n" << "2->Считывание с файла\n" << "3->Выход из программы\n";
		int choice, size, num, rowNum = 0;
		bool check = false;
		int** arr = NULL;
		cin >> choice;
		switch (choice)
		{
		case 1:
			Get_Size(size);
			arr = Creat_Arr(arr, size);
			for (;;)
			{
				cout << "\nВыберите дальнейшие действия\n" << "1->Посмотреть матрицу\n" << "2->Заполнить матрицу вручную\n"
					<< "3->Заполнить матрицу генератором случайных чисел\n" << "4->Найти максимальный елемент, оба индекса которого парные\n" 
					<< "5->найти минимальный елемент главной диагонали\n"<< "6->упорядочить по возрастанию значения елементов рядка, где был найден минимальный елемент\n" 
					<< "7->Записать матрицу в файл\n" << "8->Выход из программы\n\n";
				cin >> choice;
				switch (choice)
				{
				case 1:
					Show_Arr(arr, size);
					break;
				case 2:
					Fill_Arr(arr, size);
					break;
				case 3:
					Fill_ArrRand(arr, size);
					break;
				case 4:
					Max_Element(arr, size);
					break;
				case 5:
					num = Min_Element(arr, size, rowNum);
					cout << "\nМинимальный елемент главной диагонали => " << num << "\nПозиция [" << rowNum << "][" << rowNum << "]";
					check = true;
					break;
				case 6:
					if (check) Sort(arr, size, rowNum);
					else cout << "\nСначала найдите минимальный елемент главной диагонали";
					break;
				case 7:
					Write_Arr_InFile(argc, argv, size, arr);
					break;
				case 8:
					Delete_Arr(arr, size);
					cout << "\nВы завершили работу с программой\n";
					system("pause");
					return 0;
					break;
				default:
					cin.clear();
					cin.ignore(32767, '\n');
					cout << "\nОшибка. Введите число повторно\n";
					break;
				}
			}
			break;
		case 2:
			char name[40];
			Get_Size_FromFILE(size, argc, argv, name);
			arr = Creat_Arr(arr, size);
			for (;;)
			{
				cout << "\nВыберите дальнейшие действия\n" << "1->Заполнить матрицу с файла\n" << "2->Посмотреть матрицу\n" << "3->Записать матрицу в файл\n"
					<< "4->Найти максимальный елемент, оба индекса которого парные\n" << "5->Найти минимальный елемент главной диагонали\n"
					<< "6->Упорядочить по возрастанию значения елементов рядка, где был найден минимальный елемент\n" << "7->Выход из программы\n\n";
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					Get_Arr_FromFILE(arr, name, size);
					break;
				}
				case 2:
					Show_Arr(arr, size);
					break;
				case 3:
					Write_Arr_InFile(argc, argv, size, arr);
					break;
				case 4:
					Max_Element(arr, size);
					break;
				case 5:
					num = Min_Element(arr, size, rowNum);
					cout << "\nМинимальный елемент главной диагонали => " << num << "\nПозиция [" << rowNum << "][" << rowNum << "]";
					check = true;
					break;
				case 6:
					if (check) Sort(arr, size, rowNum);
					else cout << "\nСначала найдите минимальный елемент главной диагонали";
					break;
				case 7:
					Delete_Arr(arr, size);
					cout << "\nВы завершили работу с программой\n";
					system("pause");
					return 0;
					break;
				default:
					cin.clear();
					cin.ignore(32767, '\n');
					cout << "\nОшибка. Введите число повторно\n";
					break;
				}
			}
			break;
		case 3:
			cout << "\nВы завершили работу с программой\n";
			system("pause");
			return 0;
			break;
		default:
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "\nОшибка. Введите число повторно\n";
			break;
		}
	}
}


void Get_Size(int& size)        // Функция ввода количества строк квадратной матрицы 
{                               // Вход: переменная, хранящая количество строк (столбцов) Выход: количество строк
	cout << "Введите количество рядков квадратной матрицы (больше 6): ";
	while (true)
	{
		cin >> size;
		if (size < 6)
		{
			cout << "\nСлишком маленький размер матрицы\n";
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else if (!cin)
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << endl << "\nОшибка. Введите число повторно\n";
		}
		else { break; }
	}
}
void Get_Size_FromFILE(int& size, int argc, char* argv[], char* name)      //Функция считывания размера матрицы с файла
{                                                                          //Вход: переменная для размера матрицы, аргументы функции main, переменная для имени файла  Выход:считанный размер матрицы
	if (argc < 2) {
		cout << "Введите имя файла для считывания размера матрицы: ";
		cin >> name;
	}
	else
	{
		name = argv[1];
	}
	ifstream out(name);
	if (out.is_open())	//если файл открылся
	{
		out >> size;
	}
	else
	{
		cout << "\nФайл не был найден\n";
		system("pause");
		exit(1);
	}
}
int** Creat_Arr(int** arr, int size)	//Функция создания матрицы
{										//Вход: масив, его размер, Выход: созданная матрица
	arr = new int* [size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = new int[size];
	}
	return arr;
}
void Fill_Arr(int** arr, int size)			//Функция заполнения матрицы с клавиатуры
{											//Вход: масив, его размер, Выход: заполненная  матрица		
	cout << "Введите элементы матрицы\n";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << "arr[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	}
}
void Fill_ArrRand(int** arr, int size)		//Функция заполнения матрицы генератором случайных чисел
{											//Вход: масив, его размер, Выход: заполненная  матрица
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand() % 21 - 4;
		}
	}
}
void Get_Arr_FromFILE(int** arr, char* name, int size)  //Функция считывания матрицы через файл
{														//Вход: масив, имя файла, размер масива, Выход: считанная матрица
	ifstream out(name);
	if (out.is_open())
	{
		out.seekg(1, ios::beg);			//считывание начнется со второга числа в файле
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (!out.eof())
				{
					out >> arr[i][j];
				}
				else
				{
					cout << "Недостаточно даных\n";
					system("pause");
					exit(0);
				}
			}
		}
		out.close();
	}
	else
	{
		cout << "\nФайл не найден\n";
		system("pause");
		exit(1);
	}
}
void Show_Arr(int** arr, int size) //Функция печати матрицы на екран. Вход: масив, его размер, Выход: матрица на консоли
{
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

}
void Write_Arr_InFile(int argc, char* argv[], int size, int** arr) //Функция записи в файл матрицы.
																   //Вход: аргументы функции main, размер маства, масив Выход: записанная в файл матрица
{
	char* name = new char[40];
	if (argc < 3) {
		cout << "Введите имя файла для записи -> ";
		cin >> name;
	}
	else
	{
		name = argv[2];
	}
	ofstream in;
	in.open(name, ios::out | ios::trunc);		//открыть файл для записи + очистить содержимое
	if (in.is_open())
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				in << arr[i][j] << " ";
			}
			in << "\n";
		}
	}
	else
	{
		cout << "\nОшибка\n";
		system("pause");
		exit(1);
	}
}
void Max_Element(int**arr, int size)		//Функция поиска максимального елемента, оба индекса которого парные
{											//Вход: масив, его размер, Выход: маскимальный елемент и его положение
	int tmp = arr[2][2], x=2, y=2;
	for (int i = 2; i < size; i+=2)
	{
		for (int j = 2; j < size; j+=2)
		{
			if (tmp < arr[i][j])
			{
				tmp = arr[i][j];
				x = i;
				y = j;
			}
		}			
	}
	cout << "\nМаксимальное число с парными индексами => " << tmp << "\nПозиция [" << x << "][" << y << "]";
}
int Min_Element(int**arr, int size, int& rowNum) //Функция поиска минимального елемента главной диагонали
{											     //Вход: масив, его размер, номер строки с минимальным елементом Выход: минимальный елемент и его позиция
	int num = arr[0][0];
	for (int i = 1; i < size; i++)
	{
		if (num > arr[i][i])
		{
			num = arr[i][i];
			rowNum = i;
		}
	}
	return num;
}
void Sort(int**arr, int size, int rowNum)			//Функция сортировки строки, в которой был найден минимальный елемент главной диагонали
{													//Вход: масив, его размер, номер строки с минимальным елементом Выход: отсортированная строка
	int tmp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[rowNum][j] > arr[rowNum][j + 1]) {
				// меняем элементы местами
				tmp = arr[rowNum][j];
				arr[rowNum][j] = arr[rowNum][j + 1];
				arr[rowNum][j + 1] = tmp;
			}
		}
	}	
}
void Delete_Arr(int** arr, int size)		//Функция очистки памяти. Вход: масив, его размер Выход: удаленный масив
{
	for (int i = 0; i < size; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}