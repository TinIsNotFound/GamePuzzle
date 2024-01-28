#pragma once

namespace GamePuzzle {

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label1;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Location = System::Drawing::Point(2, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(479, 118);
			this->panel1->TabIndex = 0;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Peru;
			this->linkLabel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::SystemColors::WindowText;
			this->linkLabel1->Location = System::Drawing::Point(8, 34);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(235, 46);
			this->linkLabel1->TabIndex = 11;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Puzzle Game";
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Olive;
			this->button11->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button11->Location = System::Drawing::Point(284, 18);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(101, 97);
			this->button11->TabIndex = 10;
			this->button11->Text = L"RESET";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Olive;
			this->button10->Font = (gcnew System::Drawing::Font(L"Gabriola", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(369, 0);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(101, 97);
			this->button10->TabIndex = 9;
			this->button10->Text = L"SOLUTION";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(3, 148);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(479, 401);
			this->panel2->TabIndex = 1;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Olive;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(347, 301);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(101, 97);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Olive;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(186, 290);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(101, 97);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Olive;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(29, 290);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(101, 97);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Olive;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(347, 167);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(101, 97);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Olive;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(186, 167);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 97);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Olive;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(29, 167);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 97);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Olive;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(347, 40);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 97);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Olive;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(186, 40);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 97);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Olive;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button1->Location = System::Drawing::Point(29, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 97);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(2, 552);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(480, 58);
			this->panel3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(440, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"code by : Bá Trung Tín ,Nguyễn Tấn Tài ,Nguyễn Trung Kiên";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(484, 611);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"Tro choi Puzzle";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Dichuyenotrang(button1, button2);
		Dichuyenotrang(button1, button4);
		GiaiCauDo();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Dichuyenotrang(button2, button1);
		Dichuyenotrang(button2, button3);
		Dichuyenotrang(button2, button5);
		GiaiCauDo();

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Dichuyenotrang(button3, button2);
		Dichuyenotrang(button3, button6);
		GiaiCauDo();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Dichuyenotrang(button4, button1);
		Dichuyenotrang(button4, button5);
		Dichuyenotrang(button4, button7);
		GiaiCauDo();

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Dichuyenotrang(button5, button2);
		Dichuyenotrang(button5, button4);
		Dichuyenotrang(button5, button6);
		Dichuyenotrang(button5, button8);
		GiaiCauDo();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		Dichuyenotrang(button6, button3);
		Dichuyenotrang(button6, button5);
		Dichuyenotrang(button6, button9);
		GiaiCauDo();

	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		Dichuyenotrang(button7, button4);
		Dichuyenotrang(button7, button8);
		GiaiCauDo();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		Dichuyenotrang(button8, button7);
		Dichuyenotrang(button8, button5);
		Dichuyenotrang(button8, button9);
		GiaiCauDo();

	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		Dichuyenotrang(button9, button8);
		Dichuyenotrang(button9, button6);
		GiaiCauDo();
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		XaoTronCacO();
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->Text = Convert::ToString(1);
		button2->Text = Convert::ToString(2);
		button3->Text = Convert::ToString(3);
		button4->Text = Convert::ToString(4);
		button5->Text = Convert::ToString(5);
		button6->Text = Convert::ToString(6);
		button7->Text = Convert::ToString(7);
		button8->Text = Convert::ToString(8);
		button9->Text = "";
		GiaiCauDo();

	}


		   //=====================================================================================



	public: System::Void Dichuyenotrang(Button^ O_co_so, Button^ O_trong) {
		if (O_trong->Text == "")
		{
			O_trong->Text = O_co_so->Text;
			O_co_so->Text = "";
		}
	}
		  //========================================================================================		

	public: System::Void GiaiCauDo() {
		if (button1->Text == "1" && button2->Text == "2" && button3->Text == "3" &&
			button4->Text == "4" && button5->Text == "5" && button6->Text == "6" &&
			button7->Text == "7" && button8->Text == "8")
		{
			MessageBox::Show("~~Chuc mung ,ban da chien thang tro choi ~~", "puzzle Game",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

	}


		  //=========================================================================================
	public: System::Void XaoTronCacO()
	{
		array<int>^ checkO = gcnew array<int>(9);
		int i, j, w;
		bool flag = false;
		i = 1;
		do
		{
			Random^ rnd = gcnew Random();
			w = Convert::ToInt32((rnd->Next(0, 8)) + 1);
			for (j = 1; j <= i; j++)
			{
				if (checkO[j] == w)
				{
					flag = true;
					break;

				}
			}
			if (flag == true) {
				flag = false;
			}
			else {
				checkO[i] = w;
				i = i + 1;
			}
		} while (i <= 8);
		button1->Text = Convert::ToString(checkO[1]);
		button2->Text = Convert::ToString(checkO[2]);
		button3->Text = Convert::ToString(checkO[3]);
		button4->Text = Convert::ToString(checkO[4]);
		button5->Text = Convert::ToString(checkO[5]);
		button6->Text = Convert::ToString(checkO[6]);
		button7->Text = Convert::ToString(checkO[7]);
		button8->Text = Convert::ToString(checkO[8]);
		button9->Text = "";


	}
		  //=========================================================================================
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	XaoTronCacO();

}
};
}