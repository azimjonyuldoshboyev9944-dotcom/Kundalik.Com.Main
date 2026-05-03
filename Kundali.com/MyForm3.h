#pragma once

namespace Kundalicom {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(106, 210);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(484, 634);
			this->panel1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(24, 460);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 32);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(19, 19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(440, 425);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Location = System::Drawing::Point(1304, 210);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(468, 634);
			this->panel2->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Location = System::Drawing::Point(-2, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(472, 634);
			this->panel3->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(24, 460);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Location = System::Drawing::Point(16, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(440, 425);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(24, 460);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Location = System::Drawing::Point(16, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(440, 425);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Location = System::Drawing::Point(726, 210);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(472, 634);
			this->panel4->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(24, 460);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 32);
			this->label4->TabIndex = 2;
			this->label4->Text = L"label4";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->Location = System::Drawing::Point(16, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(440, 425);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->button1->Font = (gcnew System::Drawing::Font(L"MV Boli", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(12, 873);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(365, 85);
			this->button1->TabIndex = 30;
			this->button1->Text = L"< orqaga";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Blue;
			this->label5->Location = System::Drawing::Point(891, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 38);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Login";
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
