#pragma once

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(163, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			this->textBox1->Leave += gcnew System::EventHandler(this, &Form1::textBox1_Leave_1);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(163, 47);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			this->textBox2->Leave += gcnew System::EventHandler(this, &Form1::textBox2_Leave_1);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(20, 35);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(55, 22);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(163, 35);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(62, 22);
			this->textBox4->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F));
			this->label1->Location = System::Drawing::Point(6, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Сумма для конвертации:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F));
			this->label2->Location = System::Drawing::Point(28, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Курс обмена:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(7, 20);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(128, 20);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Доллары в рубли";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F));
			this->radioButton2->Location = System::Drawing::Point(7, 48);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(133, 20);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Рубли в доллары ";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Gainsboro;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(412, 171);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Закрыть";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F));
			this->button2->Location = System::Drawing::Point(294, 171);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Конвертировать";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F));
			this->label6->Location = System::Drawing::Point(81, 36);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 16);
			this->label6->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F));
			this->label7->Location = System::Drawing::Point(141, 37);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 16);
			this->label7->TabIndex = 14;
			this->label7->Text = L"=";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F));
			this->groupBox1->Location = System::Drawing::Point(12, 10);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(269, 86);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(163, 47);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 8;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox7_KeyPress);
			this->textBox7->Leave += gcnew System::EventHandler(this, &Form1::textBox7_Leave);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(163, 47);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 7;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox6_KeyPress);
			this->textBox6->Leave += gcnew System::EventHandler(this, &Form1::textBox6_Leave);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(163, 47);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 6;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox5_KeyPress);
			this->textBox5->Leave += gcnew System::EventHandler(this, &Form1::textBox5_Leave);
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F));
			this->groupBox2->Location = System::Drawing::Point(12, 136);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(269, 63);
			this->groupBox2->TabIndex = 16;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Результат конвертации";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F));
			this->label3->Location = System::Drawing::Point(231, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 15;
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->Controls->Add(this->radioButton4);
			this->groupBox3->Controls->Add(this->radioButton3);
			this->groupBox3->Controls->Add(this->radioButton2);
			this->groupBox3->Controls->Add(this->radioButton1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F));
			this->groupBox3->Location = System::Drawing::Point(287, 10);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(214, 134);
			this->groupBox3->TabIndex = 17;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Направление конвертации";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F));
			this->radioButton4->Location = System::Drawing::Point(7, 100);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(105, 20);
			this->radioButton4->TabIndex = 9;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Рубли в евро";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F));
			this->radioButton3->Location = System::Drawing::Point(7, 74);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(105, 20);
			this->radioButton3->TabIndex = 8;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Евро в рубли";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label4->Location = System::Drawing::Point(291, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 16);
			this->label4->TabIndex = 18;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(513, 219);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"АРМ оператора обменного пункта";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Событие 1-го текст бокса (ограничение ввода с клавиатуры) 
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b'&& e->KeyChar != ',') // 48-57 [A-Z + символы #,@,< и тд]
			e->Handled = true;

		// ограничение нажатия двойного 0
		if (e->KeyChar == (char)Keys::D0 || e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
			if (textBox1->Text->Length >= 1)        // Если строка не пустая
				if (textBox1->Text[0] == '0' && textBox1->SelectionStart < 2)
					e->Handled = true;

		// Исключения со знаком ","
		if (e->KeyChar == ',')
		{
			if (textBox1->Text->Length == 0 || textBox1->Text->IndexOf(",") != -1)
			{
				e->Handled = true;
			}
		}
	}

	//Событие 2-го текст бокса (ограничение ввода с клавиатуры) 
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b'&& e->KeyChar != ',') // 48-57 [A-Z + символы #,@,< и тд]
		e->Handled = true;

	// ограничение нажатия двойного 0
	if (e->KeyChar == (char)Keys::D0 || e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
		if (textBox2->Text->Length >= 1)        // Если строка не пустая
			if (textBox2->Text[0] == '0' && textBox2->SelectionStart < 2)
				e->Handled = true;

	// Исключения со знаком ","
	if (e->KeyChar == ',')
	{
		if (textBox2->Text->Length == 0 || textBox2->Text->IndexOf(",") != -1)
		{
			e->Handled = true;
		}
	}
}
	//Событие 5-го текст бокса (ограничение ввода с клавиатуры) 
