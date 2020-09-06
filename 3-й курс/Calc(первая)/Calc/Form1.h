#pragma once
#include <iostream> 
#include <windows.h>
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
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(243, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Сложение";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F));
			this->button2->Location = System::Drawing::Point(243, 52);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 31);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Вычитание";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F));
			this->button3->Location = System::Drawing::Point(243, 89);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 31);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Умножение";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F));
			this->button4->Location = System::Drawing::Point(243, 123);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 31);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Деление";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button5->BackColor = System::Drawing::Color::Gainsboro;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F));
			this->button5->Location = System::Drawing::Point(243, 160);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 37);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Сброс";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button6->BackColor = System::Drawing::Color::Gainsboro;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F));
			this->button6->Location = System::Drawing::Point(243, 203);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 37);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Закрыть";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F));
			this->label1->Location = System::Drawing::Point(23, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Первое значение";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F));
			this->label2->Location = System::Drawing::Point(24, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Второе значение";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F));
			this->label3->Location = System::Drawing::Point(100, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Результат";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(125, 74);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->Location = System::Drawing::Point(125, 100);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 10;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox3->Location = System::Drawing::Point(60, 148);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(141, 20);
			this->textBox3->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(24, 33);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 19);
			this->label4->TabIndex = 12;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(330, 252);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Простой калькулятор";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Сложение
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		double one, two;
		double result;
		this->label4->Text = L"Сложение";
		if (textBox1->Text == "" || textBox2->Text == "" || textBox1->Text == "-" || textBox2->Text == "-" || textBox1->Text == "-0," || textBox2->Text == "-0,")
		{
			textBox3->Text = " ";
			func_check();
		}
		else 
		{
			one = Convert::ToDouble(textBox1->Text);
			two = Convert::ToDouble(textBox2->Text);
			result = one + two;
			textBox3->Text = String::Format("{0}", result);
		}
	}
		// Вычитание
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	double one, two;
	double result;
	this->label4->Text = L"Вычитание";
	if (textBox1->Text == "" || textBox2->Text == "" || textBox1->Text == "-" || textBox2->Text == "-")
	{
		textBox3->Text = " ";
		func_check();
	}
	else
	{
		one = Convert::ToDouble(textBox1->Text);
		two = Convert::ToDouble(textBox2->Text);
		result = one - two;
		textBox3->Text = String::Format("{0}", result);
	}
}
		// Умножение
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	double one, two;
	double result;
	this->label4->Text = L"Умножение";
	if (textBox1->Text == "" || textBox2->Text == "" || textBox1->Text == "-" || textBox2->Text == "-")
	{
		textBox3->Text = " ";
		func_check();
	}
	else
	{
		one = Convert::ToDouble(textBox1->Text);
		two = Convert::ToDouble(textBox2->Text);
		result = one * two;
		textBox3->Text = String::Format("{0}", result);
	}
}
		 // Деление
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		double one, two;
		double result;
		this->label4->Text = L"Деление";
		if (textBox1->Text == "" || textBox2->Text == "" || textBox1->Text == "-" || textBox2->Text == "-")
		{
			textBox3->Text = " ";
			func_check();
		}
		else
		{
			one = Convert::ToDouble(textBox1->Text);
			two = Convert::ToDouble(textBox2->Text);
			if (two == 0)
			{
				textBox3->Text = " ";
				MessageBox::Show("Делить на ноль НЕЛЬЗЯ", "ОШИБКА", MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
			else
			{
				result = one / two;
				textBox3->Text = String::Format("{0}", result);
			}
		}
	}
		 // Сброс
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->label4->Text = L"Сброс";
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
}
		 // Выход
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		 //Событие 1-го текст бокса (ограничение ввода с клавиатуры) 
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b'&& e->KeyChar != ',' && e->KeyChar != '-')
		{
			e->Handled = true;
		}
	// ограничение нажатия двойного 0
		if (e->KeyChar == (char)Keys::D0 || e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
		{
			if (textBox1->Text->Length >= 1)// Если строка не пустая
			{
				if ((textBox1->Text[0] == '0' || textBox1->Text == "-0") && textBox1->SelectionStart <= 2)
				{ 
					func_check_keypress();
					e->Handled = true;
				}
			}
		}
	// Исключения со знаком "-"
	if (e -> KeyChar == '-')
	{
		if (textBox1->Text->Length > 0 || textBox1->Text->IndexOf("-") != -1 )
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

		 //Событие 2-го текст бокса (ограничение ввода с клавиатуры) 
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b'&& e->KeyChar != ','&& e->KeyChar != '-') // 48-57 [A-Z + символы #,@,< и тд]
	{ 
		e->Handled = true;
	}
	// ограничение нажатия двойного 0
	if (e->KeyChar == (char)Keys::D0 || e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
	{
		if (textBox2->Text->Length >= 1)// Если строка не пустая
		{
			if ((textBox2->Text[0] == '0' || textBox2->Text == "-0") && textBox2->SelectionStart <= 2)
			{
				func_check_keypress();
				e->Handled = true;
			}
		}
	}
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

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		 // функции проверки 
		 void func_check()
		 {
				 MessageBox::Show("Запишите значения,поля не должны оставаться пустыми", "Предупреждение", MessageBoxButtons::OK,
					 MessageBoxIcon::Information);
		 }

		 void func_check_keypress()
		 {
			 MessageBox::Show("Вы совершаете неправильный ввод,повторите попытку", "Предупреждение", MessageBoxButtons::OK,
				 MessageBoxIcon::Information);
		 }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
