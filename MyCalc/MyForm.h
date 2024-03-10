#pragma once

bool plus, minus, multiple, divide = false;

namespace MyCalc {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->textBox1->Location = System::Drawing::Point(129, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(265, 50);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->textBox2->Location = System::Drawing::Point(129, 112);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(265, 50);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->label1->Location = System::Drawing::Point(296, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 44);
			this->label1->TabIndex = 2;
			this->label1->Text = L"(n/a)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->label3->Location = System::Drawing::Point(12, 255);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 44);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Result";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button1->Location = System::Drawing::Point(330, 168);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 62);
			this->button1->TabIndex = 5;
			this->button1->Text = L"=";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_MouseClick);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button3->Location = System::Drawing::Point(13, 303);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(62, 58);
			this->button3->TabIndex = 7;
			this->button3->Text = L"+";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button3_MouseClick);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button2->Location = System::Drawing::Point(90, 302);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(62, 58);
			this->button2->TabIndex = 8;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button2_MouseClick);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button4->Location = System::Drawing::Point(170, 303);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(62, 58);
			this->button4->TabIndex = 9;
			this->button4->Text = L"x";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button4_MouseClick);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button5->Location = System::Drawing::Point(249, 303);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(62, 58);
			this->button5->TabIndex = 10;
			this->button5->Text = L"/";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button5_MouseClick);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->button6->Location = System::Drawing::Point(330, 303);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(62, 58);
			this->button6->TabIndex = 11;
			this->button6->Text = L"E";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button6_MouseClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(406, 375);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e){
		float result;
		if (plus == true)
		{
			result = System::Convert::ToDouble(textBox1->Text) + System::Convert::ToDouble(textBox2->Text);
			plus = false;
		}
		else if (minus == true)
		{
			result = System::Convert::ToDouble(textBox1->Text) - System::Convert::ToDouble(textBox2->Text);
			minus = false;
		}
		else if (multiple == true)
		{
			result = System::Convert::ToDouble(textBox1->Text) * System::Convert::ToDouble(textBox2->Text);
			multiple = false;
		}
		else if (divide == true)
		{
			result = System::Convert::ToDouble(textBox1->Text) / System::Convert::ToDouble(textBox2->Text);
			divide = false;
		}
		label3->Text = System::Convert::ToString(result);
	}
private: System::Void button3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	plus = true;
	label1->Text = "+";
}
private: System::Void button2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	minus = true;
	label1->Text = "-";
}
private: System::Void button4_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	multiple = true;
	label1->Text = "x";
}
private: System::Void button5_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	divide = true;
	label1->Text = "/";
}
private: System::Void button6_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	label1->Text = "(n/a)";
	textBox1->Text = "";
	textBox2->Text = "";
	label3->Text = "Result";
}
};
}