private: System::Void textBox5_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b'&& e->KeyChar != ',') // 48-57 [A-Z + символы #,@,< и тд]
				 e->Handled = true;

			 // ограничение нажатия двойного 0
	if (e->KeyChar == (char)Keys::D0 || e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
		if (textBox5->Text->Length >= 1)        // Если строка не пустая
			if (textBox5->Text[0] == '0' && textBox5->SelectionStart < 2)
				 e->Handled = true;

			 // Исключения со знаком ","
	if (e->KeyChar == ',')
	 {
		 if (textBox5->Text->Length == 0 || textBox5->Text->IndexOf(",") != -1)
		 {
			 e->Handled = true;
		 }
	 }
	 }

	//Событие 6-го текст бокса (ограничение ввода с клавиатуры) 
private: System::Void textBox6_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b'&& e->KeyChar != ',') // 48-57 [A-Z + символы #,@,< и тд]
		e->Handled = true;

	// ограничение нажатия двойного 0
	if (e->KeyChar == (char)Keys::D0 || e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
		if (textBox6->Text->Length >= 1)        // Если строка не пустая
			if (textBox6->Text[0] == '0' && textBox6->SelectionStart < 2)
				e->Handled = true;

	// Исключения со знаком ","
	if (e->KeyChar == ',')
	{
		if (textBox6->Text->Length == 0 || textBox6->Text->IndexOf(",") != -1)
		{
			e->Handled = true;
		}
	}
}
	//Событие 7-го текст бокса (ограничение ввода с клавиатуры) 
