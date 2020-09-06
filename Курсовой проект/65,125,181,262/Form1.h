#pragma once
#include <cmath> 
#include <iostream>
#include <cstdlib>
#include <ctime>
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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  lbl_res;
	private: System::Windows::Forms::Label^  lbl_ent;
	private: System::Windows::Forms::Button^  button_close181;

	private: System::Windows::Forms::TextBox^  txt_result181;


	private: System::Windows::Forms::TextBox^  txt_n;
	private: System::Windows::Forms::Button^  button_raz181;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Label^  lbl_result;
	private: System::Windows::Forms::TextBox^  txt_arif;
	private: System::Windows::Forms::Label^  lbl_arif;
	private: System::Windows::Forms::Button^  button_close262;

	private: System::Windows::Forms::Button^  button_raz262;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::Label^  lbl_minsumm;
	private: System::Windows::Forms::TextBox^  txt_minsumm;
	private: System::Windows::Forms::Label^  lbl_maxsumm;
	private: System::Windows::Forms::TextBox^  txt_maxsumm;
	private: System::Windows::Forms::Label^  lbl_min;
	private: System::Windows::Forms::TextBox^  txt_min;
	private: System::Windows::Forms::Label^  lbl_max;
	private: System::Windows::Forms::TextBox^  txt_max;
	private: System::Windows::Forms::Label^  lbl_matr;
	private: System::Windows::Forms::TextBox^  txt_matr;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  lbl_rows;
	private: System::Windows::Forms::Label^  lbl_columns;
	private: System::Windows::Forms::TextBox^  txt_rows;
	private: System::Windows::Forms::TextBox^  txt_columns;
	private: System::Windows::Forms::Button^  button_gen125;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button_close65;
	private: System::Windows::Forms::Button^  button_raz65;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  txt_resmatr65;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txt_entmatr65;


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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button_close65 = (gcnew System::Windows::Forms::Button());
			this->button_raz65 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->txt_resmatr65 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_entmatr65 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->lbl_result = (gcnew System::Windows::Forms::Label());
			this->txt_arif = (gcnew System::Windows::Forms::TextBox());
			this->lbl_arif = (gcnew System::Windows::Forms::Label());
			this->button_close262 = (gcnew System::Windows::Forms::Button());
			this->button_raz262 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->lbl_res = (gcnew System::Windows::Forms::Label());
			this->lbl_ent = (gcnew System::Windows::Forms::Label());
			this->button_close181 = (gcnew System::Windows::Forms::Button());
			this->txt_result181 = (gcnew System::Windows::Forms::TextBox());
			this->txt_n = (gcnew System::Windows::Forms::TextBox());
			this->button_raz181 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lbl_minsumm = (gcnew System::Windows::Forms::Label());
			this->txt_minsumm = (gcnew System::Windows::Forms::TextBox());
			this->lbl_maxsumm = (gcnew System::Windows::Forms::Label());
			this->txt_maxsumm = (gcnew System::Windows::Forms::TextBox());
			this->lbl_min = (gcnew System::Windows::Forms::Label());
			this->txt_min = (gcnew System::Windows::Forms::TextBox());
			this->lbl_max = (gcnew System::Windows::Forms::Label());
			this->txt_max = (gcnew System::Windows::Forms::TextBox());
			this->lbl_matr = (gcnew System::Windows::Forms::Label());
			this->txt_matr = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lbl_rows = (gcnew System::Windows::Forms::Label());
			this->lbl_columns = (gcnew System::Windows::Forms::Label());
			this->txt_rows = (gcnew System::Windows::Forms::TextBox());
			this->txt_columns = (gcnew System::Windows::Forms::TextBox());
			this->button_gen125 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(403, 364);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button_close65);
			this->tabPage1->Controls->Add(this->button_raz65);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->txt_resmatr65);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->txt_entmatr65);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(395, 338);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"65";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button_close65
			// 
			this->button_close65->Location = System::Drawing::Point(9, 308);
			this->button_close65->Name = L"button_close65";
			this->button_close65->Size = System::Drawing::Size(75, 23);
			this->button_close65->TabIndex = 9;
			this->button_close65->Text = L"Закрыть";
			this->button_close65->UseVisualStyleBackColor = true;
			this->button_close65->Click += gcnew System::EventHandler(this, &Form1::button_close65_Click);
			// 
			// button_raz65
			// 
			this->button_raz65->Location = System::Drawing::Point(9, 279);
			this->button_raz65->Name = L"button_raz65";
			this->button_raz65->Size = System::Drawing::Size(75, 23);
			this->button_raz65->TabIndex = 8;
			this->button_raz65->Text = L"Выполнить";
			this->button_raz65->UseVisualStyleBackColor = true;
			this->button_raz65->Click += gcnew System::EventHandler(this, &Form1::button_raz65_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 175);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(282, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Самая длинная \"пилообразная\" последовательность:\r\n";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(9, 191);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(364, 20);
			this->textBox3->TabIndex = 6;
			// 
			// txt_resmatr65
			// 
			this->txt_resmatr65->Location = System::Drawing::Point(125, 123);
			this->txt_resmatr65->Name = L"txt_resmatr65";
			this->txt_resmatr65->ReadOnly = true;
			this->txt_resmatr65->Size = System::Drawing::Size(248, 20);
			this->txt_resmatr65->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 126);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Полученный массив:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Введите размер массива:";
			// 
			// txt_entmatr65
			// 
			this->txt_entmatr65->Location = System::Drawing::Point(152, 91);
			this->txt_entmatr65->Name = L"txt_entmatr65";
			this->txt_entmatr65->Size = System::Drawing::Size(221, 20);
			this->txt_entmatr65->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(367, 52);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Задача:  Найти длину самой длинной \"пилообразной\" (зубьями вверх) \r\nпоследователь"
				L"ности идущих подряд чисел. \r\na1 < a2 > a3 < … > an-1 < an\r\na1 > a2 < a3 > … < an"
				L"-1 > an";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->lbl_result);
			this->tabPage2->Controls->Add(this->txt_arif);
			this->tabPage2->Controls->Add(this->lbl_arif);
			this->tabPage2->Controls->Add(this->button_close262);
			this->tabPage2->Controls->Add(this->button_raz262);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(395, 338);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"262";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// lbl_result
			// 
			this->lbl_result->AutoSize = true;
			this->lbl_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_result->Location = System::Drawing::Point(47, 166);
			this->lbl_result->Name = L"lbl_result";
			this->lbl_result->Size = System::Drawing::Size(0, 20);
			this->lbl_result->TabIndex = 5;
			// 
			// txt_arif
			// 
			this->txt_arif->Location = System::Drawing::Point(211, 86);
			this->txt_arif->Name = L"txt_arif";
			this->txt_arif->Size = System::Drawing::Size(169, 20);
			this->txt_arif->TabIndex = 4;
			// 
			// lbl_arif
			// 
			this->lbl_arif->AutoSize = true;
			this->lbl_arif->Location = System::Drawing::Point(3, 89);
			this->lbl_arif->Name = L"lbl_arif";
			this->lbl_arif->Size = System::Drawing::Size(202, 13);
			this->lbl_arif->TabIndex = 3;
			this->lbl_arif->Text = L"Введите арифметическое выражение:";
			// 
			// button_close262
			// 
			this->button_close262->Location = System::Drawing::Point(6, 309);
			this->button_close262->Name = L"button_close262";
			this->button_close262->Size = System::Drawing::Size(75, 23);
			this->button_close262->TabIndex = 2;
			this->button_close262->Text = L"Закрыть";
			this->button_close262->UseVisualStyleBackColor = true;
			this->button_close262->Click += gcnew System::EventHandler(this, &Form1::button_close262_Click);
			// 
			// button_raz262
			// 
			this->button_raz262->Location = System::Drawing::Point(6, 280);
			this->button_raz262->Name = L"button_raz262";
			this->button_raz262->Size = System::Drawing::Size(75, 23);
			this->button_raz262->TabIndex = 1;
			this->button_raz262->Text = L"Проверить";
			this->button_raz262->UseVisualStyleBackColor = true;
			this->button_raz262->Click += gcnew System::EventHandler(this, &Form1::button_raz262_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(377, 39);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Задача: Дана строка символов.\r\nПроверить является ли эта строка синтаксически пра"
				L"вильной записью \r\nарифметического выражения";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->lbl_res);
			this->tabPage3->Controls->Add(this->lbl_ent);
			this->tabPage3->Controls->Add(this->button_close181);
			this->tabPage3->Controls->Add(this->txt_result181);
			this->tabPage3->Controls->Add(this->txt_n);
			this->tabPage3->Controls->Add(this->button_raz181);
			this->tabPage3->Controls->Add(this->label1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(395, 338);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"181";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// lbl_res
			// 
			this->lbl_res->AutoSize = true;
			this->lbl_res->Location = System::Drawing::Point(6, 100);
			this->lbl_res->Name = L"lbl_res";
			this->lbl_res->Size = System::Drawing::Size(127, 13);
			this->lbl_res->TabIndex = 6;
			this->lbl_res->Text = L"Результат разложения:";
			// 
			// lbl_ent
			// 
			this->lbl_ent->AutoSize = true;
			this->lbl_ent->Location = System::Drawing::Point(6, 64);
			this->lbl_ent->Name = L"lbl_ent";
			this->lbl_ent->Size = System::Drawing::Size(151, 13);
			this->lbl_ent->TabIndex = 5;
			this->lbl_ent->Text = L"Введите натуральное число:";
			// 
			// button_close181
			// 
			this->button_close181->Location = System::Drawing::Point(6, 306);
			this->button_close181->Name = L"button_close181";
			this->button_close181->Size = System::Drawing::Size(75, 23);
			this->button_close181->TabIndex = 4;
			this->button_close181->Text = L"Закрыть";
			this->button_close181->UseVisualStyleBackColor = true;
			this->button_close181->Click += gcnew System::EventHandler(this, &Form1::button_close_Click);
			// 
			// txt_result181
			// 
			this->txt_result181->Location = System::Drawing::Point(139, 97);
			this->txt_result181->Name = L"txt_result181";
			this->txt_result181->ReadOnly = true;
			this->txt_result181->Size = System::Drawing::Size(242, 20);
			this->txt_result181->TabIndex = 3;
			// 
			// txt_n
			// 
			this->txt_n->Location = System::Drawing::Point(163, 61);
			this->txt_n->Name = L"txt_n";
			this->txt_n->Size = System::Drawing::Size(218, 20);
			this->txt_n->TabIndex = 2;
			this->txt_n->TextChanged += gcnew System::EventHandler(this, &Form1::txt_n_TextChanged);
			this->txt_n->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txt_n_KeyPress);
			// 
			// button_raz181
			// 
			this->button_raz181->Location = System::Drawing::Point(6, 277);
			this->button_raz181->Name = L"button_raz181";
			this->button_raz181->Size = System::Drawing::Size(75, 23);
			this->button_raz181->TabIndex = 1;
			this->button_raz181->Text = L"Разложить";
			this->button_raz181->UseVisualStyleBackColor = true;
			this->button_raz181->Click += gcnew System::EventHandler(this, &Form1::button_raz_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(345, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Задача: Составить программу разложения данного натурального \r\nчисла на простые мн"
				L"ожители";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->groupBox2);
			this->tabPage4->Controls->Add(this->lbl_matr);
			this->tabPage4->Controls->Add(this->txt_matr);
			this->tabPage4->Controls->Add(this->groupBox1);
			this->tabPage4->Controls->Add(this->label3);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(395, 338);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"125";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lbl_minsumm);
			this->groupBox2->Controls->Add(this->txt_minsumm);
			this->groupBox2->Controls->Add(this->lbl_maxsumm);
			this->groupBox2->Controls->Add(this->txt_maxsumm);
			this->groupBox2->Controls->Add(this->lbl_min);
			this->groupBox2->Controls->Add(this->txt_min);
			this->groupBox2->Controls->Add(this->lbl_max);
			this->groupBox2->Controls->Add(this->txt_max);
			this->groupBox2->Location = System::Drawing::Point(6, 187);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(368, 141);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Результат";
			// 
			// lbl_minsumm
			// 
			this->lbl_minsumm->AutoSize = true;
			this->lbl_minsumm->Location = System::Drawing::Point(6, 104);
			this->lbl_minsumm->Name = L"lbl_minsumm";
			this->lbl_minsumm->Size = System::Drawing::Size(102, 13);
			this->lbl_minsumm->TabIndex = 13;
			this->lbl_minsumm->Text = L"Сумма элементов:";
			// 
			// txt_minsumm
			// 
			this->txt_minsumm->Location = System::Drawing::Point(114, 101);
			this->txt_minsumm->Name = L"txt_minsumm";
			this->txt_minsumm->ReadOnly = true;
			this->txt_minsumm->Size = System::Drawing::Size(132, 20);
			this->txt_minsumm->TabIndex = 12;
			// 
			// lbl_maxsumm
			// 
			this->lbl_maxsumm->AutoSize = true;
			this->lbl_maxsumm->Location = System::Drawing::Point(6, 50);
			this->lbl_maxsumm->Name = L"lbl_maxsumm";
			this->lbl_maxsumm->Size = System::Drawing::Size(102, 13);
			this->lbl_maxsumm->TabIndex = 11;
			this->lbl_maxsumm->Text = L"Сумма элементов:";
			// 
			// txt_maxsumm
			// 
			this->txt_maxsumm->Location = System::Drawing::Point(114, 47);
			this->txt_maxsumm->Name = L"txt_maxsumm";
			this->txt_maxsumm->ReadOnly = true;
			this->txt_maxsumm->Size = System::Drawing::Size(132, 20);
			this->txt_maxsumm->TabIndex = 10;
			// 
			// lbl_min
			// 
			this->lbl_min->AutoSize = true;
			this->lbl_min->Location = System::Drawing::Point(6, 76);
			this->lbl_min->Name = L"lbl_min";
			this->lbl_min->Size = System::Drawing::Size(222, 13);
			this->lbl_min->TabIndex = 9;
			this->lbl_min->Text = L"Строка с наименьшей суммой элементов:";
			// 
			// txt_min
			// 
			this->txt_min->Location = System::Drawing::Point(230, 73);
			this->txt_min->Name = L"txt_min";
			this->txt_min->ReadOnly = true;
			this->txt_min->Size = System::Drawing::Size(128, 20);
			this->txt_min->TabIndex = 8;
			// 
			// lbl_max
			// 
			this->lbl_max->AutoSize = true;
			this->lbl_max->Location = System::Drawing::Point(6, 23);
			this->lbl_max->Name = L"lbl_max";
			this->lbl_max->Size = System::Drawing::Size(220, 13);
			this->lbl_max->TabIndex = 7;
			this->lbl_max->Text = L"Строка с наибольшей суммой элементов:";
			// 
			// txt_max
			// 
			this->txt_max->Location = System::Drawing::Point(226, 20);
			this->txt_max->Name = L"txt_max";
			this->txt_max->ReadOnly = true;
			this->txt_max->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->txt_max->Size = System::Drawing::Size(132, 20);
			this->txt_max->TabIndex = 6;
			// 
			// lbl_matr
			// 
			this->lbl_matr->AutoSize = true;
			this->lbl_matr->Location = System::Drawing::Point(258, 60);
			this->lbl_matr->Name = L"lbl_matr";
			this->lbl_matr->Size = System::Drawing::Size(51, 13);
			this->lbl_matr->TabIndex = 5;
			this->lbl_matr->Text = L"Матрица";
			// 
			// txt_matr
			// 
			this->txt_matr->Location = System::Drawing::Point(196, 76);
			this->txt_matr->Multiline = true;
			this->txt_matr->Name = L"txt_matr";
			this->txt_matr->ReadOnly = true;
			this->txt_matr->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->txt_matr->Size = System::Drawing::Size(178, 102);
			this->txt_matr->TabIndex = 4;
			this->txt_matr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lbl_rows);
			this->groupBox1->Controls->Add(this->lbl_columns);
			this->groupBox1->Controls->Add(this->txt_rows);
			this->groupBox1->Controls->Add(this->txt_columns);
			this->groupBox1->Controls->Add(this->button_gen125);
			this->groupBox1->Location = System::Drawing::Point(6, 68);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(172, 110);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные";
			// 
			// lbl_rows
			// 
			this->lbl_rows->AutoSize = true;
			this->lbl_rows->Location = System::Drawing::Point(14, 56);
			this->lbl_rows->Name = L"lbl_rows";
			this->lbl_rows->Size = System::Drawing::Size(46, 13);
			this->lbl_rows->TabIndex = 6;
			this->lbl_rows->Text = L"Строки:";
			// 
			// lbl_columns
			// 
			this->lbl_columns->AutoSize = true;
			this->lbl_columns->Location = System::Drawing::Point(6, 30);
			this->lbl_columns->Name = L"lbl_columns";
			this->lbl_columns->Size = System::Drawing::Size(54, 13);
			this->lbl_columns->TabIndex = 5;
			this->lbl_columns->Text = L"Столбцы:";
			// 
			// txt_rows
			// 
			this->txt_rows->Location = System::Drawing::Point(63, 53);
			this->txt_rows->Name = L"txt_rows";
			this->txt_rows->Size = System::Drawing::Size(100, 20);
			this->txt_rows->TabIndex = 4;
			// 
			// txt_columns
			// 
			this->txt_columns->Location = System::Drawing::Point(63, 27);
			this->txt_columns->Name = L"txt_columns";
			this->txt_columns->Size = System::Drawing::Size(100, 20);
			this->txt_columns->TabIndex = 3;
			// 
			// button_gen125
			// 
			this->button_gen125->Location = System::Drawing::Point(63, 79);
			this->button_gen125->Name = L"button_gen125";
			this->button_gen125->Size = System::Drawing::Size(100, 23);
			this->button_gen125->TabIndex = 2;
			this->button_gen125->Text = L"Генерировать";
			this->button_gen125->UseVisualStyleBackColor = true;
			this->button_gen125->Click += gcnew System::EventHandler(this, &Form1::button_gen125_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(328, 52);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Задача: Дана прямоугольная матрица.\r\nНайти строку с наибольшей и наименьшей суммо"
				L"й элементов.\r\nВывести на печать найденные строки и суммы их элементов.\r\n\r\n";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(427, 394);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"Курсовой проект";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//Программа 181 (начало)
		// Разложение натурального числа на простые множители 
	private: System::Void button_raz_Click(System::Object^  sender, System::EventArgs^  e) {
		int n,m = 2;
		n = Convert::ToInt64(txt_n->Text);
		if (n == 1)
		{
			txt_result181->Text = Convert::ToString("Простых множителей нет");
		}
		else if (n <= 0)
		{
			MessageBox::Show("Натуральное число должно быть > 0, повторите ввод", "Предупреждение", MessageBoxButtons::OK,
				MessageBoxIcon::Information);
			txt_n->Clear();
		}
		else if (n > 0)
		{
			while (n!= 1) // пока число не ноль
			{ 
				if (n%m == 0)
				{ 
				txt_result181->Text += m + "*";
				n /= m;
				m = 2;
				}
				else
					m++;
			};
			txt_result181->Text = txt_result181->Text->Remove(txt_result181->Text-> Length - 1, 1);
		}
	}
		// Выход
private: System::Void button_close_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
		// При изменении натурального числа происходит очистка поля "Результат разложения"
private: System::Void txt_n_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	txt_result181->Text = "";
}
		// Ограничение ввода в txt_n ("Введите натуральное число")
