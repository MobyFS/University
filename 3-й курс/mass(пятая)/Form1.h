#pragma once


namespace xArray {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBoxSource;

	private: System::Windows::Forms::TextBox^  textBoxResult;
	private: System::Windows::Forms::Button^  buttonRandom;
	private: System::Windows::Forms::TextBox^  textBoxMax;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBoxMin;

	private: System::Windows::Forms::TextBox^  textBoxN;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RadioButton^  radioButtonSortDesc;

	private: System::Windows::Forms::RadioButton^  radioButtonSort;

	private: System::Windows::Forms::RadioButton^  radioButtonOdd;

	private: System::Windows::Forms::RadioButton^  radioButtonEven;

	private: System::Windows::Forms::RadioButton^  radioButtonMax;

	private: System::Windows::Forms::RadioButton^  radioButtonMin;

	private: System::Windows::Forms::RadioButton^  radioButtonMiddle;

	private: System::Windows::Forms::RadioButton^  radioButtonSum;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  buttonSelectResult;

	private: System::Windows::Forms::Button^  buttonSelectSource;

	private: System::Windows::Forms::Button^  buttonSave;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  buttonLoad;
	private: System::Windows::Forms::TextBox^  textBoxResultName;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBoxSourceName;





	private: System::Windows::Forms::Button^  buttonExit;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::RadioButton^  radioButtonNothing;
	private: System::Windows::Forms::RadioButton^  radioButton1;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonRandom = (gcnew System::Windows::Forms::Button());
			this->textBoxMax = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxMin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxN = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButtonNothing = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonSortDesc = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonSort = (gcnew System::Windows::Forms::RadioButton());
			this->textBoxResult = (gcnew System::Windows::Forms::TextBox());
			this->radioButtonOdd = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonEven = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonMax = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonMin = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonMiddle = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonSum = (gcnew System::Windows::Forms::RadioButton());
			this->textBoxSource = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSelectResult = (gcnew System::Windows::Forms::Button());
			this->buttonSelectSource = (gcnew System::Windows::Forms::Button());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonLoad = (gcnew System::Windows::Forms::Button());
			this->textBoxResultName = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxSourceName = (gcnew System::Windows::Forms::TextBox());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->buttonRandom);
			this->groupBox1->Controls->Add(this->textBoxMax);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBoxMin);
			this->groupBox1->Controls->Add(this->textBoxN);
			this->groupBox1->Location = System::Drawing::Point(15, 14);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(264, 115);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные - случайно";
			// 
			// buttonRandom
			// 
			this->buttonRandom->BackColor = System::Drawing::Color::White;
			this->buttonRandom->Location = System::Drawing::Point(167, 19);
			this->buttonRandom->Name = L"buttonRandom";
			this->buttonRandom->Size = System::Drawing::Size(86, 23);
			this->buttonRandom->TabIndex = 3;
			this->buttonRandom->Text = L"Генерировать";
			this->buttonRandom->UseVisualStyleBackColor = false;
			this->buttonRandom->Click += gcnew System::EventHandler(this, &Form1::buttonRandom_Click);
			// 
			// textBoxMax
			// 
			this->textBoxMax->Location = System::Drawing::Point(112, 74);
			this->textBoxMax->Name = L"textBoxMax";
			this->textBoxMax->Size = System::Drawing::Size(49, 20);
			this->textBoxMax->TabIndex = 2;
			this->textBoxMax->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 77);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Максимум";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Минимум";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Всего элементов";
			// 
			// textBoxMin
			// 
			this->textBoxMin->Location = System::Drawing::Point(112, 47);
			this->textBoxMin->Name = L"textBoxMin";
			this->textBoxMin->Size = System::Drawing::Size(49, 20);
			this->textBoxMin->TabIndex = 1;
			this->textBoxMin->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBoxN
			// 
			this->textBoxN->Location = System::Drawing::Point(112, 20);
			this->textBoxN->Name = L"textBoxN";
			this->textBoxN->Size = System::Drawing::Size(49, 20);
			this->textBoxN->TabIndex = 0;
			this->textBoxN->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->radioButtonNothing);
			this->groupBox2->Controls->Add(this->radioButtonSortDesc);
			this->groupBox2->Controls->Add(this->radioButtonSort);
			this->groupBox2->Controls->Add(this->textBoxResult);
			this->groupBox2->Controls->Add(this->radioButtonOdd);
			this->groupBox2->Controls->Add(this->radioButtonEven);
			this->groupBox2->Controls->Add(this->radioButtonMax);
			this->groupBox2->Controls->Add(this->radioButtonMin);
			this->groupBox2->Controls->Add(this->radioButtonMiddle);
			this->groupBox2->Controls->Add(this->radioButtonSum);
			this->groupBox2->Location = System::Drawing::Point(15, 175);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(812, 120);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Выполнить операцию";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Результат";
			// 
			// radioButtonNothing
			// 
			this->radioButtonNothing->AutoSize = true;
			this->radioButtonNothing->Checked = true;
			this->radioButtonNothing->Location = System::Drawing::Point(562, 27);
			this->radioButtonNothing->Name = L"radioButtonNothing";
			this->radioButtonNothing->Size = System::Drawing::Size(114, 17);
			this->radioButtonNothing->TabIndex = 7;
			this->radioButtonNothing->TabStop = true;
			this->radioButtonNothing->Text = L"Ничего не делать";
			this->radioButtonNothing->UseVisualStyleBackColor = true;
			this->radioButtonNothing->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonNothing_CheckedChanged);
			// 
			// radioButtonSortDesc
			// 
			this->radioButtonSortDesc->AutoSize = true;
			this->radioButtonSortDesc->Location = System::Drawing::Point(394, 57);
			this->radioButtonSortDesc->Name = L"radioButtonSortDesc";
			this->radioButtonSortDesc->Size = System::Drawing::Size(148, 17);
			this->radioButtonSortDesc->TabIndex = 7;
			this->radioButtonSortDesc->Text = L"Сортировать (убывание)";
			this->radioButtonSortDesc->UseVisualStyleBackColor = true;
			this->radioButtonSortDesc->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonSortDesc_CheckedChanged);
			// 
			// radioButtonSort
			// 
			this->radioButtonSort->AutoSize = true;
			this->radioButtonSort->Location = System::Drawing::Point(394, 27);
			this->radioButtonSort->Name = L"radioButtonSort";
			this->radioButtonSort->Size = System::Drawing::Size(164, 17);
			this->radioButtonSort->TabIndex = 6;
			this->radioButtonSort->Text = L"Сортировать (возрастание)";
			this->radioButtonSort->UseVisualStyleBackColor = true;
			this->radioButtonSort->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonSort_CheckedChanged);
			// 
			// textBoxResult
			// 
			this->textBoxResult->Location = System::Drawing::Point(77, 83);
			this->textBoxResult->Name = L"textBoxResult";
			this->textBoxResult->ReadOnly = true;
			this->textBoxResult->Size = System::Drawing::Size(729, 20);
			this->textBoxResult->TabIndex = 1;
			// 
			// radioButtonOdd
			// 
			this->radioButtonOdd->AutoSize = true;
			this->radioButtonOdd->Location = System::Drawing::Point(266, 57);
			this->radioButtonOdd->Name = L"radioButtonOdd";
			this->radioButtonOdd->Size = System::Drawing::Size(129, 17);
			this->radioButtonOdd->TabIndex = 5;
			this->radioButtonOdd->Text = L"Нечетные элементы";
			this->radioButtonOdd->UseVisualStyleBackColor = true;
			this->radioButtonOdd->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonOdd_CheckedChanged);
			// 
			// radioButtonEven
			// 
			this->radioButtonEven->AutoSize = true;
			this->radioButtonEven->Location = System::Drawing::Point(266, 28);
			this->radioButtonEven->Name = L"radioButtonEven";
			this->radioButtonEven->Size = System::Drawing::Size(118, 17);
			this->radioButtonEven->TabIndex = 4;
			this->radioButtonEven->Text = L"Четные элементы";
			this->radioButtonEven->UseVisualStyleBackColor = true;
			this->radioButtonEven->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonEven_CheckedChanged);
			// 
			// radioButtonMax
			// 
			this->radioButtonMax->AutoSize = true;
			this->radioButtonMax->Location = System::Drawing::Point(133, 57);
			this->radioButtonMax->Name = L"radioButtonMax";
			this->radioButtonMax->Size = System::Drawing::Size(136, 17);
			this->radioButtonMax->TabIndex = 3;
			this->radioButtonMax->Text = L"Максимальный элем.";
			this->radioButtonMax->UseVisualStyleBackColor = true;
			this->radioButtonMax->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonMax_CheckedChanged);
			// 
			// radioButtonMin
			// 
			this->radioButtonMin->AutoSize = true;
			this->radioButtonMin->Location = System::Drawing::Point(133, 27);
			this->radioButtonMin->Name = L"radioButtonMin";
			this->radioButtonMin->Size = System::Drawing::Size(130, 17);
			this->radioButtonMin->TabIndex = 2;
			this->radioButtonMin->Text = L"Минимальный элем.";
			this->radioButtonMin->UseVisualStyleBackColor = true;
			this->radioButtonMin->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonMin_CheckedChanged);
			// 
			// radioButtonMiddle
			// 
			this->radioButtonMiddle->AutoSize = true;
			this->radioButtonMiddle->Location = System::Drawing::Point(19, 57);
			this->radioButtonMiddle->Name = L"radioButtonMiddle";
			this->radioButtonMiddle->Size = System::Drawing::Size(118, 17);
			this->radioButtonMiddle->TabIndex = 1;
			this->radioButtonMiddle->Text = L"Среднее значение";
			this->radioButtonMiddle->UseVisualStyleBackColor = true;
			this->radioButtonMiddle->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonMiddle_CheckedChanged);
			// 
			// radioButtonSum
			// 
			this->radioButtonSum->AutoSize = true;
			this->radioButtonSum->Location = System::Drawing::Point(19, 27);
			this->radioButtonSum->Name = L"radioButtonSum";
			this->radioButtonSum->Size = System::Drawing::Size(117, 17);
			this->radioButtonSum->TabIndex = 0;
			this->radioButtonSum->Text = L"Сумма элементов";
			this->radioButtonSum->UseVisualStyleBackColor = true;
			this->radioButtonSum->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonSum_CheckedChanged);
			// 
			// textBoxSource
			// 
			this->textBoxSource->Location = System::Drawing::Point(15, 149);
			this->textBoxSource->Name = L"textBoxSource";
			this->textBoxSource->Size = System::Drawing::Size(809, 20);
			this->textBoxSource->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Исходный массив";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->buttonSelectResult);
			this->groupBox3->Controls->Add(this->buttonSelectSource);
			this->groupBox3->Controls->Add(this->buttonSave);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->buttonLoad);
			this->groupBox3->Controls->Add(this->textBoxResultName);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->textBoxSourceName);
			this->groupBox3->Location = System::Drawing::Point(285, 14);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(542, 115);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Операции с файлами";
			// 
			// buttonSelectResult
			// 
			this->buttonSelectResult->BackColor = System::Drawing::Color::White;
			this->buttonSelectResult->Location = System::Drawing::Point(10, 86);
			this->buttonSelectResult->Name = L"buttonSelectResult";
			this->buttonSelectResult->Size = System::Drawing::Size(86, 23);
			this->buttonSelectResult->TabIndex = 3;
			this->buttonSelectResult->Text = L"Выбрать";
			this->buttonSelectResult->UseVisualStyleBackColor = false;
			this->buttonSelectResult->Click += gcnew System::EventHandler(this, &Form1::buttonSelectResult_Click);
			// 
			// buttonSelectSource
			// 
			this->buttonSelectSource->BackColor = System::Drawing::Color::White;
			this->buttonSelectSource->Location = System::Drawing::Point(10, 39);
			this->buttonSelectSource->Name = L"buttonSelectSource";
			this->buttonSelectSource->Size = System::Drawing::Size(86, 23);
			this->buttonSelectSource->TabIndex = 3;
			this->buttonSelectSource->Text = L"Выбрать";
			this->buttonSelectSource->UseVisualStyleBackColor = false;
			this->buttonSelectSource->Click += gcnew System::EventHandler(this, &Form1::buttonSelectSource_Click);
			// 
			// buttonSave
			// 
			this->buttonSave->BackColor = System::Drawing::Color::White;
			this->buttonSave->Location = System::Drawing::Point(451, 86);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(85, 23);
			this->buttonSave->TabIndex = 3;
			this->buttonSave->Text = L"Сохранить";
			this->buttonSave->UseVisualStyleBackColor = false;
			this->buttonSave->Click += gcnew System::EventHandler(this, &Form1::buttonSave_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(7, 65);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Имя выходного файла";
			// 
			// buttonLoad
			// 
			this->buttonLoad->BackColor = System::Drawing::Color::White;
			this->buttonLoad->Location = System::Drawing::Point(450, 39);
			this->buttonLoad->Name = L"buttonLoad";
			this->buttonLoad->Size = System::Drawing::Size(86, 23);
			this->buttonLoad->TabIndex = 3;
			this->buttonLoad->Text = L"Загрузить";
			this->buttonLoad->UseVisualStyleBackColor = false;
			this->buttonLoad->Click += gcnew System::EventHandler(this, &Form1::buttonLoad_Click);
			// 
			// textBoxResultName
			// 
			this->textBoxResultName->Location = System::Drawing::Point(134, 62);
			this->textBoxResultName->Name = L"textBoxResultName";
			this->textBoxResultName->Size = System::Drawing::Size(402, 20);
			this->textBoxResultName->TabIndex = 0;
			this->textBoxResultName->Text = L"Result.txt";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(7, 23);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(113, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Имя входного файла";
			// 
			// textBoxSourceName
			// 
			this->textBoxSourceName->Location = System::Drawing::Point(134, 18);
			this->textBoxSourceName->Name = L"textBoxSourceName";
			this->textBoxSourceName->Size = System::Drawing::Size(402, 20);
			this->textBoxSourceName->TabIndex = 0;
			this->textBoxSourceName->Text = L"Source.txt";
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(741, 301);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(86, 23);
			this->buttonExit->TabIndex = 3;
			this->buttonExit->Text = L"Закончить";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &Form1::buttonExit_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"*.txt";
			this->openFileDialog1->FileName = L"*.txt";
			this->openFileDialog1->Filter = L"Текст|*.txt";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"*.txt";
			this->saveFileDialog1->FileName = L"*.txt";
			this->saveFileDialog1->Filter = L"Текст|*.txt";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(562, 57);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(247, 17);
			this->radioButton1->TabIndex = 8;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Средне арифметическое четных элементов";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(839, 337);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxSource);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"Обработки массива";
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
	private: System::Void buttonExit_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//Закончить
		Close();
	}

	int * A = nullptr; //Это - обычный массив из языка C, динамический
	int N=0; //Размер массива
	Random^ R = gcnew Random(); //Генератор случайных чисел

	void ShowArray(int * A, int N, TextBox^ textBox)
	{
		textBox->Text = "";
		for (int k = 0; k < N; k++)
			textBox->Text += " " + A[k].ToString();
	}

	private: System::Void buttonRandom_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//Создать массив заданной длины и со случайными значениями
		if (N > 0) delete A; //Освободить память, если была занята
		N = 0;
		A = nullptr;
		try
		{
			N = Convert::ToInt32(textBoxN->Text);
		}
		catch (...)
		{
			MessageBox::Show("Длина массива - не целое число");
			return;
		}
		int Min;
		try
		{
			Min = Convert::ToInt32(textBoxMin->Text);
		}
		catch (...)
		{
			MessageBox::Show("Минимум - не целое число");
			return;
		}
		int Max;
		try
		{
			Max = Convert::ToInt32(textBoxMax->Text);
		}
		catch (...)
		{
			MessageBox::Show("Максимум - не целое число");
			return;
		}

		if (Max < Min)
		{
			int Temp = Min;
			Min = Max;
			Max = Temp;
			MessageBox::Show("Максимум меньше минимума, меры приняты");
		}

		A = new int[N];
		for (int k = 0; k < N; k++)
			A[k] = R->Next(Min, Max + 1);
		ShowArray(A, N, textBoxSource);
		radioButtonNothing->Checked = true;
		radioButtonNothing_CheckedChanged(sender, e);
	}

	private: System::Void buttonSelectSource_Click(System::Object^  sender, System::EventArgs^  e) 
	//Выбрать файл для загрузки	
	{
		if (openFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
		textBoxSourceName->Text = openFileDialog1->FileName;
	}

	private: System::Void buttonSelectResult_Click(System::Object^  sender, System::EventArgs^  e) 
		//Выбрать файл для сохранения
	{
		if (saveFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
		textBoxResultName->Text = saveFileDialog1->FileName;
	}
	private: System::Void buttonLoad_Click(System::Object^  sender, System::EventArgs^  e)
		//Загрузить исходный массив
	{
		String^ S = System::IO::File::ReadAllText(textBoxSourceName->Text);
		array<String^>^ Separators = { " " };
		array<String^>^ SS = S->Split(Separators,System::StringSplitOptions::RemoveEmptyEntries);
		N = SS->Length;
		if (A != nullptr) delete A;
		A = new int[N];
		try
		{
			for (int k = 0; k < N; k++)
				A[k] = int::Parse(SS[k]);
			ShowArray(A, N, textBoxSource);
		}
		 catch (...)
		 {
				 MessageBox::Show("Что то пошло не так");
				 return;
		 }
		 radioButtonNothing->Checked = true;
		 radioButtonNothing_CheckedChanged(sender, e);
	}

	private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e) 
		//Сохранить массив - результат
	{
		if (textBoxResult->Text == "")
		{
			MessageBox::Show("Нет результата");
			return;
		}
		System::IO::File::WriteAllText(textBoxResultName->Text, "Исходный массив:" + textBoxSource->Text + "\r\nРезультат:" + textBoxResult->Text);
	}
	//*****************  Сами функции ***************************
			 void ReadDataFromText()
				 //1:1 как при чтении
			 {
				 String^ S = textBoxSource->Text;
				 array<String^>^ Separators = { " " };
				 array<String^>^ SS = S->Split(Separators, System::StringSplitOptions::RemoveEmptyEntries);
				 N = SS->Length;
				 if (A != nullptr) delete A;
				 A = new int[N];
				 try{
				 for (int k = 0; k < N; k++)
					 A[k] = int::Parse(SS[k]);
				 }
				 catch (...)
				 {
					 MessageBox::Show("Что то пошло не так");
				 }
			 }

			 int Summ(int * A, int N)
			 {
				 int Sum = 0;
				 for (int k = 0; k < N; k++) Sum += A[k];
				 return Sum;
			 }

	private: System::Void radioButtonSum_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		//Сумма
	{
		ReadDataFromText();
		int Sum = Summ(A,N);
		textBoxResult->Text = Sum.ToString();
	}
	private: System::Void radioButtonMiddle_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		//Среднее
	{
		ReadDataFromText();
		int Sum = Summ(A, N);
		textBoxResult->Text = (1.0*Sum/N).ToString();
	}

	private: System::Void radioButtonMin_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
	//Минимальный (индекс и значение)
	{
		ReadDataFromText();
		int min = 0;
		for (int k = 1; k < N; k++)
			if (A[min] > A[k]) min = k;
		textBoxResult->Text = "A[" + min.ToString() + "] = " + A[min].ToString();
	}
	private: System::Void radioButtonMax_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		//Минимальный (индекс и значение)
	{
		ReadDataFromText();
		int max = 0;
		for (int k = 1; k < N; k++)
			if (A[max] < A[k]) max = k;
		textBoxResult->Text = "A[" + max.ToString() + "] = " + A[max].ToString();
	}

	private: System::Void radioButtonEven_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		//Выбрать четные. Элементы массива, а не индексы )
	{
		ReadDataFromText();
		//Посчитать
		int M = 0;
		for (int k = 0; k < N; k++)
			if (A[k] % 2 == 0)
				M++;
		//Создать результат
		int *Result = new int[M];
		//Выбрать
		M = 0;
		for (int k = 0; k < N; k++)
			if (A[k] % 2 == 0)
				Result[M++] = A[k];
		//Вывести
		ShowArray(Result, M, textBoxResult);
		//Освободить память
		delete Result;
	}

	private: System::Void radioButtonOdd_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		//Выбрать НЕчетные. Элементы массива, а не индексы )
	{
		ReadDataFromText();
		//Посчитать
		int M = 0;
		for (int k = 0; k < N; k++)
			if (A[k] % 2 != 0)
				M++;
		//Создать результат
		int *Result = new int[M];
		//Выбрать
		M = 0;
		for (int k = 0; k < N; k++)
			if (A[k] % 2 != 0)
				Result[M++] = A[k];
		//Вывести
		ShowArray(Result, M, textBoxResult);
		//Освободить память
		delete Result;
	}


	private: System::Void radioButtonSort_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		//Сортировать по возрастанию
	{
		ReadDataFromText();
		//Выборкой
		for (int k = 0; k < N - 1; k++)
		{
			int x = k;
			for (int i = k + 1; i < N; i++)
				if (A[i] < A[x])
					x = i;
			if (x != k)
			{
				int t = A[k];
				A[k] = A[x];
				A[x] = t;
			}
		}
		ShowArray(A, N, textBoxResult);
	}
	private: System::Void radioButtonSortDesc_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		//Сортировать по убыванию
	{
		ReadDataFromText();
		//Выборкой
		for (int k = 0; k < N - 1; k++)
		{
			int x = k;
			for (int i = k + 1; i < N; i++)
				if (A[i] > A[x])
					x = i;
			if (x != k)
			{
				int t = A[k];
				A[k] = A[x];
				A[x] = t;
			}
		}
		ShowArray(A, N, textBoxResult);
	}
	private: System::Void radioButtonNothing_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		//Ничего не делать
	{
		ReadDataFromText();
		ShowArray(A, N, textBoxResult);
	}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	ReadDataFromText();
	//Посчитать
	int M = 0;
	for (int k = 0; k < N; k++)
		if (A[k] % 2 == 0)
			M++;
	//Создать результат
	int *Result = new int[M];
	//Выбрать
	M = 0;
	for (int k = 0; k < N; k++)
		if (A[k] % 2 == 0)
			Result[M++] = A[k];
	//Вывести
	//ShowArray(Result, M, textBoxResult);
	int Sum = Summ(A, N);
	textBoxResult->Text = (1.0*Sum / N).ToString();
}
}; //Form
} //namespace

