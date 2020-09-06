#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "MathFuncsDll.h"
namespace Lab_work6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::ListBox^  listBox1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(120, 282);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(361, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ЗАПУСК";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(55, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(55, 84);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 131);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(197, 145);
			this->dataGridView1->TabIndex = 3;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(275, 68);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(190, 108);
			this->listBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F));
			this->label1->Location = System::Drawing::Point(79, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 15);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Столбцы";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F));
			this->label2->Location = System::Drawing::Point(84, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 15);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Строки";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F));
			this->label3->Location = System::Drawing::Point(314, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 15);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Последовательность L";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F));
			this->label4->Location = System::Drawing::Point(272, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(194, 15);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Кол-во простых чисел в столбцах";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(79, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 15);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Таблица";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(215, 212);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(331, 64);
			this->dataGridView2->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(579, 346);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Программирование алгоритмов формирования и обработки вложенных последовательносте"
				L"й";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		bool is_prime(int n)
		{
			int d = 2;
			while (n % d != 0) {
				d += 1;
			}
			return d == n;
		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int row, col;
		row = Convert::ToDouble(textBox1->Text);
		col = Convert::ToDouble(textBox2->Text);
		outmas(row, col);
	}
			 void outmas(int row,int col)
			 {

			 dataGridView1->RowCount = row;
			 dataGridView1->ColumnCount = col;
			 int** matrix = new int * [row];
			 int* array_simple = new int[row*col];
			 srand(time(NULL));
			 MathFuncs::MyMathFuncs::memory_matrix(col,row,matrix);
			 int cumsum = 0;
			 int k = 0;
			 for (int i = 0; i < col; i++)
			 {
				 for (int j = 0; j < row; j++)
				 {
					 if (is_prime(matrix[j][i]))
					 {
						 cumsum++;
						 array_simple[k++] = matrix[j][i];
					 }
				 }
				 listBox1->Items->Add(String::Format("В   ")+ (i) + ("  столбце ") + (cumsum)+("   простых чисел"));
				 cumsum = 0;
			 }
			 for (int i = 0; i < row; i++)
			 {
				 for (int j = 0; j < col; j++)
				 {
					 dataGridView1->Rows[i]->Cells[j]->Value = matrix[i][j];
				 }
			 }
			 MathFuncs::MyMathFuncs::array_simple(array_simple,k);
			 dataGridView2->ColumnCount = k;
				for (int i = 0; i < k; i++)
				 {
					dataGridView2->Rows[0]->Cells[i]->Value = array_simple[i];
				 }
			 for (int i = 0; i < row; i++)
			 {
				 delete[](matrix[i]);
			 }
			 delete[]matrix;
			 }
	};
}

