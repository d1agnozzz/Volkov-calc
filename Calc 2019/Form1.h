#pragma once
namespace Calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int opCase = 0;

	/// <summary>
	/// Summary for Form1
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
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Label^ lblOper;

	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::Label^ lblResult;
	private: System::Windows::Forms::TextBox^ txt1;
	private: System::Windows::Forms::TextBox^ txt2;
	private: System::Windows::Forms::TextBox^ txtResult;
	private: System::Windows::Forms::Button^ btnMultiply;
	private: System::Windows::Forms::Button^ btnDivide;
	private: System::Windows::Forms::Button^ btnMinus;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblErr;










	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->lblOper = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblErr = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->Location = System::Drawing::Point(243, 185);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(100, 30);
			this->btnClose->TabIndex = 0;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Form1::btnClose_Click);
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnReset->Location = System::Drawing::Point(243, 10);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(100, 30);
			this->btnReset->TabIndex = 1;
			this->btnReset->Text = L"Сброс";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &Form1::btnReset_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAdd->Location = System::Drawing::Point(243, 150);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(100, 30);
			this->btnAdd->TabIndex = 2;
			this->btnAdd->Text = L"Сложить";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Form1::btnAdd_Click);
			// 
			// lblOper
			// 
			this->lblOper->AutoSize = true;
			this->lblOper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblOper->Location = System::Drawing::Point(21, 10);
			this->lblOper->Name = L"lblOper";
			this->lblOper->Size = System::Drawing::Size(0, 13);
			this->lblOper->TabIndex = 3;
			this->lblOper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl1->Location = System::Drawing::Point(10, 60);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(85, 16);
			this->lbl1->TabIndex = 5;
			this->lbl1->Text = L"Первое число";
			this->lbl1->Click += gcnew System::EventHandler(this, &Form1::lbl1_Click);
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl2->Location = System::Drawing::Point(10, 90);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(83, 16);
			this->lbl2->TabIndex = 6;
			this->lbl2->Text = L"Второе число";
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblResult->Location = System::Drawing::Point(10, 120);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(60, 16);
			this->lblResult->TabIndex = 7;
			this->lblResult->Text = L"Результат";
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(110, 60);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(106, 20);
			this->txt1->TabIndex = 8;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt1->TextChanged += gcnew System::EventHandler(this, &Form1::txt1_TextChanged);
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txt1_KeyPress);
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(110, 90);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(106, 20);
			this->txt2->TabIndex = 9;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt2->TextChanged += gcnew System::EventHandler(this, &Form1::txt1_TextChanged);
			this->txt2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txt1_KeyPress);
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(110, 120);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(106, 20);
			this->txtResult->TabIndex = 10;
			this->txtResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnMultiply
			// 
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMultiply->Location = System::Drawing::Point(243, 43);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(100, 30);
			this->btnMultiply->TabIndex = 11;
			this->btnMultiply->Text = L"Умножить";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &Form1::btnMultiply_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDivide->Location = System::Drawing::Point(243, 78);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(100, 30);
			this->btnDivide->TabIndex = 12;
			this->btnDivide->Text = L"Разделить";
			this->btnDivide->UseVisualStyleBackColor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &Form1::btnDivide_Click);
			// 
			// btnMinus
			// 
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMinus->Location = System::Drawing::Point(243, 114);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(100, 30);
			this->btnMinus->TabIndex = 12;
			this->btnMinus->Text = L"Вычесть";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &Form1::btnMinus_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 13;
			// 
			// lblErr
			// 
			this->lblErr->AutoSize = true;
			this->lblErr->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblErr->ForeColor = System::Drawing::Color::Maroon;
			this->lblErr->Location = System::Drawing::Point(36, 175);
			this->lblErr->Name = L"lblErr";
			this->lblErr->Size = System::Drawing::Size(0, 19);
			this->lblErr->TabIndex = 14;
			this->lblErr->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 231);
			this->Controls->Add(this->lblErr);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->lblOper);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnClose);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Calc";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void addZero() {
			if (txt1->Text->StartsWith(",")) {
				txt1->Text = "0" + txt1->Text;
			}
			if (txt2->Text->StartsWith(",")) {
				txt2->Text = "0" + txt2->Text;
			}
			if (txt1->Text->EndsWith(",")) {
				txt1->Text = txt1->Text + "0";
			}
			if (txt2->Text->EndsWith(",")) {
				txt2->Text = txt2->Text + "0";
			}
		}

		void resetFunc() {
			this->lblOper->Text = L"";
			this->txt1->Text = L"";
			this->txt2->Text = L"";
			this->txtResult->Text = L"";
		}

		void calculate(int opCase) {
			float d1, d2, result, err=0;
			addZero();
			try {
				if (txt1->Text->IndexOf(",") != txt1->Text->LastIndexOf(",") || txt2->Text->IndexOf(",") != txt2->Text->LastIndexOf(","))  {
					err = 1;
				}
				if (txt1->Text->IndexOf("-") != txt1->Text->LastIndexOf("-") || txt2->Text->IndexOf("-") != txt2->Text->LastIndexOf("-")) {
					err = 2;
				}
				
				if (err == 1) {
					lblErr->Text = L"Неверные данные:\nнесколько запятых";
					txtResult->Text = "";
				}
				else {
					lblErr->Text = "";
				}
				
				d1 = Convert::ToSingle(txt1->Text);
				d2 = Convert::ToSingle(txt2->Text);
			}

			catch (...) {
				if (txt1->Text->Length == 0 || txt2->Text->Length == 0) {
					lblErr->Text = L"Неверные данные : \nПустое поле";
					txtResult->Text = "";
					err = 3;
				}
				else if (txt1->Text->IndexOf("-") != txt1->Text->LastIndexOf("-") || txt2->Text->IndexOf("-") != txt2->Text->LastIndexOf("-")) {
					err = 2;
					lblErr->Text = L"Неверные данные\nНесколько минусов";
				}
				else if (txt1->Text->IndexOf(",") != txt1->Text->LastIndexOf(",") || txt2->Text->IndexOf(",") != txt2->Text->LastIndexOf(",")) {
					err = 1;
					lblErr->Text = L"Неверные данные:\nНесколько запятых";
				}
				else {
					lblErr->Text = L"Неверные данные";
					err = 4;

				}
			}
			

			switch (opCase) {
			case 0:
				this->lblOper->Text = L"Сложение";
				if (err == 0) {
					result = d1 + d2;
					this->txtResult->Text = Convert::ToString(result);
				}
				break;
			case 1:
				this->lblOper->Text = L"Вычитание";
				if (err == 0) {
					result = d1 - d2;
					this->txtResult->Text = Convert::ToString(result);
				}
				break;
			case 2:
				this->lblOper->Text = L"Умножение";
				if (err == 0) {
					result = d1 * d2;
					this->txtResult->Text = Convert::ToString(result);
				}
				break;
			case 3:
				this->lblOper->Text = L"Деление";
				if (d2 != 0) {
					if (err == 0) {
						result = d1 / d2;
						this->txtResult->Text = Convert::ToString(result);
					}
				}
				else {
					this->lblOper->Text = L"Нельзя делить на ноль";
					this->txtResult->Text = L"";

				}
				break;
			}

		}

	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		/* float d1, d2, result;
		 this->lblOper->Text = L"Сложение";
		 d1 = Convert::ToSingle(txt1->Text);
		 d2 = Convert::ToSingle(txt2->Text);
		 result = d1 + d2;
		 this->txtResult->Text = Convert::ToString(result);*/
		opCase = 0;
		calculate(opCase);
	}
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		resetFunc();
	}
	private: System::Void btnMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
		/*int d1, d2, result;
		this->lblOper->Text = L"Умножение";
		d1 = Convert::ToInt32(txt1->Text);
		d2 = Convert::ToInt32(txt2->Text);
		result = d1 * d2;
		this->txtResult->Text = Convert::ToString(result);*/
		opCase = 2;
		calculate(opCase);
	}
	private: System::Void btnDivide_Click(System::Object^ sender, System::EventArgs^ e) {
		/*int d1, d2;
		double result;
		this->lblOper->Text = L"Деление";
		d1 = Convert::ToInt32(txt1->Text);
		d2 = Convert::ToInt32(txt2->Text);
		if (d2 == 0) {
			this->txtResult->Text = "Ошибка! Деление на  невозможно";
		}
		else {
			result =(double) d1 / d2;
			this->txtResult->Text = Convert::ToString(result);
		}*/
		opCase = 3;
		calculate(opCase);

	}
	private: System::Void btnMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		opCase = 1;
		calculate(opCase);

	}
	private: System::Void txt1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void txt1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if (!Char::IsDigit(number) && number != 8 && number != 44 && number != 45)  // && number!=45 number!=44
	{
		e->Handled = true;
	}
	
}
private: System::Void txt2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbl1_Click(System::Object^ sender, System::EventArgs^ e) {
	lblOper->Text = L"Пасхалка!";
}

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

