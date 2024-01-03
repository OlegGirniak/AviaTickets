#pragma once

namespace AviaSales {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ TopPanel;
	protected:

	private: System::Windows::Forms::Panel^ SideMenuPanel;

	private: System::Windows::Forms::Timer^ MenuTimer;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ MenuPicture;

	private: System::Windows::Forms::Label^ MenuLabel;

	private: System::Windows::Forms::Timer^ MenuTimerOpen;
	private: System::Windows::Forms::Label^ MyTicketsLabel;

	private: System::Windows::Forms::Label^ BuyTicketsLabel;

	private: System::Windows::Forms::Label^ AccountLabel;
	private: System::Windows::Forms::PictureBox^ AccountPicture;
	private: System::Windows::Forms::PictureBox^ MyTicketsPicture;



	private: System::Windows::Forms::PictureBox^ BuyTicketsPicture;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ SettingsLabel;

	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ CashLabel;

	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Panel^ AccountPanel;
	private: System::Windows::Forms::Label^ UserMailLabel;
	private: System::Windows::Forms::PictureBox^ EditEmailPicture;



	private: System::Windows::Forms::Label^ UserPasswordLabel;
	private: System::Windows::Forms::PictureBox^ EditPasswordPicture;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ AccountIcon;
	private: System::Windows::Forms::Panel^ BuyTicketsPanel;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ SignUpButton;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox1;




















