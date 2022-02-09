#pragma once
#include "Prototypes.h"
namespace Practise1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CalcInterval
	/// </summary>
	public ref class CalcInterval : public System::Windows::Forms::Form
	{
	public:
		CalcInterval(void)
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
		~CalcInterval()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ buttonCalc;
	protected:


	private: System::Windows::Forms::Label^ labelRes;
	private: System::Windows::Forms::RichTextBox^ richTextBoxRes;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::GroupBox^ groupBoxSetting;

	private: System::Windows::Forms::ComboBox^ comboBoxExamples;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Label;
	private: System::Windows::Forms::TextBox^ textBoxEps;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownBorderB;


	private: System::Windows::Forms::GroupBox^ groupBoxCalcWay;


	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBoxMethods;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Button^ buttonClear;



	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownBorderA;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::CheckBox^ checkBoxFunkNull;




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
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonCalc = (gcnew System::Windows::Forms::Button());
			this->labelRes = (gcnew System::Windows::Forms::Label());
			this->richTextBoxRes = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBoxSetting = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownBorderA = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxEps = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownBorderB = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBoxExamples = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Label = (gcnew System::Windows::Forms::Label());
			this->groupBoxCalcWay = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxFunkNull = (gcnew System::Windows::Forms::CheckBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBoxMethods = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBoxSetting->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownBorderA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownBorderB))->BeginInit();
			this->groupBoxCalcWay->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel3->Controls->Add(this->buttonExit);
			this->panel3->Controls->Add(this->buttonClear);
			this->panel3->Controls->Add(this->buttonCalc);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 217);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(684, 63);
			this->panel3->TabIndex = 2;
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::MediumPurple;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit->Location = System::Drawing::Point(490, 10);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(180, 45);
			this->buttonExit->TabIndex = 2;
			this->buttonExit->Text = L"Вихід";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &CalcInterval::buttonExit_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->BackColor = System::Drawing::Color::PaleTurquoise;
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClear->Location = System::Drawing::Point(171, 7);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(300, 50);
			this->buttonClear->TabIndex = 1;
			this->buttonClear->Text = L"Очистити вікно результатів";
			this->buttonClear->UseVisualStyleBackColor = false;
			this->buttonClear->Visible = false;
			this->buttonClear->Click += gcnew System::EventHandler(this, &CalcInterval::buttonClear_Click);
			// 
			// buttonCalc
			// 
			this->buttonCalc->BackColor = System::Drawing::Color::MediumPurple;
			this->buttonCalc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCalc->Location = System::Drawing::Point(4, 9);
			this->buttonCalc->Name = L"buttonCalc";
			this->buttonCalc->Size = System::Drawing::Size(150, 45);
			this->buttonCalc->TabIndex = 0;
			this->buttonCalc->Text = L"Розрахувати";
			this->buttonCalc->UseVisualStyleBackColor = false;
			this->buttonCalc->Click += gcnew System::EventHandler(this, &CalcInterval::buttonCalc_Click);
			// 
			// labelRes
			// 
			this->labelRes->AutoSize = true;
			this->labelRes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelRes->Location = System::Drawing::Point(128, 7);
			this->labelRes->Name = L"labelRes";
			this->labelRes->Size = System::Drawing::Size(84, 17);
			this->labelRes->TabIndex = 1;
			this->labelRes->Text = L"Результати";
			this->labelRes->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// richTextBoxRes
			// 
			this->richTextBoxRes->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->richTextBoxRes->Location = System::Drawing::Point(0, 27);
			this->richTextBoxRes->Name = L"richTextBoxRes";
			this->richTextBoxRes->Size = System::Drawing::Size(358, 190);
			this->richTextBoxRes->TabIndex = 0;
			this->richTextBoxRes->Text = L"";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBoxSetting);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(149, 217);
			this->panel1->TabIndex = 2;
			// 
			// groupBoxSetting
			// 
			this->groupBoxSetting->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->groupBoxSetting->Controls->Add(this->label10);
			this->groupBoxSetting->Controls->Add(this->numericUpDownBorderA);
			this->groupBoxSetting->Controls->Add(this->label9);
			this->groupBoxSetting->Controls->Add(this->textBoxEps);
			this->groupBoxSetting->Controls->Add(this->label6);
			this->groupBoxSetting->Controls->Add(this->label5);
			this->groupBoxSetting->Controls->Add(this->label3);
			this->groupBoxSetting->Controls->Add(this->label2);
			this->groupBoxSetting->Controls->Add(this->numericUpDownBorderB);
			this->groupBoxSetting->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBoxSetting->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxSetting->Location = System::Drawing::Point(0, 0);
			this->groupBoxSetting->Name = L"groupBoxSetting";
			this->groupBoxSetting->Size = System::Drawing::Size(149, 217);
			this->groupBoxSetting->TabIndex = 6;
			this->groupBoxSetting->TabStop = false;
			this->groupBoxSetting->Text = L"Налаштування для розрахунку";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(18, 90);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(16, 16);
			this->label10->TabIndex = 16;
			this->label10->Text = L"b";
			// 
			// numericUpDownBorderA
			// 
			this->numericUpDownBorderA->Location = System::Drawing::Point(37, 64);
			this->numericUpDownBorderA->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDownBorderA->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDownBorderA->Name = L"numericUpDownBorderA";
			this->numericUpDownBorderA->Size = System::Drawing::Size(83, 21);
			this->numericUpDownBorderA->TabIndex = 15;
			this->numericUpDownBorderA->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDownBorderA->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(-3, 110);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(154, 15);
			this->label9->TabIndex = 12;
			this->label9->Text = L"_____________________";
			// 
			// textBoxEps
			// 
			this->textBoxEps->Location = System::Drawing::Point(38, 172);
			this->textBoxEps->Name = L"textBoxEps";
			this->textBoxEps->Size = System::Drawing::Size(83, 21);
			this->textBoxEps->TabIndex = 14;
			this->textBoxEps->Text = L"0.1";
			this->textBoxEps->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(20, 175);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"ε";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 136);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 30);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Точність обчислення \r\nінтервалу";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(18, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"а";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 15);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Інтервал функції";
			// 
			// numericUpDownBorderB
			// 
			this->numericUpDownBorderB->Location = System::Drawing::Point(38, 89);
			this->numericUpDownBorderB->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->numericUpDownBorderB->Name = L"numericUpDownBorderB";
			this->numericUpDownBorderB->Size = System::Drawing::Size(83, 21);
			this->numericUpDownBorderB->TabIndex = 7;
			this->numericUpDownBorderB->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDownBorderB->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			// 
			// comboBoxExamples
			// 
			this->comboBoxExamples->FormattingEnabled = true;
			this->comboBoxExamples->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"3 * cos(2 * x - 4)", L"x - log(x)", L"3 * x * x - 5 * x + 16" });
			this->comboBoxExamples->Location = System::Drawing::Point(17, 177);
			this->comboBoxExamples->Name = L"comboBoxExamples";
			this->comboBoxExamples->Size = System::Drawing::Size(156, 23);
			this->comboBoxExamples->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 157);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 15);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Вираз для розрахунку";
			// 
			// Label
			// 
			this->Label->AutoSize = true;
			this->Label->Location = System::Drawing::Point(31, 26);
			this->Label->Name = L"Label";
			this->Label->Size = System::Drawing::Size(129, 30);
			this->Label->TabIndex = 1;
			this->Label->Text = L"Метод знаходження \r\nмінімуму функції";
			this->Label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// groupBoxCalcWay
			// 
			this->groupBoxCalcWay->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->groupBoxCalcWay->Controls->Add(this->checkBoxFunkNull);
			this->groupBoxCalcWay->Controls->Add(this->label8);
			this->groupBoxCalcWay->Controls->Add(this->comboBoxMethods);
			this->groupBoxCalcWay->Controls->Add(this->label7);
			this->groupBoxCalcWay->Controls->Add(this->Label);
			this->groupBoxCalcWay->Controls->Add(this->label1);
			this->groupBoxCalcWay->Controls->Add(this->comboBoxExamples);
			this->groupBoxCalcWay->Dock = System::Windows::Forms::DockStyle::Right;
			this->groupBoxCalcWay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxCalcWay->Location = System::Drawing::Point(507, 0);
			this->groupBoxCalcWay->Name = L"groupBoxCalcWay";
			this->groupBoxCalcWay->Size = System::Drawing::Size(177, 217);
			this->groupBoxCalcWay->TabIndex = 3;
			this->groupBoxCalcWay->TabStop = false;
			this->groupBoxCalcWay->Text = L"Спосіб розрахунку";
			// 
			// checkBoxFunkNull
			// 
			this->checkBoxFunkNull->AutoSize = true;
			this->checkBoxFunkNull->Location = System::Drawing::Point(10, 104);
			this->checkBoxFunkNull->Name = L"checkBoxFunkNull";
			this->checkBoxFunkNull->Size = System::Drawing::Size(170, 34);
			this->checkBoxFunkNull->TabIndex = 11;
			this->checkBoxFunkNull->Text = L"Обчислення нуля функції\r\nділенням відрізку навпіл\r\n";
			this->checkBoxFunkNull->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(-3, 135);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(210, 15);
			this->label8->TabIndex = 10;
			this->label8->Text = L"_____________________________";
			// 
			// comboBoxMethods
			// 
			this->comboBoxMethods->FormattingEnabled = true;
			this->comboBoxMethods->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"", L"Перебір", L"Ділення відрізку навпіл",
					L"Золотий переріз", L"Фібоначчі", L"Дотичні", L"Параболи"
			});
			this->comboBoxMethods->Location = System::Drawing::Point(17, 61);
			this->comboBoxMethods->Name = L"comboBoxMethods";
			this->comboBoxMethods->Size = System::Drawing::Size(156, 23);
			this->comboBoxMethods->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(-3, 81);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(203, 15);
			this->label7->TabIndex = 6;
			this->label7->Text = L"____________________________";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Info;
			this->panel2->Controls->Add(this->richTextBoxRes);
			this->panel2->Controls->Add(this->labelRes);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(149, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(358, 217);
			this->panel2->TabIndex = 4;
			// 
			// CalcInterval
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 280);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->groupBoxCalcWay);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(700, 319);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(700, 319);
			this->Name = L"CalcInterval";
			this->Text = L"CalcInterval";
			this->panel3->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->groupBoxSetting->ResumeLayout(false);
			this->groupBoxSetting->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownBorderA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownBorderB))->EndInit();
			this->groupBoxCalcWay->ResumeLayout(false);
			this->groupBoxCalcWay->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		int BorderA, BorderB;
		double eps, f_x, x;

	private: System::Void buttonCalc_Click(System::Object^ sender, System::EventArgs^ e) {

		if (double::TryParse(textBoxEps->Text, eps) && eps>0.000001 && eps<1)
		{
			BorderA = Convert::ToInt32(numericUpDownBorderA->Value);
			BorderB = Convert::ToInt32(numericUpDownBorderB->Value);		
			richTextBoxRes->Clear();

			if (comboBoxMethods->SelectedIndex == 0)
			{
				if (comboBoxExamples->SelectedIndex == 0) 
				{
					if (checkBoxFunkNull->Checked)
					{
						if (Func1(FuncNull(Func1, BorderB, BorderA, eps)) < 0.3 && Func1(FuncNull(Func1, BorderB, BorderA, eps)) > -0.1)
						{
							richTextBoxRes->AppendText("Використано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func1, BorderB, BorderA, eps).ToString()
								+ "\nЗначення функції f(x) = " + Func1(FuncNull(Func1, BorderB, BorderA, eps)));
						}
						else
						{
							richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
						}
					}
				}
				else if (comboBoxExamples->SelectedIndex == 1) 
				{
					if (BorderA>=0)
					{
						if (checkBoxFunkNull->Checked)
						{
							if (Func2(FuncNull(Func2, BorderB, BorderA, eps)) < 0.3 && Func2(FuncNull(Func2, BorderB, BorderA, eps)) > -0.1)
							{
								richTextBoxRes->AppendText("Використано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func2, BorderB, BorderA, eps).ToString()
									+ "\nЗначення функції f(x) = " + Func2(FuncNull(Func2, BorderB, BorderA, eps)));
							}
							else
							{
								richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
							}
						}
					}
					else
					{
						MessageBox::Show("Логарифм не може приймати від’ємний х", "Error!!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}

				}
				else if (comboBoxExamples->SelectedIndex == 2) 
				{
					if (checkBoxFunkNull->Checked)
					{
						if (Func3(FuncNull(Func3, BorderB, BorderA, eps)) < 0.3 && Func3(FuncNull(Func3, BorderB, BorderA, eps)) > -0.1)
						{
							richTextBoxRes->AppendText("Використано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func3, BorderB, BorderA, eps).ToString()
								+ "\nЗначення функції f(x) = " + Func3(FuncNull(Func3, BorderB, BorderA, eps)));
						}
						else
						{
							richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
						}
					}
				}
				else
				{
					MessageBox::Show("Оберіть функцію для знаходження її кореня", "Attention", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			else if (comboBoxMethods->SelectedIndex == 1)
			{
				if (comboBoxExamples->SelectedIndex == 0)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nИнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення функції f(x) = " + Func1(Iteration(Func1, BorderB, BorderA, eps)).ToString() + "\nЗ точністю е = " + eps.ToString()
						+ "\nx = " + Iteration(Func1, BorderB, BorderA, eps).ToString());
					if (checkBoxFunkNull->Checked)
					{
						if (Func1(FuncNull(Func1, BorderB, BorderA, eps)) < 0.3 && Func1(FuncNull(Func1, BorderB, BorderA, eps)) > -0.1)
						{
							richTextBoxRes->AppendText("\nВикористано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func1, BorderB, BorderA, eps).ToString()
								+ "\nЗначення функції f(x) = " + Func1(FuncNull(Func1, BorderB, BorderA, eps)));
						}
						else
						{
							richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
						}
					}
				}
				else if (comboBoxExamples->SelectedIndex == 1)
				{
					if (BorderA >= 0)
					{
						richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nИнтервал : A = "
							+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення функції f(x) = " + Func2(Iteration(Func2, BorderB, BorderA, eps)).ToString() + "\nЗ точністю е = " + eps.ToString()
							+ "\nx = " + Iteration(Func2, BorderB, BorderA, eps).ToString());
						if (checkBoxFunkNull->Checked)
						{
							if (Func2(FuncNull(Func2, BorderB, BorderA, eps)) < 0.3 && Func2(FuncNull(Func2, BorderB, BorderA, eps)) > -0.1)
							{
								richTextBoxRes->AppendText("\nВикористано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func2, BorderB, BorderA, eps).ToString()
									+ "\nЗначення функції f(x) = " + Func2(FuncNull(Func2, BorderB, BorderA, eps)));
							}
							else
							{
								richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
							}
						}
					}
					else
					{
						MessageBox::Show("Логарифм не може приймати від’ємний х", "Error!!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else if (comboBoxExamples->SelectedIndex == 2)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nИнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення функції f(x) = " + Func3(Iteration(Func3, BorderB, BorderA, eps)).ToString() + "\nЗ точністю е = " + eps.ToString()
						+ "\nx = " + Iteration(Func3, BorderB, BorderA, eps).ToString());
					if (checkBoxFunkNull->Checked)
					{
						if (Func3(FuncNull(Func3, BorderB, BorderA, eps)) < 0.3 && Func3(FuncNull(Func3, BorderB, BorderA, eps)) > -0.1)
						{
							richTextBoxRes->AppendText("\nВикористано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func3, BorderB, BorderA, eps).ToString()
								+ "\nЗначення функції f(x) = " + Func3(FuncNull(Func3, BorderB, BorderA, eps)));
						}
						else
						{
							richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
						}
					}
				}
				else
				{
					MessageBox::Show("Оберіть функцію для знаходження мінімуму", "Attention", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			else if (comboBoxMethods->SelectedIndex == 2)
			{
				if (comboBoxExamples->SelectedIndex == 0)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nИнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення функції f(x) = " + Func1(HC_Method(Func1, BorderB, BorderA, eps)).ToString() + "\nЗ точністю е = " + eps.ToString()
						+ "\nx = " + HC_Method(Func1, BorderB, BorderA, eps).ToString());
					if (checkBoxFunkNull->Checked)
					{
						if (Func1(FuncNull(Func1, BorderB, BorderA, eps)) < 0.3 && Func1(FuncNull(Func1, BorderB, BorderA, eps)) > -0.1)
						{
							richTextBoxRes->AppendText("\nВикористано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func1, BorderB, BorderA, eps).ToString()
								+ "\nЗначення функції f(x) = " + Func1(FuncNull(Func1, BorderB, BorderA, eps)));
						}
						else
						{
							richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
						}
					}
				}
				else if (comboBoxExamples->SelectedIndex == 1)
				{
					if (BorderA >= 0)
					{
						richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nИнтервал : A = "
							+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення функції f(x) = " + Func2(HC_Method(Func2, BorderB, BorderA, eps)).ToString() + "\nЗ точністю е = " + eps.ToString()
							+ "\nx = " + HC_Method(Func2, BorderB, BorderA, eps).ToString());
						if (checkBoxFunkNull->Checked)
						{
							if (Func2(FuncNull(Func2, BorderB, BorderA, eps)) < 0.3 && Func2(FuncNull(Func2, BorderB, BorderA, eps)) > -0.1)
							{
								richTextBoxRes->AppendText("\nВикористано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func2, BorderB, BorderA, eps).ToString()
									+ "\nЗначення функції f(x) = " + Func2(FuncNull(Func2, BorderB, BorderA, eps)));
							}
							else
							{
								richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
							}
						}
					}
					else
					{
						MessageBox::Show("Логарифм не може приймати від’ємний х", "Error!!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else if (comboBoxExamples->SelectedIndex == 2)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nИнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення функції f(x) = " + Func3(HC_Method(Func3, BorderB, BorderA, eps)).ToString() + "\nЗ точністю е = " + eps.ToString()
						+ "\nx = " + HC_Method(Func3, BorderB, BorderA, eps).ToString());
					if (checkBoxFunkNull->Checked)
					{
						if (Func3(FuncNull(Func3, BorderB, BorderA, eps)) < 0.3 && Func3(FuncNull(Func3, BorderB, BorderA, eps)) > -0.1)
						{
							richTextBoxRes->AppendText("\nВикористано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func3, BorderB, BorderA, eps).ToString()
								+ "\nЗначення функції f(x) = " + Func3(FuncNull(Func3, BorderB, BorderA, eps)));
						}
						else
						{
							richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
						}
					}
				}
				else
				{
					MessageBox::Show("Оберіть функцію для знаходження мінімуму", "Attention", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			else if (comboBoxMethods->SelectedIndex == 3)
			{
				if (comboBoxExamples->SelectedIndex == 0)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nИнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення функції f(x) = " + Func1(Golden_Section(Func1, BorderB, BorderA, eps)).ToString() + "\nЗ точністю е = " + eps.ToString()
						+ "\nx = " + Golden_Section(Func1, BorderB, BorderA, eps).ToString());
					if (checkBoxFunkNull->Checked)
					{
						if (Func1(FuncNull(Func1, BorderB, BorderA, eps)) < 0.3 && Func1(FuncNull(Func1, BorderB, BorderA, eps)) > -0.1)
						{
							richTextBoxRes->AppendText("\nВикористано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func1, BorderB, BorderA, eps).ToString()
								+ "\nЗначення функції f(x) = " + Func1(FuncNull(Func1, BorderB, BorderA, eps)));
						}
						else
						{
							richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
						}
					}
				}
				else if (comboBoxExamples->SelectedIndex == 1)
				{
					if (BorderA >= 0)
					{
						richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nИнтервал : A = "
							+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення функції f(x) = " + Func2(Golden_Section(Func2, BorderB, BorderA, eps)).ToString() + "\nЗ точністю е = " + eps.ToString()
							+ "\nx = " + Golden_Section(Func2, BorderB, BorderA, eps).ToString());
						if (checkBoxFunkNull->Checked)
						{
							if (Func2(FuncNull(Func2, BorderB, BorderA, eps)) < 0.3 && Func2(FuncNull(Func2, BorderB, BorderA, eps)) > -0.1)
							{
								richTextBoxRes->AppendText("\nВикористано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func2, BorderB, BorderA, eps).ToString()
									+ "\nЗначення функції f(x) = " + Func2(FuncNull(Func2, BorderB, BorderA, eps)));
							}
							else
							{
								richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
							}
						}
					}
					else
					{
						MessageBox::Show("Логарифм не може приймати від’ємний х", "Error!!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else if (comboBoxExamples->SelectedIndex == 2)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nИнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення функції f(x) = " + Func3(Golden_Section(Func3, BorderB, BorderA, eps)).ToString() + "\nЗ точністю е = " + eps.ToString()
						+ "\nx = " + Golden_Section(Func3, BorderB, BorderA, eps).ToString());
					if (checkBoxFunkNull->Checked)
					{
						if (Func3(FuncNull(Func3, BorderB, BorderA, eps)) < 0.3 && Func3(FuncNull(Func3, BorderB, BorderA, eps)) > -0.1)
						{
							richTextBoxRes->AppendText("\nВикористано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func3, BorderB, BorderA, eps).ToString()
								+ "\nЗначення функції f(x) = " + Func3(FuncNull(Func3, BorderB, BorderA, eps)));
						}
						else
						{
							richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
						}
					}
				}
				else
				{
					MessageBox::Show("Оберіть функцію для знаходження мінімуму", "Attention", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			else if (comboBoxMethods->SelectedIndex == 4)
			{
				if (comboBoxExamples->SelectedIndex == 0)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nИнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення функції f(x) = " + Func1(Fibanachi(Func1, BorderB, BorderA, eps)).ToString() + "\nЗ точністю е = " + eps.ToString()
						+ "\nx = " + Fibanachi(Func1, BorderB, BorderA, eps).ToString());
					if (checkBoxFunkNull->Checked)
					{
						if (Func1(FuncNull(Func1, BorderB, BorderA, eps)) < 0.3 && Func1(FuncNull(Func1, BorderB, BorderA, eps)) > -0.1)
						{
							richTextBoxRes->AppendText("\nВикористано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func1, BorderB, BorderA, eps).ToString()
								+ "\nЗначення функції f(x) = " + Func1(FuncNull(Func1, BorderB, BorderA, eps)));
						}
						else
						{
							richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
						}
					}
				}
				else if (comboBoxExamples->SelectedIndex == 1)
				{
					if (BorderA >= 0)
					{
						richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nИнтервал : A = "
							+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення функції f(x) = " + Func2(Fibanachi(Func2, BorderB, BorderA, eps)).ToString() + "\nЗ точністю е = " + eps.ToString()
							+ "\nx = " + Fibanachi(Func2, BorderB, BorderA, eps).ToString());
						if (checkBoxFunkNull->Checked)
						{
							if (Func2(FuncNull(Func2, BorderB, BorderA, eps)) < 0.3 && Func2(FuncNull(Func2, BorderB, BorderA, eps)) > -0.1)
							{
								richTextBoxRes->AppendText("\nВикористано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func2, BorderB, BorderA, eps).ToString()
									+ "\nЗначення функції f(x) = " + Func2(FuncNull(Func2, BorderB, BorderA, eps)));
							}
							else
							{
								richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
							}
						}
					}
					else
					{
						MessageBox::Show("Логарифм не може приймати від’ємний х", "Error!!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else if (comboBoxExamples->SelectedIndex == 2)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nИнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення функції f(x) = " + Func3(Fibanachi(Func3, BorderB, BorderA, eps)).ToString() + "\nЗ точністю е = " + eps.ToString()
						+ "\nx = " + Fibanachi(Func3, BorderB, BorderA, eps).ToString());
					if (checkBoxFunkNull->Checked)
					{
						if (Func3(FuncNull(Func3, BorderB, BorderA, eps)) < 0.3 && Func3(FuncNull(Func3, BorderB, BorderA, eps)) > -0.1)
						{
							richTextBoxRes->AppendText("\nВикористано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func3, BorderB, BorderA, eps).ToString()
								+ "\nЗначення функції f(x) = " + Func3(FuncNull(Func3, BorderB, BorderA, eps)));
						}
						else
						{
							richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
						}
					}
				}
				else
				{
					MessageBox::Show("Оберіть функцію для знаходження мінімуму", "Attention", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			else if (comboBoxMethods->SelectedIndex == 5) 
			{	
				if (comboBoxExamples->SelectedIndex == 0)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція:  " + comboBoxExamples->Text + "\nИнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення функції f(x) = " + Func1(Newton(Func1, Func1_dfdx, Func1_d2fdx2, BorderB, BorderA, eps)).ToString() + "\nЗ точністю е = " + eps.ToString()
						+ "\nx = " + Newton(Func1, Func1_dfdx, Func1_d2fdx2, BorderB, BorderA, eps).ToString());
					if (checkBoxFunkNull->Checked)
					{
						if (Func1(FuncNull(Func1, BorderB, BorderA, eps)) < 0.3 && Func1(FuncNull(Func1, BorderB, BorderA, eps)) > -0.1)
						{
							richTextBoxRes->AppendText("\nВикористано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func1, BorderB, BorderA, eps).ToString()
								+ "\nЗначення функції f(x) = " + Func1(FuncNull(Func1, BorderB, BorderA, eps)));
						}
						else
						{
							richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
						}
					}
				}
				else if (comboBoxExamples->SelectedIndex == 1)
				{
					if (BorderA >= 0)
					{
						richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція:  " + comboBoxExamples->Text + "\nИнтервал : A = "
							+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення функції f(x) = " + Func2(Newton(Func2, Func2_dfdx, Func2_d2fdx2, BorderB, BorderA, eps)).ToString() + "\nЗ точністю е = " + eps.ToString()
							+ "\nx = " + Newton(Func2, Func2_dfdx, Func2_d2fdx2, BorderB, BorderA, eps).ToString());
						if (checkBoxFunkNull->Checked)
						{
							if (Func2(FuncNull(Func2, BorderB, BorderA, eps)) < 0.3 && Func2(FuncNull(Func2, BorderB, BorderA, eps)) > -0.1)
							{
								richTextBoxRes->AppendText("\nВикористано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func2, BorderB, BorderA, eps).ToString()
									+ "\nЗначення функції f(x) = " + Func2(FuncNull(Func2, BorderB, BorderA, eps)));
							}
							else
							{
								richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
							}
						}
					}
					else
					{
						MessageBox::Show("Логарифм не може приймати від’ємний х", "Error!!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else if (comboBoxExamples->SelectedIndex == 2)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція:  " + comboBoxExamples->Text + "\nИнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення функції f(x) = " + Func3(Newton(Func3, Func3_dfdx, Func3_d2fdx2, BorderB, BorderA, eps)).ToString() + "\nЗ точністю е = " + eps.ToString()
						+ "\nx = " + Newton(Func3, Func3_dfdx, Func3_d2fdx2, BorderB, BorderA, eps).ToString());
					if (checkBoxFunkNull->Checked)
					{
						if (Func3(FuncNull(Func3, BorderB, BorderA, eps)) < 0.3 && Func3(FuncNull(Func3, BorderB, BorderA, eps)) > -0.1)
						{
							richTextBoxRes->AppendText("\nВикористано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func3, BorderB, BorderA, eps).ToString()
								+ "\nЗначення функції f(x) = " + Func3(FuncNull(Func3, BorderB, BorderA, eps)));
						}
						else
						{
							richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
						}
					}
				}	
				else
				{
					MessageBox::Show("Оберіть функцію для знаходження мінімуму", "Attention", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			else if (comboBoxMethods->SelectedIndex == 6)
			{
				if (comboBoxExamples->SelectedIndex == 0)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nИнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення функції f(x) = " + Func1(Parabola(Func1, BorderB, BorderA, eps)).ToString() + "\nЗ точністю е = " + eps.ToString()
						+ "\nx = " + Parabola(Func1, BorderB, BorderA, eps).ToString());
					if (checkBoxFunkNull->Checked)
					{
						if (Func1(FuncNull(Func1, BorderB, BorderA, eps)) < 0.3 && Func1(FuncNull(Func1, BorderB, BorderA, eps)) > -0.1)
						{
							richTextBoxRes->AppendText("\nВикористано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func1, BorderB, BorderA, eps).ToString()
								+ "\nЗначення функції f(x) = " + Func1(FuncNull(Func1, BorderB, BorderA, eps)));
						}
						else
						{
							richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
						}
					}
				}
				else if (comboBoxExamples->SelectedIndex == 1)
				{
					if (BorderA >= 0)
					{
						richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nИнтервал : A = "
							+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення функції f(x) = " + Func2(Parabola(Func2, BorderB, BorderA, eps)).ToString() + "\nЗ точністю е = " + eps.ToString()
							+ "\nx = " + Parabola(Func2, BorderB, BorderA, eps).ToString());
						if (checkBoxFunkNull->Checked)
						{
							if (Func2(FuncNull(Func2, BorderB, BorderA, eps)) < 0.3 && Func2(FuncNull(Func2, BorderB, BorderA, eps)) > -0.1)
							{
								richTextBoxRes->AppendText("\nВикористано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func2, BorderB, BorderA, eps).ToString()
									+ "\nЗначення функції f(x) = " + Func2(FuncNull(Func2, BorderB, BorderA, eps)));
							}
							else
							{
								richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
							}
						}
					}
					else
					{
						MessageBox::Show("Логарифм не може приймати від’ємний х", "Error!!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else if (comboBoxExamples->SelectedIndex == 2)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nИнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення функції f(x) = " + Func3(Parabola(Func3, BorderB, BorderA, eps)).ToString() + "\nЗ точністю е = " + eps.ToString()
						+ "\nx = " + Parabola(Func3, BorderB, BorderA, eps).ToString());
					if (checkBoxFunkNull->Checked)
					{
						if (Func3(FuncNull(Func3, BorderB, BorderA, eps)) < 0.3 && Func3(FuncNull(Func3, BorderB, BorderA, eps)) > -0.1)
						{
							richTextBoxRes->AppendText("\nВикористано " + checkBoxFunkNull->Text + "\nНуль функції визначено в х = " + FuncNull(Func3, BorderB, BorderA, eps).ToString()
								+ "\nЗначення функції f(x) = " + Func3(FuncNull(Func3, BorderB, BorderA, eps)));
						}
						else
						{
							richTextBoxRes->AppendText("\nНа обраному проміжку нулю функції не існує.");
						}
					}
				}
				else
				{
					MessageBox::Show("Оберіть функцію для знаходження мінімуму", "Attention", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			else
			{
				MessageBox::Show("Оберіть метод знаходження мінімуму функції ", "Attention", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			buttonClear->Visible = true;

		}
		else
		{
			MessageBox::Show("Точність розрахунків повинна бути в межах в 0.999... до 0.000001 ", "Error!!!" , MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		richTextBoxRes->Clear();
	}
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Close();
	}

};
}