private: System::Void txt_n_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b') // 48-57 [A-Z + символы #,@,< и тд]
		e->Handled = true;

	// ограничение нажатия двойного 0
	if (e->KeyChar == (char)Keys::D0 || e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
	{
		if (txt_n->Text->Length >= 1) // Если строка не пустая
		{
			if (txt_n->Text[0] == '0' && txt_n->SelectionStart > 0)
				e->Handled = true;
		}
	}
}
		 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		 //Программа 181 (Конец)

		 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		 //Программа 262 (начало)
		 // Выход
private: System::Void button_close262_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
		 //Проверка: данный символ математический знак или нет
		 bool IsZnak(char a)
		 {
			 if (a == '+' || a == '-' || a == '/' || a == '*') return true;
			 else return false;
		 }
		 //Проверка: данный символ цифра или нет
		 bool IsDigit(char a)
		 {
			 if (isdigit(a)) return true;
			 else return false;
		 }

		 //Баланс скобок
		 bool Balance(System::String^ text)
		 {
			 System::Collections::Stack^ stack = gcnew System::Collections::Stack();
			 for (int i = 0; i < txt_arif->Text->Length; i++)
			 {
				 if (txt_arif->Text[i] == '(')
				 {
					 try
					 {
						 stack->Push("(");
					 }
					 catch (Exception^ ex)
					 {
						 return false;
					 }
				 }
				 else if (txt_arif->Text[i] == ')')
				 {
					 try
					 {
						 stack->Pop();
					 }
					 catch (Exception^ ex)
					 {
						 return false;
					 }
				 }
			 }
			 if (stack->Count != 0) return false;
			 else return true;
		 }
