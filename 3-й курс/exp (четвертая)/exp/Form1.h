#pragma once
#include <iostream>
#include <cmath>
namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBox1->Location = System::Drawing::Point(12, 48);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(281, 70);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод значения (-13 <= X <= 20)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(18, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"x=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(42, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(213, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->groupBox2->Location = System::Drawing::Point(12, 124);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(281, 70);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Выбор точности";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radioButton5->Location = System::Drawing::Point(193, 19);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(72, 20);
			this->radioButton5->TabIndex = 5;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"0.00001";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton5_CheckedChanged);
			this->radioButton5->Click += gcnew System::EventHandler(this, &Form1::radioButton5_Click);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radioButton6->Location = System::Drawing::Point(193, 42);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(79, 20);
			this->radioButton6->TabIndex = 4;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"0.000001";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton6_CheckedChanged);
			this->radioButton6->Click += gcnew System::EventHandler(this, &Form1::radioButton6_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radioButton3->Location = System::Drawing::Point(108, 19);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(58, 20);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"0.001";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			this->radioButton3->Click += gcnew System::EventHandler(this, &Form1::radioButton3_Click);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radioButton4->Location = System::Drawing::Point(108, 42);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(65, 20);
			this->radioButton4->TabIndex = 2;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"0.0001";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			this->radioButton4->Click += gcnew System::EventHandler(this, &Form1::radioButton4_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radioButton2->Location = System::Drawing::Point(11, 42);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(51, 20);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"0.01";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			this->radioButton2->Click += gcnew System::EventHandler(this, &Form1::radioButton2_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radioButton1->Location = System::Drawing::Point(11, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(44, 20);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"0.1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			this->radioButton1->Click += gcnew System::EventHandler(this, &Form1::radioButton1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(33, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(246, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"exp(x) = 1 + x/1! + x^2/2! + x^3/3! + ...";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(281, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Расчёт exp(x)";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(60, 226);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(196, 22);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Результаты расчёта: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(15, 259);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 14);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Исходное значение =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(15, 282);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 14);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Точность =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(15, 308);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(136, 14);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Точное значение exp(x) =";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(15, 333);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(105, 14);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Число слагаемых =";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(15, 360);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(113, 14);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Сумма ряда exp(x) =";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(218, 384);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Закрыть";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(154, 259);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 14);
			this->label10->TabIndex = 11;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(154, 282);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 14);
			this->label11->TabIndex = 12;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(153, 308);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 14);
			this->label12->TabIndex = 13;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(154, 333);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 14);
			this->label13->TabIndex = 14;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(154, 360);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 14);
			this->label14->TabIndex = 15;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(303, 419);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Расчёт exp(x)";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Кнопка расчета 
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "" || textBox1->Text == "-")
		{
			textBox1->Text = "1";
		}
		if (Convert::ToDouble(textBox1->Text) >= 20)
		{
			textBox1->Text = "20";
		}
		else if (Convert::ToDouble(textBox1->Text) <= -13)
		{
			textBox1->Text = "-13";
		}
		double x;
		double result;
		double toc;
		toc = (Math::Exp(Convert::ToDouble(textBox1->Text)));
		label10->Text = textBox1->Text;
		if (radioButton1->Checked)
		{
			x = Convert::ToDouble(textBox1->Text);
			result = exp(x, 1e-14);
			this->label14->Text = String::Format("{0:F2}", result);
			this->label12->Text = String::Format("{0:F2}", toc);
		}
		if (radioButton2->Checked)
		{
			x = Convert::ToDouble(textBox1->Text);
			result = exp(x, 1e-14);
			this->label14->Text = String::Format("{0:F3}", result);
			this->label12->Text = String::Format("{0:F3}", toc);
		}
		if (radioButton3->Checked)
		{
			x = Convert::ToDouble(textBox1->Text);
			result = exp(x, 1e-14);
			this->label14->Text = String::Format("{0:F4}", result);
			this->label12->Text = String::Format("{0:F4}", toc);
		}
		if (radioButton4->Checked)
		{
			x = Convert::ToDouble(textBox1->Text);
			result = exp(x, 1e-14);
			this->label14->Text = String::Format("{0:F5}", result);
			this->label12->Text = String::Format("{0:F5}", toc);
		}
		if (radioButton5->Checked)
		{
			x = Convert::ToDouble(textBox1->Text);
			result = exp(x, 1e-14);
			this->label14->Text = String::Format("{0:F6}", result);
			this->label12->Text = String::Format("{0:F6}", toc);
		}
		if (radioButton6->Checked)
		{
			x = Convert::ToDouble(textBox1->Text);
			result = exp(x, 1e-14);
			this->label14->Text = String::Format("{0:F7}", result);
			this->label12->Text = String::Format("{0:F7}", toc);
		}
	}
			 // Кнопка выхода 
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
}
			 // Функция вычисления exp
			 double exp(double x, double eps) // расчет e^x с точностью eps
			 {
				 double sum = 1;  // сумма ряда
				 double n = 1; // нач. n
				 double a = 1; // первый член ряда
				 while (Math::Abs(a) >= 0.000001)     // "беск." цикл
				 {
					 a = a*x / n;  // вычисляем следующий член ряда
					 if (fabs(a) <= eps) break; // если точность достигнута - выход
					 sum = sum + a;     // прибавим к сумме очередной член
					 n++;        // увеличим n
				 }
				 label13->Text = Convert::ToString(n);
				 return sum;
			 }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			//
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b'&& e->KeyChar != ',' && e->KeyChar != '-') // 48-57 [A-Z + символы #,@,< и тд]
		e->Handled = true;
	// Исключения со знаком ","
	if (e->KeyChar == ',')
	{
		if (textBox1->Text->Length == 0 || textBox1->Text->IndexOf(",") != -1)
		{
			e->Handled = true;
		}
	}
	// Исключения со знаком "-"
	if (e->KeyChar == '-')
	{
		if (textBox1->Text->Length > 0 || textBox1->Text->IndexOf("-") != -1)
		{
			e->Handled = true;
		}
	}
}

