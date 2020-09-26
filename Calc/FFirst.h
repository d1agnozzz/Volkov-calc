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
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::Button^  btnReset;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Label^  lblOper;

	private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::Label^  lbl2;
	private: System::Windows::Forms::Label^  lblResult;
	private: System::Windows::Forms::TextBox^  txt1;
	private: System::Windows::Forms::TextBox^  txt2;
	private: System::Windows::Forms::TextBox^  txtResult;
	private: System::Windows::Forms::Button^  btnMultiply;
	private: System::Windows::Forms::Button^  btnDivide;
	private: System::Windows::Forms::Button^  btnMinus;









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
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(240, 185);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(100, 30);
			this->btnClose->TabIndex = 0;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Form1::btnClose_Click);
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(240, 10);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(100, 30);
			this->btnReset->TabIndex = 1;
			this->btnReset->Text = L"Сброс";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &Form1::btnReset_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(240, 150);
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
			this->lblOper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->lblOper->Location = System::Drawing::Point(21, 10);
			this->lblOper->Name = L"lblOper";
			this->lblOper->Size = System::Drawing::Size(0, 16);
			this->lblOper->TabIndex = 3;
			this->lblOper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(10, 60);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(77, 13);
			this->lbl1->TabIndex = 5;
			this->lbl1->Text = L"Первое число";
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(10, 90);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(78, 13);
			this->lbl2->TabIndex = 6;
			this->lbl2->Text = L"Второе Число";
			this->lbl2->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(10, 120);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(59, 13);
			this->lblResult->TabIndex = 7;
			this->lblResult->Text = L"Результат";
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(110, 60);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(90, 20);
			this->txt1->TabIndex = 8;
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(110, 90);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(90, 20);
			this->txt2->TabIndex = 9;
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(110, 120);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(90, 20);
			this->txtResult->TabIndex = 10;
			this->txtResult->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// btnMultiply
			// 
			this->btnMultiply->Location = System::Drawing::Point(240, 43);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(100, 30);
			this->btnMultiply->TabIndex = 11;
			this->btnMultiply->Text = L"Умножить";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &Form1::btnMultiply_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->Location = System::Drawing::Point(240, 78);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(100, 30);
			this->btnDivide->TabIndex = 12;
			this->btnDivide->Text = L"Разделить";
			this->btnDivide->UseVisualStyleBackColor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &Form1::btnDivide_Click);
			// 
			// btnMinus
			// 
			this->btnMinus->Location = System::Drawing::Point(240, 114);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(100, 30);
			this->btnMinus->TabIndex = 12;
			this->btnMinus->Text = L"Вычесть";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &Form1::btnMinus_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 231);
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
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

void resetFunc() {
	this->lblOper->Text = L"";
			 this->txt1->Text = L"";
			 this->txt2->Text = L"";
			 this->txtResult->Text = L"";
}

void calculate(int opCase) {
	float d1, d2, result;
	try {
		d1 = Convert::ToSingle(txt1->Text);
		d2 = Convert::ToSingle(txt2->Text);
	}
	catch (...) {
		lblOper->Text = L"Неверные данные";
		opCase = -1;
		
	}

	switch (opCase) {
	case 0:
		this->lblOper->Text = L"Сложение";
		result = d1 + d2;
			this->txtResult->Text = Convert::ToString(result);
		break;
	case 1:
		this->lblOper->Text = L"Вычитание";
		result = d1 - d2;
			this->txtResult->Text = Convert::ToString(result);
		break;
	case 2:
		this->lblOper->Text = L"Умножение";
		result = d1 * d2;
			this->txtResult->Text = Convert::ToString(result);
		break;
	case 3:
		this->lblOper->Text = L"Деление";
		if (d2 !=0) {
		result = d1 / d2;
		this->txtResult->Text = Convert::ToString(result);
		}
		else {
			this->lblOper->Text = L"Нельзя делить на ноль";
			this->txtResult->Text = L"Ошибка";

		}
		break;
	}

}

	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
				/* float d1, d2, result;
				 this->lblOper->Text = L"Сложение";
				 d1 = Convert::ToSingle(txt1->Text);
				 d2 = Convert::ToSingle(txt2->Text);
				 result = d1 + d2;
				 this->txtResult->Text = Convert::ToString(result);*/
				 opCase = 0;
				 calculate(opCase);
			 }
private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e) {
			 resetFunc();
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnMultiply_Click(System::Object^  sender, System::EventArgs^  e) {
			 /*int d1, d2, result;
			 this->lblOper->Text = L"Умножение";
			 d1 = Convert::ToInt32(txt1->Text);
			 d2 = Convert::ToInt32(txt2->Text);
			 result = d1 * d2;
			 this->txtResult->Text = Convert::ToString(result);*/
			 opCase = 2;
			 calculate(opCase);
		 }
private: System::Void btnDivide_Click(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void btnMinus_Click(System::Object^  sender, System::EventArgs^  e) {
			 opCase = 1;
			 calculate(opCase);

		 }
};
}