private: System::Void button_raz262_Click(System::Object^  sender, System::EventArgs^  e) {
	int sost = 0; //Состояние автомата
	bool result = true; //Результат
	try
	{
		if (IsZnak(txt_arif->Text[0])) sost = 0;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Ошибка! Пустое выражение");
	}
	for (int i = 0; i < txt_arif->Text->Length; i++)
	{
		if (txt_arif->Text[i] == ' ') continue; //Пробелы не учитываются
		if (sost == 0)
		{
			if (txt_arif->Text[i] == '(') sost = 1;
			else if (txt_arif->Text[i] == '-') sost = 20;
			else if (IsDigit(txt_arif->Text[i])) sost = 21;
			else { result = false; break; }
		}
		else if (sost == 1)
		{
			if (txt_arif->Text[i] == '-') sost = 20;
			else if (txt_arif->Text[i] == '(') sost = 1;
			else if (IsDigit(txt_arif->Text[i])) sost = 21;
			else { result = false; break; }
		}
		else if (sost == 20)
		{
			if (IsDigit(txt_arif->Text[i])) sost = 21;
			else { result = false; break; }
		}
		else if (sost == 21)
		{
			if (IsDigit(txt_arif->Text[i])) sost = 21;
			else if (txt_arif->Text[i] == '.') sost = 3;
			else if (txt_arif->Text[i] == ')') sost = 5;
			else if (IsZnak(txt_arif->Text[i])) sost = 0;
			else { result = false; break; }
		}
		else if (sost == 3)
		{
			if (IsDigit(txt_arif->Text[i])) sost = 4;
			else { result = false; break; }
		}
		else if (sost == 4)
		{
			if (IsDigit(txt_arif->Text[i])) sost = 4;
			else if (txt_arif->Text[i] == ')') sost = 5;
			else if (IsZnak(txt_arif->Text[i])) sost = 0;
			else { result = false; break; }
		}
		else if (sost == 5)
		{
			if (IsZnak(txt_arif->Text[i])) sost = 0;
			else if (txt_arif->Text[i] == ')') sost = 5;
			else { result = false; break; }
		}
	}
	if (sost != 21 && sost != 5) result = false;
	if (result == true)
	{
		if (Balance(txt_arif->Text))
			lbl_result->Text = "Выражение синтаксически верное";
		else
			lbl_result->Text = "Нарушен баланс скобок";
	}

	else lbl_result->Text = "Выражение синтаксически неверное";
}
		 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		 //Программа 262 (Конец)

		 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		 //Программа 125 (начало)
		 // Генерация массива 
	private: System::Void button_gen125_Click(System::Object^  sender, System::EventArgs^  e) {
		txt_matr->Clear();
		txt_max->Clear();
		txt_min->Clear();
		txt_maxsumm->Clear();
		txt_minsumm->Clear();
		int m, n, i, j, min_num = 0, max_num = 0, min = 0, max = 0, sum = 0; //обьявление переменных
		n = Convert::ToDouble(txt_columns->Text);
		m = Convert::ToDouble(txt_rows->Text);
		if (n <= 0 || m <= 0)
		{
			MessageBox::Show("Вы совершаете неправильный ввод,повторите попытку", "Предупреждение", MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
		else 
		{ 
		int **A = new int*[n]; // строк в массиве
		for (int i = 0; i < n; i++)
		{
			A[i] = new int[m]; // столбцов
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				A[i][j] = rand() % 10;//заполняем
				txt_matr->AppendText(A[i][j].ToString() + " "); // выводим сформированный массив
			}
			txt_matr->AppendText("\n");

		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{

				if (i == 0) //если строка первая
				{
					sum += A[i][j]; //считаем сумму
					min += A[i][j]; //по умолчанию считаем что сумма первой строки минимальная
					max += A[i][j]; // она же максимальная
				}
				else 
				{
					sum += A[i][j]; //для всех остальных строк просто считаем сумму
				}
			}
			if (sum > max) //если сумма строки больше максимальной
			{
				max = sum;  //максимальному значению присваиваем сумму этой строчки.
				max_num = i; //номер текущей строки присваиваем номеру максимальной строки по умолчанию
			}
			if (sum < min)
			{
				min = sum; //минимальному значению присваиваем сумму этой строчки.
				min_num = i; //номер текущей строки присваиваем номеру минимальной строки по умолчанию
			}
			sum = 0; //перед переходом на новую строку обнуляем сумму
		}
	i = min_num;
	for (j = 0; j < m; j++) //вывод минимальной строки
	{
		txt_min->AppendText(A[i][j].ToString() + " ");
	}
	txt_minsumm->AppendText(min.ToString() + " ");  // вывод суммы элементов (минимальной строки)
	i = max_num;
	for (j = 0; j < m; j++) //вывод максимальной строки
	{
		txt_max->AppendText(A[i][j].ToString() + " ");
	}
	txt_maxsumm->AppendText(max.ToString() + " "); // вывод суммы элементов (максимальной строки)
	// Удаление массива
	for (int i = 0; i < n; i++)
	{
		delete[]A[i]; // Удаляем каждый элемент
	}
	delete[] A; // А потом массив
}
}
			 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			 //Программа 125 (конец)

			 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			 //Программа 65 (начало)
			 // Выход
private: System::Void button_close65_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void button_raz65_Click(System::Object^  sender, System::EventArgs^  e) {

	txt_resmatr65->Clear();
	textBox3->Clear();
	int n = Convert::ToDouble(txt_entmatr65->Text);
	int *mass = new int[n];
	for (int i = 0; i < n; i++)
	{
		mass[i] = rand() % 10; // случайные числа от 0 до 10
		txt_resmatr65->Text += mass[i].ToString() + " ";
	}
	int m = 0;
	int i = 1;
	int len = -2;
	if (n == 1)
	{
		textBox3->Text = Convert::ToString("1");
	}
	if (n == 2)
	{
		if ((mass[i + 1] > mass[i]) || ((mass[i + 1] < mass[i])))
		{
			textBox3->Text = Convert::ToString("2");
		}
	}
	while ( i<n - 1)
	{
		if (((mass[i + 1] > mass[i]) && (mass[i + 1] > mass[i - 1]))
			|| ((mass[i + 1] < mass[i]) && (mass[i + 1] < mass[i - 1])))
		{
			m++;
			if (len < m) 
			{ 
				len = m; 
			}
			i++;
		}
		else
		{
			m = 0;
			i++;
		}
		textBox3->Text = Convert::ToString(len + 2);
	}
}
};
}