	private: System::ComponentModel::IContainer^ components;
	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->TopPanel = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SideMenuPanel = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SettingsLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->CashLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->BuyTicketsPicture = (gcnew System::Windows::Forms::PictureBox());
			this->MyTicketsPicture = (gcnew System::Windows::Forms::PictureBox());
			this->AccountPicture = (gcnew System::Windows::Forms::PictureBox());
			this->MyTicketsLabel = (gcnew System::Windows::Forms::Label());
			this->BuyTicketsLabel = (gcnew System::Windows::Forms::Label());
			this->AccountLabel = (gcnew System::Windows::Forms::Label());
			this->MenuPicture = (gcnew System::Windows::Forms::PictureBox());
			this->MenuLabel = (gcnew System::Windows::Forms::Label());
			this->MenuTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->MenuTimerOpen = (gcnew System::Windows::Forms::Timer(this->components));
			this->AccountPanel = (gcnew System::Windows::Forms::Panel());
			this->AccountIcon = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->EditPasswordPicture = (gcnew System::Windows::Forms::PictureBox());
			this->EditEmailPicture = (gcnew System::Windows::Forms::PictureBox());
			this->UserPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->UserMailLabel = (gcnew System::Windows::Forms::Label());
			this->BuyTicketsPanel = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SignUpButton = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->TopPanel->SuspendLayout();
			this->SideMenuPanel->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BuyTicketsPicture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyTicketsPicture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AccountPicture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MenuPicture))->BeginInit();
			this->AccountPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AccountIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditPasswordPicture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditEmailPicture))->BeginInit();
			this->BuyTicketsPanel->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// TopPanel
			// 
			this->TopPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->TopPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TopPanel->Controls->Add(this->label2);
			this->TopPanel->Controls->Add(this->label1);
			this->TopPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->TopPanel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(106)));
			this->TopPanel->Location = System::Drawing::Point(0, 0);
			this->TopPanel->Name = L"TopPanel";
			this->TopPanel->Size = System::Drawing::Size(944, 50);
			this->TopPanel->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(213, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"TICKETS  SALES\r\nSERVICE";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(11, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(196, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"AVIA | TICKETS";
			// 
			// SideMenuPanel
			// 
			this->SideMenuPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->SideMenuPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SideMenuPanel->Controls->Add(this->panel1);
			this->SideMenuPanel->Controls->Add(this->BuyTicketsPicture);
			this->SideMenuPanel->Controls->Add(this->MyTicketsPicture);
			this->SideMenuPanel->Controls->Add(this->AccountPicture);
			this->SideMenuPanel->Controls->Add(this->MyTicketsLabel);
			this->SideMenuPanel->Controls->Add(this->BuyTicketsLabel);
			this->SideMenuPanel->Controls->Add(this->AccountLabel);
			this->SideMenuPanel->Controls->Add(this->MenuPicture);
			this->SideMenuPanel->Controls->Add(this->MenuLabel);
			this->SideMenuPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->SideMenuPanel->Location = System::Drawing::Point(0, 50);
			this->SideMenuPanel->Name = L"SideMenuPanel";
			this->SideMenuPanel->Size = System::Drawing::Size(208, 441);
			this->SideMenuPanel->TabIndex = 1;
			this->SideMenuPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel2_Paint);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->panel1->Controls->Add(this->SettingsLabel);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->CashLabel);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->ForeColor = System::Drawing::Color::Gray;
			this->panel1->Location = System::Drawing::Point(0, 352);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(207, 87);
			this->panel1->TabIndex = 10;
			// 
			// SettingsLabel
			// 
			this->SettingsLabel->AutoSize = true;
			this->SettingsLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SettingsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SettingsLabel->ForeColor = System::Drawing::Color::White;
			this->SettingsLabel->Location = System::Drawing::Point(53, 55);
			this->SettingsLabel->Name = L"SettingsLabel";
			this->SettingsLabel->Size = System::Drawing::Size(66, 19);
			this->SettingsLabel->TabIndex = 13;
			this->SettingsLabel->Text = L"Settings";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(11, 44);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(30, 30);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 12;
			this->pictureBox6->TabStop = false;
			// 
			// CashLabel
			// 
			this->CashLabel->AutoSize = true;
			this->CashLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CashLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CashLabel->ForeColor = System::Drawing::Color::White;
			this->CashLabel->Location = System::Drawing::Point(53, 19);
			this->CashLabel->Name = L"CashLabel";
			this->CashLabel->Size = System::Drawing::Size(76, 19);
			this->CashLabel->TabIndex = 11;
			this->CashLabel->Text = L"User cash";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(11, 8);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(30, 30);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 11;
			this->pictureBox5->TabStop = false;
			// 
			// BuyTicketsPicture
			// 
			this->BuyTicketsPicture->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BuyTicketsPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BuyTicketsPicture.Image")));
			this->BuyTicketsPicture->Location = System::Drawing::Point(11, 146);
			this->BuyTicketsPicture->Name = L"BuyTicketsPicture";
			this->BuyTicketsPicture->Size = System::Drawing::Size(30, 30);
			this->BuyTicketsPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->BuyTicketsPicture->TabIndex = 9;
			this->BuyTicketsPicture->TabStop = false;
			// 
			// MyTicketsPicture
			// 
			this->MyTicketsPicture->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MyTicketsPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MyTicketsPicture.Image")));
			this->MyTicketsPicture->Location = System::Drawing::Point(11, 182);
			this->MyTicketsPicture->Name = L"MyTicketsPicture";
			this->MyTicketsPicture->Size = System::Drawing::Size(30, 30);
			this->MyTicketsPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->MyTicketsPicture->TabIndex = 8;
			this->MyTicketsPicture->TabStop = false;
			// 
			// AccountPicture
			// 
			this->AccountPicture->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AccountPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AccountPicture.Image")));
			this->AccountPicture->Location = System::Drawing::Point(11, 111);
			this->AccountPicture->Name = L"AccountPicture";
			this->AccountPicture->Size = System::Drawing::Size(30, 30);
			this->AccountPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->AccountPicture->TabIndex = 7;
			this->AccountPicture->TabStop = false;
			// 
			// MyTicketsLabel
			// 
			this->MyTicketsLabel->AutoSize = true;
			this->MyTicketsLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MyTicketsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MyTicketsLabel->Location = System::Drawing::Point(54, 193);
			this->MyTicketsLabel->Name = L"MyTicketsLabel";
			this->MyTicketsLabel->Size = System::Drawing::Size(81, 19);
			this->MyTicketsLabel->TabIndex = 6;
			this->MyTicketsLabel->Text = L"My tickets";
			// 
			// BuyTicketsLabel
			// 
			this->BuyTicketsLabel->AutoSize = true;
			this->BuyTicketsLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BuyTicketsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BuyTicketsLabel->ForeColor = System::Drawing::Color::White;
			this->BuyTicketsLabel->Location = System::Drawing::Point(53, 157);
			this->BuyTicketsLabel->Name = L"BuyTicketsLabel";
			this->BuyTicketsLabel->Size = System::Drawing::Size(93, 19);
			this->BuyTicketsLabel->TabIndex = 5;
			this->BuyTicketsLabel->Text = L"Buy tisckets";
			this->BuyTicketsLabel->Click += gcnew System::EventHandler(this, &MainForm::BuyTicketsLabel_Click);
			// 
			// AccountLabel
			// 
			this->AccountLabel->AutoSize = true;
			this->AccountLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AccountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AccountLabel->Location = System::Drawing::Point(54, 119);
			this->AccountLabel->Name = L"AccountLabel";
			this->AccountLabel->Size = System::Drawing::Size(67, 19);
			this->AccountLabel->TabIndex = 4;
			this->AccountLabel->Text = L"Account";
			this->AccountLabel->Click += gcnew System::EventHandler(this, &MainForm::AccountLabel_Click);
			// 
			// MenuPicture
			// 
			this->MenuPicture->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MenuPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MenuPicture.Image")));
			this->MenuPicture->Location = System::Drawing::Point(11, 17);
			this->MenuPicture->Name = L"MenuPicture";
			this->MenuPicture->Size = System::Drawing::Size(30, 30);
			this->MenuPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->MenuPicture->TabIndex = 3;
			this->MenuPicture->TabStop = false;
			this->MenuPicture->Click += gcnew System::EventHandler(this, &MainForm::pictureBox1_Click);
			// 
			// MenuLabel
			// 
			this->MenuLabel->AutoSize = true;
			this->MenuLabel->BackColor = System::Drawing::Color::Transparent;
			this->MenuLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MenuLabel->ForeColor = System::Drawing::Color::White;
			this->MenuLabel->Location = System::Drawing::Point(54, 17);
			this->MenuLabel->Name = L"MenuLabel";
			this->MenuLabel->Size = System::Drawing::Size(75, 27);
			this->MenuLabel->TabIndex = 2;
			this->MenuLabel->Text = L"MENU";
			// 
			// MenuTimer
			// 
			this->MenuTimer->Interval = 1;
			this->MenuTimer->Tick += gcnew System::EventHandler(this, &MainForm::MenuTimer_Tick);
			// 
			// MenuTimerOpen
			// 
			this->MenuTimerOpen->Interval = 1;
			this->MenuTimerOpen->Tick += gcnew System::EventHandler(this, &MainForm::MenuTimerOpen_Tick);
			// 
			// AccountPanel
			// 
			this->AccountPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->AccountPanel->Controls->Add(this->AccountIcon);
			this->AccountPanel->Controls->Add(this->panel3);
			this->AccountPanel->Controls->Add(this->panel2);
			this->AccountPanel->Controls->Add(this->EditPasswordPicture);
			this->AccountPanel->Controls->Add(this->EditEmailPicture);
			this->AccountPanel->Controls->Add(this->UserPasswordLabel);
			this->AccountPanel->Controls->Add(this->UserMailLabel);
			this->AccountPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AccountPanel->Location = System::Drawing::Point(208, 50);
			this->AccountPanel->Name = L"AccountPanel";
			this->AccountPanel->Size = System::Drawing::Size(736, 441);
			this->AccountPanel->TabIndex = 2;
			// 
			// AccountIcon
			// 
			this->AccountIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AccountIcon.Image")));
			this->AccountIcon->Location = System::Drawing::Point(311, 49);
			this->AccountIcon->Name = L"AccountIcon";
			this->AccountIcon->Size = System::Drawing::Size(150, 150);
			this->AccountIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->AccountIcon->TabIndex = 17;
			this->AccountIcon->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(282, 297);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(220, 2);
			this->panel3->TabIndex = 16;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(282, 245);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(220, 2);
			this->panel2->TabIndex = 15;
			// 
			// EditPasswordPicture
			// 
			this->EditPasswordPicture->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EditPasswordPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EditPasswordPicture.Image")));
			this->EditPasswordPicture->Location = System::Drawing::Point(476, 266);
			this->EditPasswordPicture->Name = L"EditPasswordPicture";
			this->EditPasswordPicture->Size = System::Drawing::Size(25, 25);
			this->EditPasswordPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->EditPasswordPicture->TabIndex = 14;
			this->EditPasswordPicture->TabStop = false;
			// 
			// EditEmailPicture
			// 
			this->EditEmailPicture->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EditEmailPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EditEmailPicture.Image")));
			this->EditEmailPicture->Location = System::Drawing::Point(476, 214);
			this->EditEmailPicture->Name = L"EditEmailPicture";
			this->EditEmailPicture->Size = System::Drawing::Size(25, 25);
			this->EditEmailPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->EditEmailPicture->TabIndex = 13;
			this->EditEmailPicture->TabStop = false;
			// 
			// UserPasswordLabel
			// 
			this->UserPasswordLabel->AutoSize = true;
			this->UserPasswordLabel->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->UserPasswordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserPasswordLabel->Location = System::Drawing::Point(279, 265);
			this->UserPasswordLabel->Name = L"UserPasswordLabel";
			this->UserPasswordLabel->Size = System::Drawing::Size(203, 34);
			this->UserPasswordLabel->TabIndex = 12;
			this->UserPasswordLabel->Text = L"User password";
			// 
			// UserMailLabel
			// 
			this->UserMailLabel->AutoSize = true;
			this->UserMailLabel->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->UserMailLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserMailLabel->Location = System::Drawing::Point(279, 214);
			this->UserMailLabel->Name = L"UserMailLabel";
			this->UserMailLabel->Size = System::Drawing::Size(151, 34);
			this->UserMailLabel->TabIndex = 11;
			this->UserMailLabel->Text = L"User email";
			// 
			// BuyTicketsPanel
			// 
			this->BuyTicketsPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->BuyTicketsPanel->Controls->Add(this->SignUpButton);
			this->BuyTicketsPanel->Controls->Add(this->panel6);
			this->BuyTicketsPanel->Controls->Add(this->panel5);
			this->BuyTicketsPanel->Controls->Add(this->panel4);
			this->BuyTicketsPanel->Location = System::Drawing::Point(208, 50);
			this->BuyTicketsPanel->Name = L"BuyTicketsPanel";
			this->BuyTicketsPanel->Size = System::Drawing::Size(736, 441);
			this->BuyTicketsPanel->TabIndex = 18;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->comboBox3);
			this->panel4->Controls->Add(this->comboBox1);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Location = System::Drawing::Point(9, 18);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(715, 100);
			this->panel4->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 23);
			this->label3->TabIndex = 0;
			this->label3->Text = L"FROM";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(312, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 23);
			this->label4->TabIndex = 1;
			this->label4->Text = L"TO";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->comboBox4);
			this->panel5->Controls->Add(this->comboBox2);
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Location = System::Drawing::Point(9, 124);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(715, 100);
			this->panel5->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(4, 58);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 23);
			this->label5->TabIndex = 0;
			this->label5->Text = L"FROM";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(312, 52);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 23);
			this->label6->TabIndex = 1;
			this->label6->Text = L"TO";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 5);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 31);
			this->label7->TabIndex = 6;
			this->label7->Text = L"PLACE";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(2, 5);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(72, 31);
			this->label8->TabIndex = 7;
			this->label8->Text = L"TIME";
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label12);
			this->panel6->Controls->Add(this->label10);
			this->panel6->Controls->Add(this->label11);
			this->panel6->Controls->Add(this->textBox1);
			this->panel6->Controls->Add(this->comboBox5);
			this->panel6->Controls->Add(this->label9);
			this->panel6->Location = System::Drawing::Point(9, 230);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(715, 100);
			this->panel6->TabIndex = 8;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(2, 5);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(84, 31);
			this->label9->TabIndex = 7;
			this->label9->Text = L"CLASS";
			// 
			// SignUpButton
			// 
			this->SignUpButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignUpButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SignUpButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignUpButton->ForeColor = System::Drawing::Color::White;
			this->SignUpButton->Location = System::Drawing::Point(285, 361);
			this->SignUpButton->Name = L"SignUpButton";
			this->SignUpButton->Size = System::Drawing::Size(150, 46);
			this->SignUpButton->TabIndex = 16;
			this->SignUpButton->Text = L"BUY";
			this->SignUpButton->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::Plum;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(73, 62);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(201, 24);
			this->comboBox1->TabIndex = 7;
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::Plum;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::Color::White;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(73, 54);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(201, 24);
			this->comboBox2->TabIndex = 8;
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::Color::Plum;
			this->comboBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboBox3->ForeColor = System::Drawing::Color::White;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(362, 62);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(201, 24);
			this->comboBox3->TabIndex = 8;
			// 
			// comboBox4
			// 
			this->comboBox4->BackColor = System::Drawing::Color::Plum;
			this->comboBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboBox4->ForeColor = System::Drawing::Color::White;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(362, 54);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(201, 24);
			this->comboBox4->TabIndex = 9;
			// 
			// comboBox5
			// 
			this->comboBox5->BackColor = System::Drawing::Color::Plum;
			this->comboBox5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboBox5->ForeColor = System::Drawing::Color::White;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(7, 37);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(162, 24);
			this->comboBox5->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Plum;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(220, 35);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(91, 26);
			this->textBox1->TabIndex = 12;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(214, 5);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(97, 31);
			this->label11->TabIndex = 13;
			this->label11->Text = L"COUNT";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(364, 30);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(102, 31);
			this->label10->TabIndex = 14;
			this->label10->Text = L"PRICE : ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(459, 30);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 31);
			this->label12->TabIndex = 15;
			this->label12->Text = L"0";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(944, 491);
			this->Controls->Add(this->BuyTicketsPanel);
			this->Controls->Add(this->AccountPanel);
			this->Controls->Add(this->SideMenuPanel);
			this->Controls->Add(this->TopPanel);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->TopPanel->ResumeLayout(false);
			this->TopPanel->PerformLayout();
			this->SideMenuPanel->ResumeLayout(false);
			this->SideMenuPanel->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BuyTicketsPicture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyTicketsPicture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AccountPicture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MenuPicture))->EndInit();
			this->AccountPanel->ResumeLayout(false);
			this->AccountPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AccountIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditPasswordPicture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditEmailPicture))->EndInit();
			this->BuyTicketsPanel->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void MenuTimer_Tick(System::Object^ sender, System::EventArgs^ e) 
{
	if (SideMenuPanel->Width > 55)
	{
		SideMenuPanel->Width -= 5;
	}
	else
	{
		MenuTimer->Stop();
	}
}

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (SideMenuPanel->Width > 55)
	{
		MenuTimer->Start();
	}
	else
	{
		MenuTimerOpen->Start();
	}
}

	private: System::Void MenuTimerOpen_Tick(System::Object^ sender, System::EventArgs^ e) 
{
	if (SideMenuPanel->Width < 190)
	{
		SideMenuPanel->Width += 5;
	}
	else
	{
		MenuTimerOpen->Stop();
	}
}
private: System::Void AccountLabel_Click(System::Object^ sender, System::EventArgs^ e) 
{
	AccountPanel->Visible = true;
	BuyTicketsPanel->Visible = false;
}
private: System::Void BuyTicketsLabel_Click(System::Object^ sender, System::EventArgs^ e)
{
	AccountPanel->Visible = false;
	BuyTicketsPanel->Visible = true;
}
};
}