private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->label11->Text = L"0.1";
}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->label11->Text = L"0.01";
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->label11->Text = L"0.001";
}
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->label11->Text = L"0.0001";
}
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->label11->Text = L"0.00001";
}
private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->label11->Text = L"0.000001";
}
		 // Авто выбор радиоб.1 
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	radioButton1->PerformClick();
}
		 // Изменении исходныех данных происходит "очищение" 
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "" || remove)
		{
			this->label10->Text = L"";
			this->label12->Text = L"";
			this->label13->Text = L"";
			this->label14->Text = L"";
		}
		// Исключения для -13,-12,-11,-10,-9,-8,-7,-6,-5
		if (textBox1->Text == "-13" || textBox1->Text == "-12" || textBox1->Text == "-11")
		{
			radioButton1->Enabled = false;
			radioButton2->Enabled = false;
			radioButton3->Enabled = false;
			radioButton4->Enabled = false;
			radioButton5->PerformClick();
		}

		else if (textBox1->Text == "-10" || textBox1->Text == "-9")
		{
			radioButton1->Enabled = false;
			radioButton2->Enabled = false;
			radioButton3->Enabled = false;
			radioButton4->PerformClick();
		}
		else if (textBox1->Text == "-8" || textBox1->Text == "-7")
		{
			radioButton1->Enabled = false;
			radioButton2->Enabled = false;
			radioButton3->PerformClick();
		}
		else if (textBox1->Text == "-6" || textBox1->Text == "-5")
		{
			radioButton1->Enabled = false;
			radioButton2->PerformClick();
		}
		else
		{
			radioButton1->Enabled = true;
			radioButton2->Enabled = true;
			radioButton3->Enabled = true;
			radioButton4->Enabled = true;
			radioButton5->Enabled = true;
		}
	}
		 // эмуляция нажатия button1
private: System::Void radioButton2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "")
	{

	}
	else
	{ 
	button1_Click(sender, e);
	}
}
private: System::Void radioButton3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "")
	{

	}
	else
	{
		button1_Click(sender, e);
	}
}
private: System::Void radioButton4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "")
	{

	}
	else
	{
		button1_Click(sender, e);
	}
}
private: System::Void radioButton5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "")
	{

	}
	else
	{
		button1_Click(sender, e);
	}
}
private: System::Void radioButton6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "")
	{

	}
	else
	{
		button1_Click(sender, e);
	}
}
private: System::Void radioButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "")
	{

	}
	else
	{
		button1_Click(sender, e);
	}
}
};
}

