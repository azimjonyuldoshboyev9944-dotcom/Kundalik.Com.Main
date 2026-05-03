#pragma once

namespace Kundalicom {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;

	protected:








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 51);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1916, 655);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"  Foygalanuvchilar";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 42);
			this->label5->TabIndex = 5;
			this->label5->Text = L"label5";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(591, 559);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(305, 49);
			this->textBox2->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 548);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(536, 42);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Foydalanuvchiga parol berish";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(591, 488);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(305, 49);
			this->textBox1->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 488);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(543, 42);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Foydalanuvchiga login berish ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 55);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1258, 414);
			this->dataGridView1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->linkLabel1);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Location = System::Drawing::Point(4, 51);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1916, 655);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"    Bosh sayifa";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(91, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 42);
			this->label2->TabIndex = 0;
			this->label2->Text = L"label2";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(0, 345);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1924, 710);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 51);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1916, 655);
			this->tabPage3->TabIndex = 3;
			this->tabPage3->Text = L"   Fanlar";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 51);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1916, 655);
			this->tabPage4->TabIndex = 4;
			this->tabPage4->Text = L"   guruhlar";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 51);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1916, 655);
			this->tabPage5->TabIndex = 5;
			this->tabPage5->Text = L"    Baholar";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(269, 91);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Admin";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(12, 103);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(290, 166);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(1304, 130);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(197, 42);
			this->linkLabel1->TabIndex = 1;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"linkLabel1";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
