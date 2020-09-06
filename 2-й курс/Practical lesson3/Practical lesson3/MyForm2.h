#pragma once
#using <Microsoft.VisualBasic.dll>
namespace Practical_lesson3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(95, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 19);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Вариант 5";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(84, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 22);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Задача № 2";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(57, 73);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 62);
			this->button1->TabIndex = 3;
			this->button1->Text = L"ЗАПУСК";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 150);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm2";
			this->Text = L"Задача № 2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int kolotr = 0, sum = 0, srarifm = 0;
		int chislo;
		chislo = Convert::ToDouble(Microsoft::VisualBasic::Interaction::InputBox(L"Введите число", L"Ввод чисел", L"", 500, 500));
		do
		{
			if (chislo < 0) {
				kolotr++;
				sum = sum + chislo;
			}
			chislo = Convert::ToDouble(Microsoft::VisualBasic::Interaction::InputBox(L"Введите число", L"Ввод чисел", L"", 500, 500));
		} while (chislo != 0);
		if (kolotr == 0) {
			MessageBox::Show("Отрицательных чисел нет");
		}
		else
		{
			srarifm = sum / kolotr;
			MessageBox::Show("Средне арифметическое чисел = " + Convert::ToString(srarifm));
			MessageBox::Show("Кол-во отрицательных чисел = " + Convert::ToString(kolotr));

		}

	}
	};
}