private: System::Void textBox7_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b'&& e->KeyChar != ',') // 48-57 [A-Z + символы #,@,< и тд]
		e->Handled = true;

	// ограничение нажатия двойного 0
	if (e->KeyChar == (char)Keys::D0 || e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
		if (textBox7->Text->Length >= 1)        // Если строка не пустая
			if (textBox7->Text[0] == '0' && textBox7->SelectionStart < 2)
				e->Handled = true;

	// Исключения со знаком ","
	if (e->KeyChar == ',')
	{
		if (textBox7->Text->Length == 0 || textBox7->Text->IndexOf(",") != -1)
		{
			e->Handled = true;
		}
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// Конвертация
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	double one, two;
	double result_rub,result_dol,result_evro;
	// Проверка на заполнение полей 
	if ((textBox1->Text == "0,00" || textBox2->Text == "0,00" || textBox5->Text == "0,00" || textBox6->Text == "0,00" || textBox7->Text == "") || (textBox1->Text == "" || textBox2->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == ""))
	{
		label4->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		func_check();
	}
	else
	{
		// в случае выбора направления конвертации->доллары в рубли
		if (radioButton1->Checked)
		{
		one = Convert::ToDouble(textBox1->Text);
		two = Convert::ToDouble(textBox2->Text);
		if (textBox2->Text == "" || textBox2->Text == "0,00")
		{
			MessageBox::Show("Курс обмена не можеть быть 0", "ОШИБКА", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		else 
		{ 
		result_rub = one * two - 0.005;
		textBox3->Text = String::Format("{0:F2}", one);
		textBox4->Text = String::Format("{0:F2}", result_rub);
		this->label4->Text = L"Конвертация прошла успешно";
		}
		}
		// в случае выбора направления конвертации->рубли в доллары
		if (radioButton2->Checked)
		{
			one = Convert::ToDouble(textBox1->Text);
			two = Convert::ToDouble(textBox5->Text);
			if (textBox5->Text == "" || textBox5->Text == "0,00")
			{
				MessageBox::Show("Курс обмена не можеть быть 0", "ОШИБКА", MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
			else
			{
				result_dol = one / two - 0.005;
				textBox3->Text = String::Format("{0:F2}", one);
				textBox4->Text = String::Format("{0:F2}", result_dol);
				this->label4->Text = L"Конвертация прошла успешно";
			}
		}
		// в случае выбора направления конвертации->евро в рубли
		if (radioButton3->Checked)
		{
			one = Convert::ToDouble(textBox1->Text);
			two = Convert::ToDouble(textBox6->Text);
			if (textBox6->Text == "" || textBox6->Text == "0,00")
			{
				MessageBox::Show("Курс обмена не можеть быть 0", "ОШИБКА", MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
			else
			{
				result_rub = one * two - 0.005;
				textBox3->Text = String::Format("{0:F2}", one);
				textBox4->Text = String::Format("{0:F2}", result_rub);
				this->label4->Text = L"Конвертация прошла успешно";
			}
		}
		// в случае выбора направления конвертации->рубли в евро
		if (radioButton4->Checked)
		{
			one = Convert::ToDouble(textBox1->Text);
			two = Convert::ToDouble(textBox7->Text);
			if (textBox7->Text == "" || textBox7->Text == "0,00")
			{
				MessageBox::Show("Курс обмена не можеть быть 0", "ОШИБКА", MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
			else
			{
				result_evro = one / two - 0.005;
				textBox3->Text = String::Format("{0:F2}", one);
				textBox4->Text = String::Format("{0:F2}", result_evro);
				this->label4->Text = L"Конвертация прошла успешно";
			}
		}
	}
}

		 // Выход
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		 //Проверка полей 
		 void func_check()
		 {
			 MessageBox::Show("Запишите исходные данные,поля не должны оставаться пустыми", "Предупреждение", MessageBoxButtons::OK,
				 MessageBoxIcon::Information);
		 }
	      //Клик на radiobutton's 
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Visible = true;
	textBox5->Visible = false;
	textBox6->Visible = false;
	textBox7->Visible = false;
	this->label6->Text = L"$";
	this->label3->Text = L"руб.";
	this->label2->Text = L"Курс обмена (руб./$):";
	textBox3->Clear();
	textBox4->Clear();
}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Visible = false;
	textBox5->Visible = true;
	textBox6->Visible = false;
	textBox7->Visible = false;
	this->label6->Text = L"руб.";
	this->label3->Text = L"$";
	this->label2->Text = L"Курс обмена (руб./$):";
	textBox3->Clear();
	textBox4->Clear();
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Visible = false;
	textBox5->Visible = false;
	textBox6->Visible = true;
	textBox7->Visible = false;
	this->label6->Text = L"€";
	this->label3->Text = L"руб.";
	this->label2->Text = L"Курс обмена (руб./€):";
	textBox3->Clear();
	textBox4->Clear();
}
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Visible = false;
	textBox5->Visible = false;
	textBox6->Visible = false;
	textBox7->Visible = true;
	this->label6->Text = L"руб.";
	this->label3->Text = L"€";
	this->label2->Text = L"Курс обмена (руб./€):";
	textBox3->Clear();
	textBox4->Clear();
}
	// авто установка на баттон 
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	radioButton1->PerformClick();
}
	// контроль суммы конвертации
private: System::Void textBox1_Leave_1(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "")
	{
		textBox1->Text = "0,00";
	}
	else
	{
		textBox1->Text = String::Format("{0:0.00}", Convert::ToDouble(textBox1->Text));
	}
}
	// контроль курса обмена [доллары -> рубли]
private: System::Void textBox2_Leave_1(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Text == "")
	{
		textBox2->Text = "0,00";
	}
	else
	{
		textBox2->Text = String::Format("{0:0.00}", Convert::ToDouble(textBox2->Text));
	}
}
	 // контроль курса обмена [рубли -> доллары]
private: System::Void textBox5_Leave(System::Object^  sender, System::EventArgs^  e) {
	if (textBox5->Text == "")
	{
		textBox5->Text = "0,00";
	}
	else
	{
		textBox5->Text = String::Format("{0:0.00}", Convert::ToDouble(textBox5->Text));
	}
}
	// контроль курса обмена [евро -> рубли]
private: System::Void textBox6_Leave(System::Object^  sender, System::EventArgs^  e) {
	if (textBox6->Text == "")
	{
		textBox6->Text = "0,00";
	}
	else
	{
		textBox6->Text = String::Format("{0:0.00}", Convert::ToDouble(textBox6->Text));
	}
}
	// контроль курса обмена [рубли -> евро]
private: System::Void textBox7_Leave(System::Object^  sender, System::EventArgs^  e) {
	if (textBox7->Text == "")
	{
		textBox7->Text = "0,00";
	}
	else
	{
		textBox7->Text = String::Format("{0:0.00}", Convert::ToDouble(textBox7->Text));
	}
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};
}
