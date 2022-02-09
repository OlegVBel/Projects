#pragma once
#include "Prototypes.h"
namespace Practise2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CalcIntegral
	/// </summary>
	public ref class CalcIntegral : public System::Windows::Forms::Form
	{
	public:
		CalcIntegral(void)
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
		~CalcIntegral()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ buttonCalc;

	protected:





	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::GroupBox^ groupBoxSetting;

	private: System::Windows::Forms::ComboBox^ comboBoxExamples;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Label;
	private: System::Windows::Forms::TextBox^ textBoxDelay;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownBorderB;


	private: System::Windows::Forms::GroupBox^ groupBoxCalcWay;


	private: System::Windows::Forms::Panel^ panel2;



	private: System::Windows::Forms::ComboBox^ comboBoxMethods;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Button^ buttonClear;



	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownBorderA;



	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::RichTextBox^ richTextBoxRes;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartGraph;













	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonCalc = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBoxSetting = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownBorderA = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxDelay = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownBorderB = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBoxCalcWay = (gcnew System::Windows::Forms::GroupBox());
			this->comboBoxMethods = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBoxExamples = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->chartGraph = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->richTextBoxRes = (gcnew System::Windows::Forms::RichTextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBoxSetting->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownBorderA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownBorderB))->BeginInit();
			this->groupBoxCalcWay->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartGraph))->BeginInit();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel3->Controls->Add(this->buttonExit);
			this->panel3->Controls->Add(this->buttonClear);
			this->panel3->Controls->Add(this->buttonCalc);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 366);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(742, 63);
			this->panel3->TabIndex = 2;
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::MediumPurple;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit->Location = System::Drawing::Point(550, 6);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(180, 50);
			this->buttonExit->TabIndex = 2;
			this->buttonExit->Text = L"Вихід";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &CalcIntegral::buttonExit_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->BackColor = System::Drawing::Color::PaleTurquoise;
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClear->Location = System::Drawing::Point(271, 6);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(240, 50);
			this->buttonClear->TabIndex = 1;
			this->buttonClear->Text = L"Очистити вікно результатів";
			this->buttonClear->UseVisualStyleBackColor = false;
			this->buttonClear->Visible = false;
			this->buttonClear->Click += gcnew System::EventHandler(this, &CalcIntegral::buttonClear_Click);
			// 
			// buttonCalc
			// 
			this->buttonCalc->BackColor = System::Drawing::Color::PaleTurquoise;
			this->buttonCalc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCalc->Location = System::Drawing::Point(12, 6);
			this->buttonCalc->Name = L"buttonCalc";
			this->buttonCalc->Size = System::Drawing::Size(240, 50);
			this->buttonCalc->TabIndex = 0;
			this->buttonCalc->Text = L"Розрахувати";
			this->buttonCalc->UseVisualStyleBackColor = false;
			this->buttonCalc->Click += gcnew System::EventHandler(this, &CalcIntegral::buttonCalc_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBoxSetting);
			this->panel1->Controls->Add(this->groupBoxCalcWay);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(536, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(206, 366);
			this->panel1->TabIndex = 2;
			// 
			// groupBoxSetting
			// 
			this->groupBoxSetting->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->groupBoxSetting->Controls->Add(this->label8);
			this->groupBoxSetting->Controls->Add(this->label10);
			this->groupBoxSetting->Controls->Add(this->numericUpDownBorderA);
			this->groupBoxSetting->Controls->Add(this->label9);
			this->groupBoxSetting->Controls->Add(this->textBoxDelay);
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
			this->groupBoxSetting->Size = System::Drawing::Size(206, 195);
			this->groupBoxSetting->TabIndex = 6;
			this->groupBoxSetting->TabStop = false;
			this->groupBoxSetting->Text = L"Налаштування для розрахунку";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(-2, 178);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(210, 15);
			this->label8->TabIndex = 17;
			this->label8->Text = L"_____________________________";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(51, 79);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(16, 16);
			this->label10->TabIndex = 16;
			this->label10->Text = L"b";
			// 
			// numericUpDownBorderA
			// 
			this->numericUpDownBorderA->Location = System::Drawing::Point(70, 53);
			this->numericUpDownBorderA->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 0, 0, 0, 0 });
			this->numericUpDownBorderA->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, System::Int32::MinValue });
			this->numericUpDownBorderA->Name = L"numericUpDownBorderA";
			this->numericUpDownBorderA->Size = System::Drawing::Size(83, 21);
			this->numericUpDownBorderA->TabIndex = 15;
			this->numericUpDownBorderA->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(-3, 98);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(210, 15);
			this->label9->TabIndex = 12;
			this->label9->Text = L"_____________________________";
			// 
			// textBoxDelay
			// 
			this->textBoxDelay->Location = System::Drawing::Point(71, 157);
			this->textBoxDelay->Name = L"textBoxDelay";
			this->textBoxDelay->Size = System::Drawing::Size(83, 21);
			this->textBoxDelay->TabIndex = 14;
			this->textBoxDelay->Text = L"5";
			this->textBoxDelay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(53, 160);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"N";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(27, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(157, 30);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Кількість відрізків \r\nдля обчислення інтегралу";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(51, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"а";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 30);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Границі проміжку\r\nітегрування функції";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// numericUpDownBorderB
			// 
			this->numericUpDownBorderB->Location = System::Drawing::Point(71, 78);
			this->numericUpDownBorderB->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDownBorderB->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownBorderB->Name = L"numericUpDownBorderB";
			this->numericUpDownBorderB->Size = System::Drawing::Size(83, 21);
			this->numericUpDownBorderB->TabIndex = 7;
			this->numericUpDownBorderB->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDownBorderB->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// groupBoxCalcWay
			// 
			this->groupBoxCalcWay->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->groupBoxCalcWay->Controls->Add(this->comboBoxMethods);
			this->groupBoxCalcWay->Controls->Add(this->label7);
			this->groupBoxCalcWay->Controls->Add(this->Label);
			this->groupBoxCalcWay->Controls->Add(this->label1);
			this->groupBoxCalcWay->Controls->Add(this->comboBoxExamples);
			this->groupBoxCalcWay->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->groupBoxCalcWay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxCalcWay->Location = System::Drawing::Point(0, 195);
			this->groupBoxCalcWay->Name = L"groupBoxCalcWay";
			this->groupBoxCalcWay->Size = System::Drawing::Size(206, 171);
			this->groupBoxCalcWay->TabIndex = 3;
			this->groupBoxCalcWay->TabStop = false;
			this->groupBoxCalcWay->Text = L"Спосіб розрахунку";
			// 
			// comboBoxMethods
			// 
			this->comboBoxMethods->FormattingEnabled = true;
			this->comboBoxMethods->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Лівих прямоккутників", L"Правих прямокутників",
					L"Сердніх прямокутників", L"Трапецій", L"Парабол"
			});
			this->comboBoxMethods->Location = System::Drawing::Point(27, 59);
			this->comboBoxMethods->Name = L"comboBoxMethods";
			this->comboBoxMethods->Size = System::Drawing::Size(156, 23);
			this->comboBoxMethods->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(-4, 79);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(210, 15);
			this->label7->TabIndex = 6;
			this->label7->Text = L"_____________________________";
			// 
			// Label
			// 
			this->Label->AutoSize = true;
			this->Label->Location = System::Drawing::Point(45, 26);
			this->Label->Name = L"Label";
			this->Label->Size = System::Drawing::Size(129, 30);
			this->Label->TabIndex = 1;
			this->Label->Text = L"Метод знаходження \r\nінтегралу функції";
			this->Label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 15);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Вираз для розрахунку";
			// 
			// comboBoxExamples
			// 
			this->comboBoxExamples->FormattingEnabled = true;
			this->comboBoxExamples->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"3 * cos(2 * x - 4)", L"x - log(x)", L"3 * x * x - 5 * x + 16" });
			this->comboBoxExamples->Location = System::Drawing::Point(28, 122);
			this->comboBoxExamples->Name = L"comboBoxExamples";
			this->comboBoxExamples->Size = System::Drawing::Size(156, 23);
			this->comboBoxExamples->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Window;
			this->panel2->Controls->Add(this->chartGraph);
			this->panel2->Controls->Add(this->richTextBoxRes);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(536, 366);
			this->panel2->TabIndex = 4;
			// 
			// chartGraph
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartGraph->ChartAreas->Add(chartArea1);
			this->chartGraph->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Name = L"Legend1";
			this->chartGraph->Legends->Add(legend1);
			this->chartGraph->Location = System::Drawing::Point(0, 113);
			this->chartGraph->Name = L"chartGraph";
			this->chartGraph->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Графік";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Метод прямокутників";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StackedArea;
			series3->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series3->Legend = L"Legend1";
			series3->Name = L"Метод трапецій";
			this->chartGraph->Series->Add(series1);
			this->chartGraph->Series->Add(series2);
			this->chartGraph->Series->Add(series3);
			this->chartGraph->Size = System::Drawing::Size(536, 253);
			this->chartGraph->TabIndex = 6;
			// 
			// richTextBoxRes
			// 
			this->richTextBoxRes->Dock = System::Windows::Forms::DockStyle::Top;
			this->richTextBoxRes->Location = System::Drawing::Point(0, 36);
			this->richTextBoxRes->Name = L"richTextBoxRes";
			this->richTextBoxRes->Size = System::Drawing::Size(536, 77);
			this->richTextBoxRes->TabIndex = 4;
			this->richTextBoxRes->Text = L"";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Info;
			this->panel4->Controls->Add(this->label4);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(536, 36);
			this->panel4->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(221, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Результати";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// CalcIntegral
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(742, 429);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(758, 468);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(758, 468);
			this->Name = L"CalcIntegral";
			this->Text = L"CalcIntegral";
			this->panel3->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->groupBoxSetting->ResumeLayout(false);
			this->groupBoxSetting->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownBorderA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownBorderB))->EndInit();
			this->groupBoxCalcWay->ResumeLayout(false);
			this->groupBoxCalcWay->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartGraph))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		int BorderA, BorderB, delay;

		/// <summary>
		/// Побудова графіку та моделі методу
		/// </summary>
		/// <param name="func">функція</param>
		/// <param name="a">нижня границя функції</param>
		/// <param name="b">верхня границя функції</param>
		void ChartGraph(double(*func)(double), double a, double b)
		{
			double y;
			//очистити побудовані зображення
			chartGraph->Series[0]->Points->Clear();
			chartGraph->Series[1]->Points->Clear();
			chartGraph->Series[2]->Points->Clear();

			//побудова зображення методом лівих прямокутників
			if (comboBoxMethods->SelectedIndex == 0)
			{
				while (a <= b)
				{
					y = func(a);
					chartGraph->Series[0]->Points->AddXY(a, y);
					chartGraph->Series[1]->Points->AddXY(a-0.09, y);
					a += 0.2;
				}
			}
			//побудова зображення методом правих прямокутників
			if (comboBoxMethods->SelectedIndex == 1) 
			{
				while (a <= b)
				{
					y = func(a);
					chartGraph->Series[0]->Points->AddXY(a, y);
					chartGraph->Series[1]->Points->AddXY(a+0.09, y);
					a += 0.2;
				}
			}
			//побудова зображення методом середніх прямокутників
			if (comboBoxMethods->SelectedIndex == 2)
			{
				while (a <= b)
				{
					y = func(a);
					chartGraph->Series[0]->Points->AddXY(a, y);
					chartGraph->Series[1]->Points->AddXY(a, y);
					a += 0.2;
				}
			}
			//побудова зображення методом трапецій
			if (comboBoxMethods->SelectedIndex == 3)
			{
				double x=a;
				while (x <= b)
				{
					y = func(x);
					chartGraph->Series[0]->Points->AddXY(x, y);
					x += 0.2;
				}
				while (a <= b)
				{
					y = func(a);
					chartGraph->Series[2]->Points->AddXY(a, y);
					a += 0.5;
				}
			}
			//побудова зображення для метода Сімпсона
			if (comboBoxMethods->SelectedIndex == 4)
			{
				while (a <= b)
				{
					y = func(a);
					chartGraph->Series[0]->Points->AddXY(a, y);
					a += 0.2;
				}
			}
		}
	/// <summary>
	/// розрахунок
	/// </summary>
	private: System::Void buttonCalc_Click(System::Object^ sender, System::EventArgs^ e) {
		if (int::TryParse(textBoxDelay->Text, delay) && delay > 0)
		{
			BorderA = Convert::ToInt32(numericUpDownBorderA->Value);
			BorderB = Convert::ToInt32(numericUpDownBorderB->Value);
			richTextBoxRes->Clear();

			//метод лівих прямокутників
			if (comboBoxMethods->SelectedIndex == 0)
			{
				if (comboBoxExamples->SelectedIndex == 0)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nІнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення інтегралу функції f(x) = " + LeftRectangle(Func1, BorderB, BorderA, delay).ToString() + 
						"\nКількість відрізків для обчислення інтегралу N = " + delay.ToString());
				}
				else if (comboBoxExamples->SelectedIndex == 1)
				{
					if (BorderA > 0)
					{
						richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nІнтервал : A = "
							+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення інтегралу функції f(x) = " + LeftRectangle(Func2, BorderB, BorderA, delay).ToString() + 
							"\nКількість відрізків для обчислення інтегралу N = " + delay.ToString());
					}
					else
					{
						MessageBox::Show("Логарифм не може приймати від’ємний х або нуль", "Error!!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else if (comboBoxExamples->SelectedIndex == 2)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nІнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення інтегралу функції f(x) = " + LeftRectangle(Func3, BorderB, BorderA, delay).ToString() + 
						"\nКількість відрізків для обчислення інтегралу N = " + delay.ToString());
				}
				else
				{
					MessageBox::Show("Оберіть функцію для знаходження інтегралу", "Attention", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			//метод правих прямокутників
			else if (comboBoxMethods->SelectedIndex == 1)
			{
				if (comboBoxExamples->SelectedIndex == 0)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nІнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення інтегралу функції f(x) = " + RightRectangle(Func1, BorderB, BorderA, delay).ToString() +
						"\nКількість відрізків для обчислення інтегралу N = " + delay.ToString());
				}
				else if (comboBoxExamples->SelectedIndex == 1)
				{
					if (BorderA > 0)
					{
						richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nІнтервал : A = "
							+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення інтегралу функції f(x) = " + RightRectangle(Func2, BorderB, BorderA, delay).ToString() +
							"\nКількість відрізків для обчислення інтегралу N = " + delay.ToString());
					}
					else
					{
						MessageBox::Show("Логарифм не може приймати від’ємний х або нуль", "Error!!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else if (comboBoxExamples->SelectedIndex == 2)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nІнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення інтегралу функції f(x) = " + RightRectangle(Func3, BorderB, BorderA, delay).ToString() +
						"\nКількість відрізків для обчислення інтегралу N = " + delay.ToString());
				}
				else
				{
					MessageBox::Show("Оберіть функцію для знаходження інтегралу", "Attention", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			//метод середніх прямокутників
			else if (comboBoxMethods->SelectedIndex == 2)
			{
				if (comboBoxExamples->SelectedIndex == 0)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nІнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення інтегралу функції f(x) = " + MiddleRectangle(Func1, BorderB, BorderA, delay).ToString() +
						"\nКількість відрізків для обчислення інтегралу N = " + delay.ToString());
				}
				else if (comboBoxExamples->SelectedIndex == 1)
				{
					if (BorderA > 0)
					{
						richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nІнтервал : A = "
							+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення інтегралу функції f(x) = " + MiddleRectangle(Func2, BorderB, BorderA, delay).ToString() +
							"\nКількість відрізків для обчислення інтегралу N = " + delay.ToString());
					}
					else
					{
						MessageBox::Show("Логарифм не може приймати від’ємний х або нуль", "Error!!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else if (comboBoxExamples->SelectedIndex == 2)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nІнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення інтегралу функції f(x) = " + MiddleRectangle(Func3, BorderB, BorderA, delay).ToString() +
						"\nКількість відрізків для обчислення інтегралу N = " + delay.ToString());
				}
				else
				{
					MessageBox::Show("Оберіть функцію для знаходження інтегралу", "Attention", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			//метод трапецій
			else if (comboBoxMethods->SelectedIndex == 3)
			{
				if (comboBoxExamples->SelectedIndex == 0)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nІнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення інтегралу функції f(x) = " + Trapeze(Func1, BorderB, BorderA, delay).ToString() +
						"\nКількість відрізків для обчислення інтегралу N = " + delay.ToString());
				}
				else if (comboBoxExamples->SelectedIndex == 1)
				{
					if (BorderA > 0)
					{
						richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nІнтервал : A = "
							+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення інтегралу функції f(x) = " + Trapeze(Func2, BorderB, BorderA, delay).ToString() +
							"\nКількість відрізків для обчислення інтегралу N = " + delay.ToString());
					}
					else
					{
						MessageBox::Show("Логарифм не може приймати від’ємний х або нуль", "Error!!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else if (comboBoxExamples->SelectedIndex == 2)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nІнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення інтегралу функції f(x) = " + Trapeze(Func3, BorderB, BorderA, delay).ToString() +
						"\nКількість відрізків для обчислення інтегралу N = " + delay.ToString());
				}
				else
				{
					MessageBox::Show("Оберіть функцію для знаходження інтегралу", "Attention", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			//метод Сімпсона
			else if (comboBoxMethods->SelectedIndex == 4)
			{
				if (comboBoxExamples->SelectedIndex == 0)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nІнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення інтегралу функції f(x) = " + Sympson(Func1, BorderB, BorderA, delay).ToString() +
						"\nКількість відрізків для обчислення інтегралу N = " + delay.ToString());
				}
				else if (comboBoxExamples->SelectedIndex == 1)
				{
					if (BorderA > 0)
					{
						richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nІнтервал : A = "
							+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення інтегралу функції f(x) = " + Sympson(Func2, BorderB, BorderA, delay).ToString() +
							"\nКількість відрізків для обчислення інтегралу N = " + delay.ToString());
					}
					else
					{
						MessageBox::Show("Логарифм не може приймати від’ємний х або нуль", "Error!!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else if (comboBoxExamples->SelectedIndex == 2)
				{
					richTextBoxRes->AppendText("Використано метод: " + comboBoxMethods->Text + "\nПідінтегральна функція: " + comboBoxExamples->Text + "\nІнтервал : A = "
						+ BorderA.ToString() + " B = " + BorderB.ToString() + "\nЗначення інтегралу функції f(x) = " + Sympson(Func3, BorderB, BorderA, delay).ToString() +
						"\nКількість відрізків для обчислення інтегралу N = " + delay.ToString());
				}
				else
				{
					MessageBox::Show("Оберіть функцію для знаходження інтегралу", "Attention", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			//повідомлення про невибраний метод для знаходження інтегралу
			else
			{
				MessageBox::Show("Оберіть метод для знаходження інтегралу", "Attention", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			
			//розблокування кнопки очистки
			buttonClear->Visible = true;
			
			//передача функцій для побудови зображення відповідно до обраного методу 
			if (comboBoxExamples->SelectedIndex == 0)
			{
				ChartGraph(Func1, BorderA, BorderB);
			}
			else if (comboBoxExamples->SelectedIndex == 1)
			{
				ChartGraph(Func2, BorderA, BorderB);
			}
			else
			{
				ChartGraph(Func3, BorderA, BorderB);
			}
		}
		else
		{
			MessageBox::Show("Кількість відрізків для обчислення інтегралу повинна бути більше нуля", "Error!!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}	
	}
	/// <summary>
	/// очищення результату методу
	/// </summary>
	private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e)
	{
		richTextBoxRes->Clear();
		chartGraph->Series[0]->Points->Clear();
		chartGraph->Series[1]->Points->Clear();
		chartGraph->Series[2]->Points->Clear();
	}
	/// <summary>
	/// вихід
	/// </summary>
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Close();
	}
};
}
