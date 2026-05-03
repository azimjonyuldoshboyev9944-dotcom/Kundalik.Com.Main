#pragma once

namespace Kundalicom {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::MaskedTextBox^ TextBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MaskedTextBox^ TextBox2;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::MaskedTextBox^ TextBox4;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
    private: System::Windows::Forms::ComboBox^ comboBox3;
    private: System::Windows::Forms::ComboBox^ comboBox4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::ComboBox^ comboBox5;
    private: System::Windows::Forms::ComboBox^ comboBox6;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::MaskedTextBox^ maskedTextBox4;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::MaskedTextBox^ maskedTextBox5;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::MaskedTextBox^ maskedTextBox6;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::TabControl^ tabControl1;
    private: System::Windows::Forms::TabPage^ tabPage1;
    private: System::Windows::Forms::TabPage^ tabPage2;
    private: System::Windows::Forms::TabPage^ tabPage3;


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
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->TextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->TextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->TextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->maskedTextBox5 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->maskedTextBox6 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->tabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->tabPage2->SuspendLayout();
            this->tabPage3->SuspendLayout();
            this->SuspendLayout();
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label7->ForeColor = System::Drawing::Color::Blue;
            this->label7->Location = System::Drawing::Point(173, 416);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(248, 32);
            this->label7->TabIndex = 37;
            this->label7->Text = L"Maktabnitanlang ";
            // 
            // TextBox1
            // 
            this->TextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->TextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->TextBox1->Location = System::Drawing::Point(179, 139);
            this->TextBox1->Name = L"TextBox1";
            this->TextBox1->Size = System::Drawing::Size(453, 53);
            this->TextBox1->TabIndex = 36;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label6->ForeColor = System::Drawing::Color::Blue;
            this->label6->Location = System::Drawing::Point(173, 104);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(192, 32);
            this->label6->TabIndex = 35;
            this->label6->Text = L"Familya isim ";
            // 
            // TextBox2
            // 
            this->TextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->TextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->TextBox2->Location = System::Drawing::Point(179, 242);
            this->TextBox2->Name = L"TextBox2";
            this->TextBox2->Size = System::Drawing::Size(453, 53);
            this->TextBox2->TabIndex = 34;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->ForeColor = System::Drawing::Color::Blue;
            this->label5->Location = System::Drawing::Point(173, 302);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(417, 32);
            this->label5->TabIndex = 33;
            this->label5->Text = L"Yashash joyi (Viloyat/Shahar)";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->ForeColor = System::Drawing::Color::Blue;
            this->label4->Location = System::Drawing::Point(173, 207);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(218, 32);
            this->label4->TabIndex = 31;
            this->label4->Text = L"Telefon nomer ";
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
                static_cast<System::Int32>(static_cast<System::Byte>(74)));
            this->button2->Font = (gcnew System::Drawing::Font(L"MV Boli", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::Color::White;
            this->button2->Location = System::Drawing::Point(179, 630);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(453, 74);
            this->button2->TabIndex = 30;
            this->button2->Text = L"Saqlash";
            this->button2->UseVisualStyleBackColor = false;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
                static_cast<System::Int32>(static_cast<System::Byte>(74)));
            this->button1->Font = (gcnew System::Drawing::Font(L"MV Boli", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->button1->Location = System::Drawing::Point(12, 883);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(365, 85);
            this->button1->TabIndex = 29;
            this->button1->Text = L"< orqaga";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
            // 
            // TextBox4
            // 
            this->TextBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->TextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->TextBox4->Location = System::Drawing::Point(179, 547);
            this->TextBox4->Name = L"TextBox4";
            this->TextBox4->Size = System::Drawing::Size(453, 53);
            this->TextBox4->TabIndex = 27;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->ForeColor = System::Drawing::Color::Blue;
            this->label2->Location = System::Drawing::Point(173, 512);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(201, 32);
            this->label2->TabIndex = 25;
            this->label2->Text = L"Sinfni kiriting ";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
                static_cast<System::Int32>(static_cast<System::Byte>(74)));
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->Location = System::Drawing::Point(148, 46);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(527, 38);
            this->label1->TabIndex = 39;
            this->label1->Text = L"O\'quvchi uchun ro\'yxatdan o\'tish ";
            // 
            // comboBox1
            // 
            this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Location = System::Drawing::Point(179, 343);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(453, 54);
            this->comboBox1->TabIndex = 40;
            // 
            // comboBox2
            // 
            this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Location = System::Drawing::Point(179, 451);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(453, 54);
            this->comboBox2->TabIndex = 41;
            // 
            // comboBox3
            // 
            this->comboBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->comboBox3->FormattingEnabled = true;
            this->comboBox3->Location = System::Drawing::Point(178, 449);
            this->comboBox3->Name = L"comboBox3";
            this->comboBox3->Size = System::Drawing::Size(453, 54);
            this->comboBox3->TabIndex = 53;
            // 
            // comboBox4
            // 
            this->comboBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->comboBox4->FormattingEnabled = true;
            this->comboBox4->Location = System::Drawing::Point(178, 341);
            this->comboBox4->Name = L"comboBox4";
            this->comboBox4->Size = System::Drawing::Size(453, 54);
            this->comboBox4->TabIndex = 52;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
                static_cast<System::Int32>(static_cast<System::Byte>(74)));
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->ForeColor = System::Drawing::Color::White;
            this->label3->Location = System::Drawing::Point(147, 44);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(527, 38);
            this->label3->TabIndex = 51;
            this->label3->Text = L" Ota-ona uchun ro\'yxatdan o\'tish ";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label8->ForeColor = System::Drawing::Color::Blue;
            this->label8->Location = System::Drawing::Point(172, 414);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(248, 32);
            this->label8->TabIndex = 50;
            this->label8->Text = L"Maktabnitanlang ";
            // 
            // maskedTextBox1
            // 
            this->maskedTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->maskedTextBox1->Location = System::Drawing::Point(178, 137);
            this->maskedTextBox1->Name = L"maskedTextBox1";
            this->maskedTextBox1->Size = System::Drawing::Size(453, 53);
            this->maskedTextBox1->TabIndex = 49;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label9->ForeColor = System::Drawing::Color::Blue;
            this->label9->Location = System::Drawing::Point(172, 102);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(192, 32);
            this->label9->TabIndex = 48;
            this->label9->Text = L"Familya isim ";
            // 
            // maskedTextBox2
            // 
            this->maskedTextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->maskedTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->maskedTextBox2->Location = System::Drawing::Point(178, 240);
            this->maskedTextBox2->Name = L"maskedTextBox2";
            this->maskedTextBox2->Size = System::Drawing::Size(453, 53);
            this->maskedTextBox2->TabIndex = 47;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->ForeColor = System::Drawing::Color::Blue;
            this->label10->Location = System::Drawing::Point(172, 300);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(417, 32);
            this->label10->TabIndex = 46;
            this->label10->Text = L"Yashash joyi (Viloyat/Shahar)";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label11->ForeColor = System::Drawing::Color::Blue;
            this->label11->Location = System::Drawing::Point(172, 205);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(218, 32);
            this->label11->TabIndex = 45;
            this->label11->Text = L"Telefon nomer ";
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
                static_cast<System::Int32>(static_cast<System::Byte>(74)));
            this->button3->Font = (gcnew System::Drawing::Font(L"MV Boli", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::Color::White;
            this->button3->Location = System::Drawing::Point(178, 628);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(453, 74);
            this->button3->TabIndex = 44;
            this->button3->Text = L"Saqlash";
            this->button3->UseVisualStyleBackColor = false;
            // 
            // maskedTextBox3
            // 
            this->maskedTextBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->maskedTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->maskedTextBox3->Location = System::Drawing::Point(178, 545);
            this->maskedTextBox3->Name = L"maskedTextBox3";
            this->maskedTextBox3->Size = System::Drawing::Size(453, 53);
            this->maskedTextBox3->TabIndex = 43;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label12->ForeColor = System::Drawing::Color::Blue;
            this->label12->Location = System::Drawing::Point(172, 510);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(208, 32);
            this->label12->TabIndex = 42;
            this->label12->Text = L"o\'quvchi nomi ";
            // 
            // comboBox5
            // 
            this->comboBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->comboBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->comboBox5->FormattingEnabled = true;
            this->comboBox5->Location = System::Drawing::Point(175, 448);
            this->comboBox5->Name = L"comboBox5";
            this->comboBox5->Size = System::Drawing::Size(453, 54);
            this->comboBox5->TabIndex = 65;
            // 
            // comboBox6
            // 
            this->comboBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->comboBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->comboBox6->FormattingEnabled = true;
            this->comboBox6->Location = System::Drawing::Point(175, 340);
            this->comboBox6->Name = L"comboBox6";
            this->comboBox6->Size = System::Drawing::Size(453, 54);
            this->comboBox6->TabIndex = 64;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
                static_cast<System::Int32>(static_cast<System::Byte>(74)));
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label13->ForeColor = System::Drawing::Color::White;
            this->label13->Location = System::Drawing::Point(144, 43);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(537, 38);
            this->label13->TabIndex = 63;
            this->label13->Text = L"O\'qtuvchi uchun ro\'yxatdan o\'tish ";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label14->ForeColor = System::Drawing::Color::Blue;
            this->label14->Location = System::Drawing::Point(169, 413);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(248, 32);
            this->label14->TabIndex = 62;
            this->label14->Text = L"Maktabnitanlang ";
            // 
            // maskedTextBox4
            // 
            this->maskedTextBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->maskedTextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->maskedTextBox4->Location = System::Drawing::Point(175, 136);
            this->maskedTextBox4->Name = L"maskedTextBox4";
            this->maskedTextBox4->Size = System::Drawing::Size(453, 53);
            this->maskedTextBox4->TabIndex = 61;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label15->ForeColor = System::Drawing::Color::Blue;
            this->label15->Location = System::Drawing::Point(169, 101);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(192, 32);
            this->label15->TabIndex = 60;
            this->label15->Text = L"Familya isim ";
            // 
            // maskedTextBox5
            // 
            this->maskedTextBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->maskedTextBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->maskedTextBox5->Location = System::Drawing::Point(175, 239);
            this->maskedTextBox5->Name = L"maskedTextBox5";
            this->maskedTextBox5->Size = System::Drawing::Size(453, 53);
            this->maskedTextBox5->TabIndex = 59;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label16->ForeColor = System::Drawing::Color::Blue;
            this->label16->Location = System::Drawing::Point(169, 299);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(417, 32);
            this->label16->TabIndex = 58;
            this->label16->Text = L"Yashash joyi (Viloyat/Shahar)";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label17->ForeColor = System::Drawing::Color::Blue;
            this->label17->Location = System::Drawing::Point(169, 204);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(218, 32);
            this->label17->TabIndex = 57;
            this->label17->Text = L"Telefon nomer ";
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
                static_cast<System::Int32>(static_cast<System::Byte>(74)));
            this->button4->Font = (gcnew System::Drawing::Font(L"MV Boli", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::Color::White;
            this->button4->Location = System::Drawing::Point(175, 627);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(453, 74);
            this->button4->TabIndex = 56;
            this->button4->Text = L"Saqlash";
            this->button4->UseVisualStyleBackColor = false;
            // 
            // maskedTextBox6
            // 
            this->maskedTextBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->maskedTextBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->maskedTextBox6->Location = System::Drawing::Point(175, 544);
            this->maskedTextBox6->Name = L"maskedTextBox6";
            this->maskedTextBox6->Size = System::Drawing::Size(453, 53);
            this->maskedTextBox6->TabIndex = 55;
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label18->ForeColor = System::Drawing::Color::Blue;
            this->label18->Location = System::Drawing::Point(169, 509);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(199, 32);
            this->label18->TabIndex = 54;
            this->label18->Text = L"Fanni kiriting ";
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Controls->Add(this->tabPage3);
            this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->tabControl1->Location = System::Drawing::Point(459, 56);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(797, 796);
            this->tabControl1->TabIndex = 66;
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->button2);
            this->tabPage1->Controls->Add(this->label2);
            this->tabPage1->Controls->Add(this->TextBox4);
            this->tabPage1->Controls->Add(this->label4);
            this->tabPage1->Controls->Add(this->label5);
            this->tabPage1->Controls->Add(this->TextBox2);
            this->tabPage1->Controls->Add(this->label6);
            this->tabPage1->Controls->Add(this->TextBox1);
            this->tabPage1->Controls->Add(this->label7);
            this->tabPage1->Controls->Add(this->label1);
            this->tabPage1->Controls->Add(this->comboBox1);
            this->tabPage1->Controls->Add(this->comboBox2);
            this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->tabPage1->Location = System::Drawing::Point(4, 47);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(789, 745);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"          O\'quvchi     ";
            this->tabPage1->UseVisualStyleBackColor = true;
            this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm1::tabPage1_Click);
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->button3);
            this->tabPage2->Controls->Add(this->label12);
            this->tabPage2->Controls->Add(this->maskedTextBox3);
            this->tabPage2->Controls->Add(this->label11);
            this->tabPage2->Controls->Add(this->label10);
            this->tabPage2->Controls->Add(this->maskedTextBox2);
            this->tabPage2->Controls->Add(this->label9);
            this->tabPage2->Controls->Add(this->maskedTextBox1);
            this->tabPage2->Controls->Add(this->label8);
            this->tabPage2->Controls->Add(this->label3);
            this->tabPage2->Controls->Add(this->comboBox4);
            this->tabPage2->Controls->Add(this->comboBox3);
            this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->tabPage2->Location = System::Drawing::Point(4, 47);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(789, 745);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"        Ota-Ona     ";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // tabPage3
            // 
            this->tabPage3->Controls->Add(this->button4);
            this->tabPage3->Controls->Add(this->comboBox5);
            this->tabPage3->Controls->Add(this->label18);
            this->tabPage3->Controls->Add(this->comboBox6);
            this->tabPage3->Controls->Add(this->maskedTextBox6);
            this->tabPage3->Controls->Add(this->label13);
            this->tabPage3->Controls->Add(this->label17);
            this->tabPage3->Controls->Add(this->label14);
            this->tabPage3->Controls->Add(this->label16);
            this->tabPage3->Controls->Add(this->maskedTextBox4);
            this->tabPage3->Controls->Add(this->maskedTextBox5);
            this->tabPage3->Controls->Add(this->label15);
            this->tabPage3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->tabPage3->Location = System::Drawing::Point(4, 47);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(3);
            this->tabPage3->Size = System::Drawing::Size(789, 745);
            this->tabPage3->TabIndex = 2;
            this->tabPage3->Text = L"       O\'qtuvchi      ";
            this->tabPage3->UseVisualStyleBackColor = true;
            // 
            // MyForm1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::LightSteelBlue;
            this->ClientSize = System::Drawing::Size(1924, 1055);
            this->Controls->Add(this->tabControl1);
            this->Controls->Add(this->button1);
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"MyForm1";
            this->Text = L"MyForm1";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
            this->tabControl1->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->tabPage1->PerformLayout();
            this->tabPage2->ResumeLayout(false);
            this->tabPage2->PerformLayout();
            this->tabPage3->ResumeLayout(false);
            this->tabPage3->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
