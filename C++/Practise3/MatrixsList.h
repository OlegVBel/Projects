#pragma once
#include "Prototypes.h"

namespace Practise3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MatrixsList
	/// </summary>
	public ref class MatrixsList : public System::Windows::Forms::Form
	{
	public:
		MatrixsList(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MatrixsList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel4;
	protected:
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::Button^ buttonCreate;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::GroupBox^ groupBoxActions;
	private: System::Windows::Forms::Button^ buttonDelete;

	private: System::Windows::Forms::Button^ buttonReplace;

	private: System::Windows::Forms::Button^ buttonAdd;

	private: System::Windows::Forms::GroupBox^ groupBoxSettings;
	private: System::Windows::Forms::Label^ labelRow;
	private: System::Windows::Forms::Label^ labelColumn;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownColumn;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownRow;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ labelState;

	private: System::Windows::Forms::DataGridView^ dataGridView;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ buttonTrasportation;
	private: System::Windows::Forms::TextBox^ textBoxValue;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxIndexJ;
	private: System::Windows::Forms::TextBox^ textBoxIndexI;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RadioButton^ radioButtonSpecialView;

	private: System::Windows::Forms::RadioButton^ radioButtonCommonView;

	private: System::Windows::Forms::Button^ buttonShow;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::RadioButton^ radioButtonValue;

	private: System::Windows::Forms::RadioButton^ radioButtonIndex;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBoxNewValue;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->buttonTrasportation = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonCreate = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBoxActions = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxNewValue = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->radioButtonValue = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonIndex = (gcnew System::Windows::Forms::RadioButton());
			this->textBoxValue = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxIndexJ = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIndexI = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButtonSpecialView = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonCommonView = (gcnew System::Windows::Forms::RadioButton());
			this->buttonShow = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonReplace = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->groupBoxSettings = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->labelRow = (gcnew System::Windows::Forms::Label());
			this->labelColumn = (gcnew System::Windows::Forms::Label());
			this->numericUpDownColumn = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownRow = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelState = (gcnew System::Windows::Forms::Label());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBoxActions->SuspendLayout();
			this->groupBoxSettings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownColumn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel4->Controls->Add(this->buttonTrasportation);
			this->panel4->Controls->Add(this->buttonExit);
			this->panel4->Controls->Add(this->buttonClear);
			this->panel4->Controls->Add(this->buttonCreate);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel4->Location = System::Drawing::Point(0, 307);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(653, 53);
			this->panel4->TabIndex = 3;
			// 
			// buttonTrasportation
			// 
			this->buttonTrasportation->BackColor = System::Drawing::Color::LightSkyBlue;
			this->buttonTrasportation->Location = System::Drawing::Point(169, 7);
			this->buttonTrasportation->Name = L"buttonTrasportation";
			this->buttonTrasportation->Size = System::Drawing::Size(150, 41);
			this->buttonTrasportation->TabIndex = 3;
			this->buttonTrasportation->Text = L"Транспонувати матрицю";
			this->buttonTrasportation->UseVisualStyleBackColor = false;
			this->buttonTrasportation->Visible = false;
			this->buttonTrasportation->Click += gcnew System::EventHandler(this, &MatrixsList::buttonTrasportation_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::LightSkyBlue;
			this->buttonExit->Location = System::Drawing::Point(497, 7);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(150, 41);
			this->buttonExit->TabIndex = 2;
			this->buttonExit->Text = L"Вихід";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MatrixsList::buttonExit_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->BackColor = System::Drawing::Color::LightSkyBlue;
			this->buttonClear->Location = System::Drawing::Point(333, 7);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(150, 41);
			this->buttonClear->TabIndex = 1;
			this->buttonClear->Text = L"Очистити матрицю";
			this->buttonClear->UseVisualStyleBackColor = false;
			this->buttonClear->Visible = false;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MatrixsList::buttonClear_Click);
			// 
			// buttonCreate
			// 
			this->buttonCreate->BackColor = System::Drawing::Color::LightSkyBlue;
			this->buttonCreate->Location = System::Drawing::Point(5, 7);
			this->buttonCreate->Name = L"buttonCreate";
			this->buttonCreate->Size = System::Drawing::Size(150, 41);
			this->buttonCreate->TabIndex = 0;
			this->buttonCreate->Text = L"Створити матрицю";
			this->buttonCreate->UseVisualStyleBackColor = false;
			this->buttonCreate->Click += gcnew System::EventHandler(this, &MatrixsList::buttonCreate_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel1->Controls->Add(this->groupBoxActions);
			this->panel1->Controls->Add(this->groupBoxSettings);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(374, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(279, 307);
			this->panel1->TabIndex = 4;
			// 
			// groupBoxActions
			// 
			this->groupBoxActions->Controls->Add(this->label11);
			this->groupBoxActions->Controls->Add(this->textBoxNewValue);
			this->groupBoxActions->Controls->Add(this->label9);
			this->groupBoxActions->Controls->Add(this->label7);
			this->groupBoxActions->Controls->Add(this->label8);
			this->groupBoxActions->Controls->Add(this->radioButtonValue);
			this->groupBoxActions->Controls->Add(this->radioButtonIndex);
			this->groupBoxActions->Controls->Add(this->textBoxValue);
			this->groupBoxActions->Controls->Add(this->label6);
			this->groupBoxActions->Controls->Add(this->label5);
			this->groupBoxActions->Controls->Add(this->label4);
			this->groupBoxActions->Controls->Add(this->textBoxIndexJ);
			this->groupBoxActions->Controls->Add(this->textBoxIndexI);
			this->groupBoxActions->Controls->Add(this->label3);
			this->groupBoxActions->Controls->Add(this->radioButtonSpecialView);
			this->groupBoxActions->Controls->Add(this->radioButtonCommonView);
			this->groupBoxActions->Controls->Add(this->buttonShow);
			this->groupBoxActions->Controls->Add(this->buttonDelete);
			this->groupBoxActions->Controls->Add(this->buttonReplace);
			this->groupBoxActions->Controls->Add(this->buttonAdd);
			this->groupBoxActions->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBoxActions->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxActions->Location = System::Drawing::Point(0, 69);
			this->groupBoxActions->Name = L"groupBoxActions";
			this->groupBoxActions->Size = System::Drawing::Size(279, 238);
			this->groupBoxActions->TabIndex = 1;
			this->groupBoxActions->TabStop = false;
			this->groupBoxActions->Text = L"         Функціонал";
			this->groupBoxActions->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(146, 126);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(33, 17);
			this->label11->TabIndex = 28;
			this->label11->Text = L"New";
			this->label11->Visible = false;
			// 
			// textBoxNewValue
			// 
			this->textBoxNewValue->Location = System::Drawing::Point(179, 124);
			this->textBoxNewValue->Name = L"textBoxNewValue";
			this->textBoxNewValue->Size = System::Drawing::Size(85, 22);
			this->textBoxNewValue->TabIndex = 27;
			this->textBoxNewValue->Text = L"0";
			this->textBoxNewValue->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxNewValue->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(151, 99);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 17);
			this->label9->TabIndex = 26;
			this->label9->Text = L"A";
			this->label9->Visible = false;
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(-3, 146);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(294, 10);
			this->label7->TabIndex = 25;
			this->label7->Text = L"---------------------------------------------------------------------------------"
				L"-----------";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(-3, 183);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(294, 10);
			this->label8->TabIndex = 23;
			this->label8->Text = L"---------------------------------------------------------------------------------"
				L"-----------";
			this->label8->Visible = false;
			// 
			// radioButtonValue
			// 
			this->radioButtonValue->AutoSize = true;
			this->radioButtonValue->Location = System::Drawing::Point(143, 154);
			this->radioButtonValue->Name = L"radioButtonValue";
			this->radioButtonValue->Size = System::Drawing::Size(124, 34);
			this->radioButtonValue->TabIndex = 24;
			this->radioButtonValue->Text = L"Заміна/видалення\r\nпо значенню";
			this->radioButtonValue->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->radioButtonValue->UseVisualStyleBackColor = true;
			this->radioButtonValue->Visible = false;
			// 
			// radioButtonIndex
			// 
			this->radioButtonIndex->AutoSize = true;
			this->radioButtonIndex->Location = System::Drawing::Point(10, 154);
			this->radioButtonIndex->Name = L"radioButtonIndex";
			this->radioButtonIndex->Size = System::Drawing::Size(127, 34);
			this->radioButtonIndex->TabIndex = 23;
			this->radioButtonIndex->Text = L"Заміна/видалення \r\nпо індексам";
			this->radioButtonIndex->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->radioButtonIndex->UseVisualStyleBackColor = true;
			this->radioButtonIndex->Visible = false;
			// 
			// textBoxValue
			// 
			this->textBoxValue->Location = System::Drawing::Point(179, 99);
			this->textBoxValue->Name = L"textBoxValue";
			this->textBoxValue->Size = System::Drawing::Size(85, 22);
			this->textBoxValue->TabIndex = 20;
			this->textBoxValue->Text = L"0";
			this->textBoxValue->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxValue->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(171, 66);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 30);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Елемент для \r\nпошуку   заміни";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label6->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(214, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(12, 17);
			this->label5->TabIndex = 18;
			this->label5->Text = L"j";
			this->label5->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(154, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(12, 17);
			this->label4->TabIndex = 17;
			this->label4->Text = L"i";
			this->label4->Visible = false;
			// 
			// textBoxIndexJ
			// 
			this->textBoxIndexJ->Location = System::Drawing::Point(231, 35);
			this->textBoxIndexJ->Name = L"textBoxIndexJ";
			this->textBoxIndexJ->Size = System::Drawing::Size(33, 22);
			this->textBoxIndexJ->TabIndex = 16;
			this->textBoxIndexJ->Text = L"0";
			this->textBoxIndexJ->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxIndexJ->Visible = false;
			// 
			// textBoxIndexI
			// 
			this->textBoxIndexI->Location = System::Drawing::Point(171, 35);
			this->textBoxIndexI->Name = L"textBoxIndexI";
			this->textBoxIndexI->Size = System::Drawing::Size(33, 22);
			this->textBoxIndexI->TabIndex = 15;
			this->textBoxIndexI->Text = L"0";
			this->textBoxIndexI->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxIndexI->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(157, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 30);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Індекси елемента\r\nматриці";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Visible = false;
			// 
			// radioButtonSpecialView
			// 
			this->radioButtonSpecialView->AutoSize = true;
			this->radioButtonSpecialView->Location = System::Drawing::Point(144, 213);
			this->radioButtonSpecialView->Name = L"radioButtonSpecialView";
			this->radioButtonSpecialView->Size = System::Drawing::Size(96, 19);
			this->radioButtonSpecialView->TabIndex = 9;
			this->radioButtonSpecialView->Text = L"розріджений";
			this->radioButtonSpecialView->UseVisualStyleBackColor = true;
			this->radioButtonSpecialView->Visible = false;
			// 
			// radioButtonCommonView
			// 
			this->radioButtonCommonView->AutoSize = true;
			this->radioButtonCommonView->Location = System::Drawing::Point(144, 193);
			this->radioButtonCommonView->Name = L"radioButtonCommonView";
			this->radioButtonCommonView->Size = System::Drawing::Size(130, 19);
			this->radioButtonCommonView->TabIndex = 8;
			this->radioButtonCommonView->Text = L"звичайний формат";
			this->radioButtonCommonView->UseVisualStyleBackColor = true;
			this->radioButtonCommonView->Visible = false;
			// 
			// buttonShow
			// 
			this->buttonShow->BackColor = System::Drawing::Color::MediumTurquoise;
			this->buttonShow->Location = System::Drawing::Point(8, 194);
			this->buttonShow->Name = L"buttonShow";
			this->buttonShow->Size = System::Drawing::Size(125, 40);
			this->buttonShow->TabIndex = 7;
			this->buttonShow->Text = L"Друк матриці";
			this->buttonShow->UseVisualStyleBackColor = false;
			this->buttonShow->Visible = false;
			this->buttonShow->Click += gcnew System::EventHandler(this, &MatrixsList::buttonShow_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->BackColor = System::Drawing::Color::MediumTurquoise;
			this->buttonDelete->Location = System::Drawing::Point(8, 107);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(125, 40);
			this->buttonDelete->TabIndex = 5;
			this->buttonDelete->Text = L"Видалення елемента";
			this->buttonDelete->UseVisualStyleBackColor = false;
			this->buttonDelete->Visible = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MatrixsList::buttonDelete_Click);
			// 
			// buttonReplace
			// 
			this->buttonReplace->BackColor = System::Drawing::Color::MediumTurquoise;
			this->buttonReplace->Location = System::Drawing::Point(8, 65);
			this->buttonReplace->Name = L"buttonReplace";
			this->buttonReplace->Size = System::Drawing::Size(125, 40);
			this->buttonReplace->TabIndex = 4;
			this->buttonReplace->Text = L"Заміна елемента";
			this->buttonReplace->UseVisualStyleBackColor = false;
			this->buttonReplace->Visible = false;
			this->buttonReplace->Click += gcnew System::EventHandler(this, &MatrixsList::buttonReplace_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::MediumTurquoise;
			this->buttonAdd->Location = System::Drawing::Point(8, 23);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(125, 40);
			this->buttonAdd->TabIndex = 3;
			this->buttonAdd->Text = L"Додавання елемента";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Visible = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MatrixsList::buttonAdd_Click);
			// 
			// groupBoxSettings
			// 
			this->groupBoxSettings->Controls->Add(this->label10);
			this->groupBoxSettings->Controls->Add(this->labelRow);
			this->groupBoxSettings->Controls->Add(this->labelColumn);
			this->groupBoxSettings->Controls->Add(this->numericUpDownColumn);
			this->groupBoxSettings->Controls->Add(this->numericUpDownRow);
			this->groupBoxSettings->Controls->Add(this->label2);
			this->groupBoxSettings->Dock = System::Windows::Forms::DockStyle::Top;
			this->groupBoxSettings->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxSettings->Location = System::Drawing::Point(0, 0);
			this->groupBoxSettings->Name = L"groupBoxSettings";
			this->groupBoxSettings->Size = System::Drawing::Size(279, 69);
			this->groupBoxSettings->TabIndex = 0;
			this->groupBoxSettings->TabStop = false;
			this->groupBoxSettings->Text = L"Налаштування";
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(-3, 56);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(294, 10);
			this->label10->TabIndex = 27;
			this->label10->Text = L"---------------------------------------------------------------------------------"
				L"-----------";
			// 
			// labelRow
			// 
			this->labelRow->AutoSize = true;
			this->labelRow->Location = System::Drawing::Point(7, 39);
			this->labelRow->Name = L"labelRow";
			this->labelRow->Size = System::Drawing::Size(31, 15);
			this->labelRow->TabIndex = 19;
			this->labelRow->Text = L"Row";
			// 
			// labelColumn
			// 
			this->labelColumn->AutoSize = true;
			this->labelColumn->Location = System::Drawing::Point(136, 39);
			this->labelColumn->Name = L"labelColumn";
			this->labelColumn->Size = System::Drawing::Size(48, 15);
			this->labelColumn->TabIndex = 18;
			this->labelColumn->Text = L"Column";
			// 
			// numericUpDownColumn
			// 
			this->numericUpDownColumn->Location = System::Drawing::Point(184, 35);
			this->numericUpDownColumn->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDownColumn->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownColumn->Name = L"numericUpDownColumn";
			this->numericUpDownColumn->Size = System::Drawing::Size(83, 22);
			this->numericUpDownColumn->TabIndex = 17;
			this->numericUpDownColumn->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDownColumn->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// numericUpDownRow
			// 
			this->numericUpDownRow->Location = System::Drawing::Point(38, 36);
			this->numericUpDownRow->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDownRow->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownRow->Name = L"numericUpDownRow";
			this->numericUpDownRow->Size = System::Drawing::Size(83, 22);
			this->numericUpDownRow->TabIndex = 16;
			this->numericUpDownRow->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDownRow->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(92, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 15);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Розмір матриці";
			// 
			// labelState
			// 
			this->labelState->BackColor = System::Drawing::SystemColors::Info;
			this->labelState->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->labelState->Location = System::Drawing::Point(0, 284);
			this->labelState->Name = L"labelState";
			this->labelState->Size = System::Drawing::Size(374, 23);
			this->labelState->TabIndex = 5;
			this->labelState->Text = L"Матриця не створена";
			this->labelState->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dataGridView->Location = System::Drawing::Point(0, 0);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->Size = System::Drawing::Size(374, 307);
			this->dataGridView->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->labelState);
			this->panel2->Controls->Add(this->dataGridView);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(374, 307);
			this->panel2->TabIndex = 5;
			// 
			// MatrixsList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(653, 360);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MatrixsList";
			this->Text = L"MatrixsList";
			this->panel4->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->groupBoxActions->ResumeLayout(false);
			this->groupBoxActions->PerformLayout();
			this->groupBoxSettings->ResumeLayout(false);
			this->groupBoxSettings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownColumn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		int row, column, MAXSize, CurrentSize, IndI, IndJ;
		double Value, NewValue;
		Column** ptr, **ptr2;
		/// <summary>
		/// Create dataGriedView area with nulls
		/// </summary>
		/// <param name="row"></param>
		/// <param name="column"></param>
		void CreateGrid(int row, int column) 
		{
			dataGridView->RowCount = row;
			dataGridView->ColumnCount = column;
			for (int i = 0; i < column; ++i)
			{
				dataGridView->Columns[i]->HeaderCell->Value = Convert::ToString(i);
				dataGridView->Columns[i]->SortMode = DataGridViewColumnSortMode::NotSortable;
			}
			for (int i = 0; i < row; ++i)
			{
				dataGridView->Rows[i]->HeaderCell->Value = Convert::ToString(i);
				for (int j = 0; j < column; ++j)
				{
					dataGridView->Rows[i]->Cells[j]->Value = Convert::ToString(0);
				}
			}
		}
		/// <summary>
		/// Common matrix format
		/// </summary>
		/// <param name="row">common row</param>
		/// <param name="column">common column</param>
		/// <param name="size">quantity of element</param>
		/// <param name="ptr">struct</param>
		void ShowMatrixCommonFormat(int row, int column, Column** ptr)
		{
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < column; j++)
				{
					dataGridView->Rows[i]->Cells[j]->Value = Convert::ToString(Search(i, j, ptr));
				}
			}			
		}
		/// <summary>
		/// Rarefied matrix format
		/// </summary>
		/// <param name="row">common row</param>
		/// <param name="column">common column</param>
		/// <param name="size">quantity of element</param>
		/// <param name="ptr">struct</param>
		void ShowMatrixRarefiedFormat(int row, int column, int size, Column** ptr)
		{
			dataGridView->RowCount = 1;
			dataGridView->ColumnCount = size;
			int k = 0;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < column; j++)
				{
					if (Search(i,j,ptr) != 0.)
					{
						dataGridView->Rows[0]->Cells[k++]->Value = "(" + i + "," + j + ") " + Convert::ToString(Search(i, j, ptr));
					}
				}

			}
		}
		/// <summary>
		/// Clearing dataGridView
		/// </summary>
		void ClearGrid() 
		{
			dataGridView->Rows->Clear();
			dataGridView->Columns->Clear();
		}

	/// <summary>
	/// Create matrix
	/// </summary>
	private: System::Void buttonCreate_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		row = Convert::ToInt32(numericUpDownRow->Value);
		column = Convert::ToInt32(numericUpDownColumn->Value);
		MAXSize = row * column * 30 / 100;
		CreateGrid(row, column);
		CurrentSize = 0;
		ptr = new Column* [row];
		for (int i = 0; i < row; i++)
		{
			ptr[i] = nullptr;
		}
		//Visible = true for another elements
		{
			groupBoxActions->Visible = true;
			buttonTrasportation->Visible = true;
			buttonClear->Visible = true;
			buttonAdd->Visible = true;
			buttonReplace->Visible = true;
			buttonDelete->Visible = true;
			buttonShow->Visible = true;
			label3->Visible = true;
			label4->Visible = true;
			label5->Visible = true;
			label6->Visible = true;
			label7->Visible = true;
			label8->Visible = true;
			label9->Visible = true;
			label11->Visible = true;
			textBoxIndexI->Visible = true;
			textBoxIndexJ->Visible = true;
			textBoxValue->Visible = true;
			textBoxNewValue->Visible = true;
			radioButtonIndex->Visible = true;
			radioButtonValue->Visible = true;
			radioButtonCommonView->Visible = true;
			radioButtonSpecialView->Visible = true;				
		}
		labelState->Text = "Створено матрицю розміром [" + row.ToString() +"][" + column.ToString() +"]";
	}
	/// <summary>
	/// Add element
	/// </summary>
	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (int::TryParse(textBoxIndexI->Text, IndI) && IndI >= 0 && IndI < row &&
			int::TryParse(textBoxIndexJ->Text, IndJ) && IndJ >= 0 && IndJ < column &&
			double::TryParse(textBoxValue->Text, Value))
		{
			if (Value == 0)
			{
				MessageBox::Show("Для додавання елемента необхідно ввести число відмінне від нуля", "Inform", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else if (CurrentSize<=MAXSize && Add(IndI, IndJ, Value, ptr) == true)
			{
				CurrentSize++;
				labelState->Text = "Додано новый елемент у позицію [" + IndI.ToString() + "][" + IndJ.ToString() + "]";
			}
			else
			{
				MessageBox::Show("Досягнута максимальна кількість елементів для даної матриці", "Inform", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		else
		{
			MessageBox::Show("Помилка введення даних", "Inform", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	/// <summary>
	/// Replace elements
	/// </summary>
	private: System::Void buttonReplace_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (radioButtonIndex->Checked)
		{
			if (int::TryParse(textBoxIndexI->Text, IndI) && IndI >= 0 &&  IndI < row &&
				int::TryParse(textBoxIndexJ->Text, IndJ) && IndJ >= 0 &&  IndJ < column && 
				double::TryParse(textBoxNewValue->Text, NewValue))
			{
				if (!ReplaceWithIndex(IndI, IndJ, NewValue, ptr))
				{
					MessageBox::Show("Значення елемента з вказаними індексами дорівнює нулю", "Inform", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else
				{
					labelState->Text = "Елемент замінено на " + NewValue.ToString() + " у позицію [" + IndI.ToString() + "][" + IndJ.ToString() + "]";
				}
			}
			else
			{
				MessageBox::Show("Помилка считування даних", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else if (radioButtonValue->Checked)
		{
			if (int::TryParse(textBoxIndexI->Text, IndI) && IndI >= 0 && IndI < row &&
				int::TryParse(textBoxIndexJ->Text, IndJ) && IndJ >= 0 && IndJ < column &&
				double::TryParse(textBoxValue->Text, Value) && double::TryParse(textBoxNewValue->Text, NewValue))
			{
				if (NewValue == 0)
				{
					MessageBox::Show("Число для заміни не може бути нулем!!!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else if (!ReplaceWithValue(row, Value, NewValue, ptr))
				{
					MessageBox::Show("Не було знайдено елемента з обраним значенням", "Inform", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else
				{
					labelState->Text = "Перший елемент зі значенням " + Value.ToString() +  " замінено на " + NewValue.ToString();
				}
			}
			else
			{
				MessageBox::Show("Помилка считування даних", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else
		{
			MessageBox::Show("Оберіть метод пошуку для заміни елемента", "Inform", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	/// <summary>
	/// Delete element
	/// </summary>
	private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (radioButtonIndex->Checked)
		{
			if (int::TryParse(textBoxIndexI->Text, IndI) && IndI >= 0 && int::TryParse(textBoxIndexJ->Text, IndJ) && IndJ >= 0 && IndI < row && IndJ < column)
			{
				if (DeleteWithIndex(IndI, IndJ, ptr))
				{
					CurrentSize--;
					labelState->Text = "Елемент на позиції [" + IndI.ToString() + "][" + IndJ.ToString() + "] було видалено.";
				}
				else
				{
					MessageBox::Show("Значення елемента з вказаними індексами дорівнює нулю", "Inform", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			else if (IndI == row || IndJ == column)
			{
				MessageBox::Show("Помилка введення індексів для роботи з функціями. Останній індекс матриці дорівнює k-1",
					"Error",MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				MessageBox::Show("Помилка считування індексів", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else if (radioButtonValue->Checked)
		{
			if (double::TryParse(textBoxValue->Text, Value))
			{
				if (DeleteWithValue(row, Value, ptr))
				{
					CurrentSize--;
					labelState->Text = "Перший елемент зі значенням " + Value.ToString() + " було видалено.";
				}
				else
				{
					MessageBox::Show("Значення елемента з вказаними індексами дорівнює нулю", "Inform", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			else
			{
				MessageBox::Show("Помилка считування значення", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else
		{
			MessageBox::Show("Оберіть метод видалення елемента для видалення", "Inform", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	/// <summary>
	/// Show matrix
	/// </summary>
	private: System::Void buttonShow_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (radioButtonCommonView->Checked)
		{
			ClearGrid();
			CreateGrid(row, column);
			ShowMatrixCommonFormat(row, column, ptr);
			labelState->Text = "Матриця у загальному вигляді";
		}
		else if (radioButtonSpecialView->Checked)
		{
			ClearGrid();
			ShowMatrixRarefiedFormat(row, column, CurrentSize, ptr);
			labelState->Text = "Матриця у розрідженому вигляді";
		}
		else 
		{
			MessageBox::Show("Оберіть метод друку матриці","Inform", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	/// <summary>
	/// ClearGrid
	/// </summary>
	private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		ClearGrid();
		ClearMatrix(row, ptr);
		MessageBox::Show("Матрицю очищено", "Inform", MessageBoxButtons::OK, MessageBoxIcon::Information);
		labelState->Text = "Матрицю очищено";
		CurrentSize = 0;
		//Visible = true for another elements
		{
			groupBoxActions->Visible = false;
			buttonTrasportation->Visible = false;
			buttonClear->Visible = false;
			buttonAdd->Visible = false;
			buttonReplace->Visible = false;
			buttonDelete->Visible = false;
			buttonShow->Visible = false;
			label3->Visible = false;
			label4->Visible = false;
			label5->Visible = false;
			label6->Visible = false;
			label7->Visible = false;
			label8->Visible = false;
			label9->Visible = false;
			label11->Visible = false;
			textBoxIndexI->Visible = false;
			textBoxIndexJ->Visible = false;
			textBoxValue->Visible = false;
			textBoxNewValue->Visible = false;
			radioButtonIndex->Visible = false;
			radioButtonValue->Visible = false;
			radioButtonCommonView->Visible = false;
			radioButtonSpecialView->Visible = false;
		}

	}
	/// <summary>
	/// Trasportation of matrix
	/// </summary>
	private: System::Void buttonTrasportation_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		ptr = Trasportation(row, column, ptr);
		int tmp = row;
		row = column;
		column = tmp;
		ClearGrid();
		CreateGrid(row, column);
		ShowMatrixCommonFormat(row, column, ptr);
	}
	/// <summary>
	/// Exit
	/// </summary>
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Close();
	}
};
}
