#pragma once
#using <Microsoft.VisualBasic.dll>
namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung f�r Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf�gen.
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
	private: System::Windows::Forms::Label^  label1;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(48, 71);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(184, 65);
			this->button1->TabIndex = 0;
			this->button1->Text = L"START";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(73, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 28);
			this->label1->TabIndex = 2;
			this->label1->Text = L"������ �2";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(281, 159);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Practical program �2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int kolotr = 0, sum = 0, srarifm = 0;
		int chislo;
		chislo = Convert::ToDouble(Microsoft::VisualBasic::Interaction::InputBox(L"������� �����", L"���� �����", L"", 500, 500));
		do
		{
			if (chislo < 0) {
				kolotr++;
				sum = sum + chislo;
			}
			chislo = Convert::ToDouble(Microsoft::VisualBasic::Interaction::InputBox(L"������� �����", L"���� �����", L"", 500, 500));
		} 
		while (chislo != 0);
		if (kolotr == 0) {
			MessageBox::Show("������������� ����� ���"); 
		}
		else
		{
			srarifm = sum / kolotr;
			MessageBox::Show("������ �������������� ����� = " + Convert::ToString(srarifm));
			MessageBox::Show("���-�� ������������� ����� = " + Convert::ToString(kolotr));

		}

	}
	};
}
