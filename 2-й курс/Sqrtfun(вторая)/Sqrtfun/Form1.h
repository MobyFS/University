#pragma once
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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(46, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(46, 92);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(46, 118);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(219, 67);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(366, 66);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 4;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(46, 158);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Сброс";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(200, 158);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Решить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gainsboro;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F));
			this->button3->Location = System::Drawing::Point(356, 158);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Закрыть";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(43, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 32);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Коэффиценты \r\n   уравнения\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label2->Location = System::Drawing::Point(260, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Корни уравнения";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(326, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"x2 =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(179, 68);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"x1 =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 68);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"a =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 93);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"b =";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(13, 119);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 16);
			this->label7->TabIndex = 14;
			this->label7->Text = L"c =";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(185, 107);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 16);
			this->label8->TabIndex = 15;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(496, 197);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Решение квадратного уравнения";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Кнопка "Решить" тута все 
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	double a, b, c;
	double x1, x2;
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox3->Text == "-" || textBox3->Text == "-")
	{
		label8->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		MessageBox::Show("Уравнение не действительно,введите коэффициенты.", "Предупреждение", MessageBoxButtons::OK,
			MessageBoxIcon::Information);
	}
	else 
	{ 
		a = Convert::ToDouble(textBox1->Text);
		b = Convert::ToDouble(textBox2->Text);
		c = Convert::ToDouble(textBox3->Text);
	if (textBox1->Text->Length > 0 && textBox2->Text->Length > 0 && textBox3->Text->Length > 0)
	{
		// Решение квадратного уравнения 
		result_quadratic(a, b, c, x1, x2);
	}
	if (textBox1->Text == "0" && textBox2->Text->Length > 0 && textBox3->Text->Length > 0)
	{
		// Решение линейного уравнения [1]
		result_lin(b, c, x1);
	}
	if (textBox1->Text->Length > 0 && textBox2->Text == "0" && textBox3->Text->Length > 0)
	{   // Решение линейного уравнения [2]
		result_quadratic(a, b, c, x1, x2);
	}
	if (textBox1->Text->Length > 0 && textBox2->Text->Length > 0 && textBox3->Text == "0")
	{   // Решение линейного уравнения [3]
		result_quadratic(a, b, c, x1, x2);
	}
	// Тождества
	if (textBox1->Text == "0" && textBox2->Text == "0" && textBox2->Text->Length > 0)
	{
		result_toj(c, x1, x2);
	}
	}
}
		 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b'&& e->KeyChar != ',' && e->KeyChar != '-')
	{
		e->Handled = true;
	}
	// Запрет нажатия двойного 0
	if (e->KeyChar == (char)Keys::D0 || e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
		if (textBox1->Text->Length >= 1)        // Если строка не пустая
			if ((textBox1->Text[0] == '0' || textBox1->Text == "-0") && textBox1->SelectionStart <= 2)
				e->Handled = true;
	// Исключения со знаком "-"
	if (e->KeyChar == '-')
	{
		if (textBox1->Text->Length > 0 || textBox1->Text->IndexOf("-") != -1)
		{
			func_check_keypress();
			e->Handled = true;
		}
	}
	// Исключения со знаком ","
	if (e->KeyChar == ',')
	{
		if (textBox1->Text->Length == 0 || textBox1->Text->IndexOf(",") != -1 || textBox1->Text == "-")
		{
			func_check_keypress();
			e->Handled = true;
		}
	}
}
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b'&& e->KeyChar != ',' && e->KeyChar != '-')
	{
		e->Handled = true;
	}
	// Запрет нажатия двойного 0
	if (e->KeyChar == (char)Keys::D0 || e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
		if (textBox2->Text->Length >= 1)        // Если строка не пустая
			if ((textBox2->Text[0] == '0' || textBox2->Text == "-0") && textBox2->SelectionStart <= 2)
				e->Handled = true;
	// Исключения со знаком "-"
	if (e->KeyChar == '-')
	{
		if (textBox2->Text->Length > 0 || textBox2->Text->IndexOf("-") != -1)
		{
			func_check_keypress();
			e->Handled = true;
		}
	}
	// Исключения со знаком ","
	if (e->KeyChar == ',')
	{
		if (textBox2->Text->Length == 0 || textBox2->Text->IndexOf(",") != -1 || textBox2->Text == "-")
		{
			func_check_keypress();
			e->Handled = true;
		}
	}
}
private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b'&& e->KeyChar != ',' && e->KeyChar != '-')
	{
		e->Handled = true;
	}
	// Запрет нажатия двойного 0
	if (e->KeyChar == (char)Keys::D0 || e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
		if (textBox3->Text->Length >= 1)        // Если строка не пустая
			if ((textBox3->Text[0] == '0' || textBox3->Text == "-0") && textBox3->SelectionStart <= 2)
				e->Handled = true;
	// Исключения со знаком "-"
	if (e->KeyChar == '-')
	{
		if (textBox3->Text->Length > 0 || textBox3->Text->IndexOf("-") != -1)
		{
			func_check_keypress();
			e->Handled = true;
		}
	}
	// Исключения со знаком ","
	if (e->KeyChar == ',')
	{
		if (textBox3->Text->Length == 0 || textBox3->Text->IndexOf(",") != -1 || textBox3->Text == "-")
		{
			func_check_keypress();
			e->Handled = true;
		}
	}
}
		 // Сброс
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
	}
			 // Закрыть
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
		 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		 // Функция проверки
		 void func_check_keypress()
		 {
			 MessageBox::Show("Вы совершаете неправильный ввод,повторите попытку", "Предупреждение", MessageBoxButtons::OK,
				 MessageBoxIcon::Information);
		 }
		 // Функция расчета квадратного уравнения [с выводом внутри]
		 void result_quadratic(double a, double b, double c, double x1, double x2)
		 {
				 if ((b*b - 4 * a*c) > 0)
				 {
					 x1 = (-1 * b - sqrt(b*b - 4 * a*c)) / (2 * a);
					 x2 = (-1 * b + sqrt(b*b - 4 * a*c)) / (2 * a);
					 textBox4->Text = String::Format("{0}", x1);
					 textBox5->Text = String::Format("{0}", x2);
					 this->label8->Text = L"Дискриминант > 0.\nУравнение имеет два корня.";
				 }
				 else if ((b*b - 4 * a*c) == 0)
				 {
					 x1 = (-1 * b - sqrt(b*b - 4 * a*c)) / (2 * a);
					 x2 = (-1 * b + sqrt(b*b - 4 * a*c)) / (2 * a);
					 textBox4->Text = String::Format("{0}", x1);
					 textBox5->Text = String::Format("{0}", x2);
					 this->label8->Text = L"Дискриминант = 0.\nУравнение имеет два одинаковых корня.";
				 }
				else if ((b*b - 4 * a*c) < 0)
				 {
					 textBox4->Clear();
					 textBox5->Clear();
					 this->label8->Text = L"Дискриминант < 0.\nУравнение не имеет действительных корней.";
				 }
		 }
		 // Функция расчета линейного уравнения [с выводом внутри]
		 void result_lin(double b, double c, double x1)
		 {
				 x1 = -c / b;
				 textBox4->Text = String::Format("{0}", x1);
				 textBox5->Text = String::Format("{0}", "");
				 this->label8->Text = L"Линейное уравнение - имеет один корень.";
		 }

		 // Функция тождества 
		 void result_toj(double c, double x1, double x2)
		 {
			 if (c == 0)
			 {
				 textBox4->Text = String::Format("{0}", "");
				 textBox5->Text = String::Format("{0}", "");
				 this->label8->Text = L"Тождество верно.";
			 }
			 else if (c < 0 || c > 0)
			 {
				 textBox4->Text = String::Format("{0}", "");
				 textBox5->Text = String::Format("{0}", "");
				 this->label8->Text = L"Тождество не верно.";
			 }
		 }
};
}
