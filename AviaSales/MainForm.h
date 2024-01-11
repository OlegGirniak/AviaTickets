#pragma once
#include "Customer.h"
#include "VerifyForm.h"
#include "SqlService.h"
#include "EmailService.h"

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
	public: Customer^ customer;

	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		MainForm(Customer^ customer)
		{
			InitializeComponent();
			
			CustomerCashLabel->Text = customer->GetBalance().ToString() + "$";
			UserMailLabel->Text = customer->Email;
			UserPasswordLabel->Text = customer->Password;

			if (customer->Verified())
			{
				VerifyStatusLabel->Text = "    Verified";
				VerifyStatusLabel->ForeColor = Color::LightGreen;
				VerifyAccountButton->Hide();
			}
			else
			{
				VerifyStatusLabel->Text = "Not Verified";
				VerifyStatusLabel->ForeColor = Color::OrangeRed;
			}

			mainCustomer = customer;

			sqlService = gcnew SqlService();

			emailService = gcnew EmailService();
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
	private: System::Windows::Forms::Label^ FromLabel;
	private: System::Windows::Forms::Label^ ToLabel;


	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ FromTimeLabel;
	private: System::Windows::Forms::Label^ ToTimaLabel;


	private: System::Windows::Forms::Label^ TimeLabel;

	private: System::Windows::Forms::Label^ PlaceLabel;


	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ ClassLabel;
	private: System::Windows::Forms::Button^ BuyTicketLabel;


	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ ShowPriceLabel;

	private: System::Windows::Forms::Label^ PriceLabel;
	private: System::Windows::Forms::Label^ CountLabel;



	private: System::Windows::Forms::ComboBox^ comboBox6;
private: System::Windows::Forms::Panel^ MyTicketsPanel;
private: System::Windows::Forms::Panel^ MainPanel;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ MyTicketPanelTime;
private: System::Windows::Forms::Label^ MyTicketPanelChooseTicket;




private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ MyTicketPanelPrice;


private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ MyTicketPanelCount;


private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ MyTicketPanelPlace;


private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::ComboBox^ MyTicketPanelComboBox;
private: System::Windows::Forms::Panel^ UserCashPanel;
private: System::Windows::Forms::Button^ RefillButton;
private: System::Windows::Forms::Label^ CustomerCashLabel;

private: System::Windows::Forms::Panel^ SettingsPanel;
private: System::Windows::Forms::Button^ deleteAccountButton;
private: System::Windows::Forms::Button^ LogOutButton;
private: System::Windows::Forms::Label^ VerifyStatusLabel;
private: System::Windows::Forms::Button^ VerifyAccountButton;




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
			this->MyTicketsPanel = (gcnew System::Windows::Forms::Panel());
			this->MyTicketPanelComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->MyTicketPanelPrice = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->MyTicketPanelCount = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->MyTicketPanelPlace = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->MyTicketPanelTime = (gcnew System::Windows::Forms::Label());
			this->MyTicketPanelChooseTicket = (gcnew System::Windows::Forms::Label());
			this->SettingsPanel = (gcnew System::Windows::Forms::Panel());
			this->deleteAccountButton = (gcnew System::Windows::Forms::Button());
			this->LogOutButton = (gcnew System::Windows::Forms::Button());
			this->VerifyStatusLabel = (gcnew System::Windows::Forms::Label());
			this->VerifyAccountButton = (gcnew System::Windows::Forms::Button());
			this->AccountIcon = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->EditPasswordPicture = (gcnew System::Windows::Forms::PictureBox());
			this->EditEmailPicture = (gcnew System::Windows::Forms::PictureBox());
			this->UserPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->UserMailLabel = (gcnew System::Windows::Forms::Label());
			this->BuyTicketsPanel = (gcnew System::Windows::Forms::Panel());
			this->BuyTicketLabel = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->CountLabel = (gcnew System::Windows::Forms::Label());
			this->ShowPriceLabel = (gcnew System::Windows::Forms::Label());
			this->PriceLabel = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->ClassLabel = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->TimeLabel = (gcnew System::Windows::Forms::Label());
			this->FromTimeLabel = (gcnew System::Windows::Forms::Label());
			this->ToTimaLabel = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->FromLabel = (gcnew System::Windows::Forms::Label());
			this->PlaceLabel = (gcnew System::Windows::Forms::Label());
			this->ToLabel = (gcnew System::Windows::Forms::Label());
			this->MainPanel = (gcnew System::Windows::Forms::Panel());
			this->UserCashPanel = (gcnew System::Windows::Forms::Panel());
			this->RefillButton = (gcnew System::Windows::Forms::Button());
			this->CustomerCashLabel = (gcnew System::Windows::Forms::Label());
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
			this->MyTicketsPanel->SuspendLayout();
			this->SettingsPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AccountIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditPasswordPicture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditEmailPicture))->BeginInit();
			this->BuyTicketsPanel->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->MainPanel->SuspendLayout();
			this->UserCashPanel->SuspendLayout();
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
			this->SettingsLabel->Click += gcnew System::EventHandler(this, &MainForm::SettingsLabel_Click);
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
			this->CashLabel->Click += gcnew System::EventHandler(this, &MainForm::CashLabel_Click);
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
			this->MyTicketsLabel->Size = System::Drawing::Size(74, 19);
			this->MyTicketsLabel->TabIndex = 6;
			this->MyTicketsLabel->Text = L"My ticket";
			this->MyTicketsLabel->Click += gcnew System::EventHandler(this, &MainForm::MyTicketsLabel_Click);
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
			this->AccountPanel->Controls->Add(this->MyTicketsPanel);
			this->AccountPanel->Controls->Add(this->SettingsPanel);
			this->AccountPanel->Controls->Add(this->VerifyStatusLabel);
			this->AccountPanel->Controls->Add(this->VerifyAccountButton);
			this->AccountPanel->Controls->Add(this->AccountIcon);
			this->AccountPanel->Controls->Add(this->panel3);
			this->AccountPanel->Controls->Add(this->panel2);
			this->AccountPanel->Controls->Add(this->EditPasswordPicture);
			this->AccountPanel->Controls->Add(this->EditEmailPicture);
			this->AccountPanel->Controls->Add(this->UserPasswordLabel);
			this->AccountPanel->Controls->Add(this->UserMailLabel);
			this->AccountPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AccountPanel->ForeColor = System::Drawing::Color::White;
			this->AccountPanel->Location = System::Drawing::Point(0, 0);
			this->AccountPanel->Name = L"AccountPanel";
			this->AccountPanel->Size = System::Drawing::Size(736, 441);
			this->AccountPanel->TabIndex = 2;
			// 
			// MyTicketsPanel
			// 
			this->MyTicketsPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->MyTicketsPanel->Controls->Add(this->MyTicketPanelComboBox);
			this->MyTicketsPanel->Controls->Add(this->panel10);
			this->MyTicketsPanel->Controls->Add(this->panel9);
			this->MyTicketsPanel->Controls->Add(this->panel8);
			this->MyTicketsPanel->Controls->Add(this->panel7);
			this->MyTicketsPanel->Controls->Add(this->label10);
			this->MyTicketsPanel->Controls->Add(this->MyTicketPanelPrice);
			this->MyTicketsPanel->Controls->Add(this->label8);
			this->MyTicketsPanel->Controls->Add(this->MyTicketPanelCount);
			this->MyTicketsPanel->Controls->Add(this->label6);
			this->MyTicketsPanel->Controls->Add(this->MyTicketPanelPlace);
			this->MyTicketsPanel->Controls->Add(this->label5);
			this->MyTicketsPanel->Controls->Add(this->MyTicketPanelTime);
			this->MyTicketsPanel->Controls->Add(this->MyTicketPanelChooseTicket);
			this->MyTicketsPanel->ForeColor = System::Drawing::Color::White;
			this->MyTicketsPanel->Location = System::Drawing::Point(18, 110);
			this->MyTicketsPanel->Name = L"MyTicketsPanel";
			this->MyTicketsPanel->Size = System::Drawing::Size(116, 50);
			this->MyTicketsPanel->TabIndex = 17;
			// 
			// MyTicketPanelComboBox
			// 
			this->MyTicketPanelComboBox->BackColor = System::Drawing::Color::Plum;
			this->MyTicketPanelComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MyTicketPanelComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MyTicketPanelComboBox->ForeColor = System::Drawing::Color::White;
			this->MyTicketPanelComboBox->FormattingEnabled = true;
			this->MyTicketPanelComboBox->Location = System::Drawing::Point(12, 51);
			this->MyTicketPanelComboBox->Name = L"MyTicketPanelComboBox";
			this->MyTicketPanelComboBox->Size = System::Drawing::Size(163, 24);
			this->MyTicketPanelComboBox->TabIndex = 22;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::White;
			this->panel10->Location = System::Drawing::Point(268, 328);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(228, 2);
			this->panel10->TabIndex = 21;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::White;
			this->panel9->Location = System::Drawing::Point(269, 233);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(228, 2);
			this->panel9->TabIndex = 21;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::White;
			this->panel8->Location = System::Drawing::Point(268, 137);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(228, 2);
			this->panel8->TabIndex = 21;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Location = System::Drawing::Point(269, 39);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(228, 2);
			this->panel7->TabIndex = 20;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(345, 299);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(132, 31);
			this->label10->TabIndex = 19;
			this->label10->Text = L"PriceShow";
			// 
			// MyTicketPanelPrice
			// 
			this->MyTicketPanelPrice->AutoSize = true;
			this->MyTicketPanelPrice->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->MyTicketPanelPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MyTicketPanelPrice->Location = System::Drawing::Point(269, 299);
			this->MyTicketPanelPrice->Name = L"MyTicketPanelPrice";
			this->MyTicketPanelPrice->Size = System::Drawing::Size(71, 31);
			this->MyTicketPanelPrice->TabIndex = 18;
			this->MyTicketPanelPrice->Text = L"Price";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(365, 205);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(144, 31);
			this->label8->TabIndex = 17;
			this->label8->Text = L"CountShow";
			// 
			// MyTicketPanelCount
			// 
			this->MyTicketPanelCount->AutoSize = true;
			this->MyTicketPanelCount->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->MyTicketPanelCount->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MyTicketPanelCount->Location = System::Drawing::Point(263, 205);
			this->MyTicketPanelCount->Name = L"MyTicketPanelCount";
			this->MyTicketPanelCount->Size = System::Drawing::Size(83, 31);
			this->MyTicketPanelCount->TabIndex = 16;
			this->MyTicketPanelCount->Text = L"Count";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(365, 111);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(135, 31);
			this->label6->TabIndex = 15;
			this->label6->Text = L"PlaceShow";
			// 
			// MyTicketPanelPlace
			// 
			this->MyTicketPanelPlace->AutoSize = true;
			this->MyTicketPanelPlace->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->MyTicketPanelPlace->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MyTicketPanelPlace->Location = System::Drawing::Point(262, 112);
			this->MyTicketPanelPlace->Name = L"MyTicketPanelPlace";
			this->MyTicketPanelPlace->Size = System::Drawing::Size(74, 31);
			this->MyTicketPanelPlace->TabIndex = 14;
			this->MyTicketPanelPlace->Text = L"Place";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(365, 14);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 31);
			this->label5->TabIndex = 13;
			this->label5->Text = L"TimeShow";
			// 
			// MyTicketPanelTime
			// 
			this->MyTicketPanelTime->AutoSize = true;
			this->MyTicketPanelTime->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->MyTicketPanelTime->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MyTicketPanelTime->Location = System::Drawing::Point(262, 14);
			this->MyTicketPanelTime->Name = L"MyTicketPanelTime";
			this->MyTicketPanelTime->Size = System::Drawing::Size(70, 31);
			this->MyTicketPanelTime->TabIndex = 12;
			this->MyTicketPanelTime->Text = L"Time";
			// 
			// MyTicketPanelChooseTicket
			// 
			this->MyTicketPanelChooseTicket->AutoSize = true;
			this->MyTicketPanelChooseTicket->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MyTicketPanelChooseTicket->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MyTicketPanelChooseTicket->Location = System::Drawing::Point(3, 14);
			this->MyTicketPanelChooseTicket->Name = L"MyTicketPanelChooseTicket";
			this->MyTicketPanelChooseTicket->Size = System::Drawing::Size(172, 31);
			this->MyTicketPanelChooseTicket->TabIndex = 11;
			this->MyTicketPanelChooseTicket->Text = L"Choose Ticket";
			// 
			// SettingsPanel
			// 
			this->SettingsPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->SettingsPanel->Controls->Add(this->deleteAccountButton);
			this->SettingsPanel->Controls->Add(this->LogOutButton);
			this->SettingsPanel->Location = System::Drawing::Point(30, 23);
			this->SettingsPanel->Name = L"SettingsPanel";
			this->SettingsPanel->Size = System::Drawing::Size(85, 50);
			this->SettingsPanel->TabIndex = 14;
			// 
			// deleteAccountButton
			// 
			this->deleteAccountButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->deleteAccountButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->deleteAccountButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteAccountButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteAccountButton->Location = System::Drawing::Point(412, 169);
			this->deleteAccountButton->Name = L"deleteAccountButton";
			this->deleteAccountButton->Size = System::Drawing::Size(189, 79);
			this->deleteAccountButton->TabIndex = 1;
			this->deleteAccountButton->Text = L"Delete \r\nAcount";
			this->deleteAccountButton->UseVisualStyleBackColor = false;
			// 
			// LogOutButton
			// 
			this->LogOutButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->LogOutButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LogOutButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LogOutButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogOutButton->Location = System::Drawing::Point(143, 169);
			this->LogOutButton->Name = L"LogOutButton";
			this->LogOutButton->Size = System::Drawing::Size(189, 79);
			this->LogOutButton->TabIndex = 0;
			this->LogOutButton->Text = L"Log Out";
			this->LogOutButton->UseVisualStyleBackColor = false;
			// 
			// VerifyStatusLabel
			// 
			this->VerifyStatusLabel->AutoSize = true;
			this->VerifyStatusLabel->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->VerifyStatusLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->VerifyStatusLabel->ForeColor = System::Drawing::Color::Brown;
			this->VerifyStatusLabel->Location = System::Drawing::Point(299, 14);
			this->VerifyStatusLabel->Name = L"VerifyStatusLabel";
			this->VerifyStatusLabel->Size = System::Drawing::Size(173, 34);
			this->VerifyStatusLabel->TabIndex = 25;
			this->VerifyStatusLabel->Text = L"Not Verified";
			// 
			// VerifyAccountButton
			// 
			this->VerifyAccountButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->VerifyAccountButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->VerifyAccountButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->VerifyAccountButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->VerifyAccountButton->Location = System::Drawing::Point(307, 321);
			this->VerifyAccountButton->Name = L"VerifyAccountButton";
			this->VerifyAccountButton->Size = System::Drawing::Size(175, 54);
			this->VerifyAccountButton->TabIndex = 24;
			this->VerifyAccountButton->Text = L"VERIFY";
			this->VerifyAccountButton->UseVisualStyleBackColor = false;
			this->VerifyAccountButton->Click += gcnew System::EventHandler(this, &MainForm::VerifyAccountButton_Click);
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
			this->UserPasswordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->UserPasswordLabel->Location = System::Drawing::Point(279, 265);
			this->UserPasswordLabel->Name = L"UserPasswordLabel";
			this->UserPasswordLabel->Size = System::Drawing::Size(120, 21);
			this->UserPasswordLabel->TabIndex = 12;
			this->UserPasswordLabel->Text = L"User password";
			// 
			// UserMailLabel
			// 
			this->UserMailLabel->AutoSize = true;
			this->UserMailLabel->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->UserMailLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->UserMailLabel->Location = System::Drawing::Point(279, 214);
			this->UserMailLabel->Name = L"UserMailLabel";
			this->UserMailLabel->Size = System::Drawing::Size(91, 21);
			this->UserMailLabel->TabIndex = 11;
			this->UserMailLabel->Text = L"User email";
			// 
			// BuyTicketsPanel
			// 
			this->BuyTicketsPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->BuyTicketsPanel->Controls->Add(this->BuyTicketLabel);
			this->BuyTicketsPanel->Controls->Add(this->panel6);
			this->BuyTicketsPanel->Controls->Add(this->panel5);
			this->BuyTicketsPanel->Controls->Add(this->panel4);
			this->BuyTicketsPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->BuyTicketsPanel->Location = System::Drawing::Point(0, 0);
			this->BuyTicketsPanel->Name = L"BuyTicketsPanel";
			this->BuyTicketsPanel->Size = System::Drawing::Size(736, 441);
			this->BuyTicketsPanel->TabIndex = 18;
			// 
			// BuyTicketLabel
			// 
			this->BuyTicketLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BuyTicketLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BuyTicketLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BuyTicketLabel->ForeColor = System::Drawing::Color::White;
			this->BuyTicketLabel->Location = System::Drawing::Point(285, 361);
			this->BuyTicketLabel->Name = L"BuyTicketLabel";
			this->BuyTicketLabel->Size = System::Drawing::Size(150, 46);
			this->BuyTicketLabel->TabIndex = 16;
			this->BuyTicketLabel->Text = L"BUY";
			this->BuyTicketLabel->UseVisualStyleBackColor = true;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->comboBox6);
			this->panel6->Controls->Add(this->CountLabel);
			this->panel6->Controls->Add(this->ShowPriceLabel);
			this->panel6->Controls->Add(this->PriceLabel);
			this->panel6->Controls->Add(this->comboBox5);
			this->panel6->Controls->Add(this->ClassLabel);
			this->panel6->Location = System::Drawing::Point(9, 230);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(715, 100);
			this->panel6->TabIndex = 8;
			// 
			// comboBox6
			// 
			this->comboBox6->BackColor = System::Drawing::Color::Plum;
			this->comboBox6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboBox6->ForeColor = System::Drawing::Color::White;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(269, 37);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(106, 24);
			this->comboBox6->TabIndex = 17;
			// 
			// CountLabel
			// 
			this->CountLabel->AutoSize = true;
			this->CountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CountLabel->Location = System::Drawing::Point(269, 5);
			this->CountLabel->Name = L"CountLabel";
			this->CountLabel->Size = System::Drawing::Size(97, 31);
			this->CountLabel->TabIndex = 16;
			this->CountLabel->Text = L"COUNT";
			// 
			// ShowPriceLabel
			// 
			this->ShowPriceLabel->AutoSize = true;
			this->ShowPriceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ShowPriceLabel->Location = System::Drawing::Point(556, 30);
			this->ShowPriceLabel->Name = L"ShowPriceLabel";
			this->ShowPriceLabel->Size = System::Drawing::Size(28, 31);
			this->ShowPriceLabel->TabIndex = 15;
			this->ShowPriceLabel->Text = L"0";
			// 
			// PriceLabel
			// 
			this->PriceLabel->AutoSize = true;
			this->PriceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PriceLabel->Location = System::Drawing::Point(461, 30);
			this->PriceLabel->Name = L"PriceLabel";
			this->PriceLabel->Size = System::Drawing::Size(102, 31);
			this->PriceLabel->TabIndex = 14;
			this->PriceLabel->Text = L"PRICE : ";
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
			// ClassLabel
			// 
			this->ClassLabel->AutoSize = true;
			this->ClassLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ClassLabel->Location = System::Drawing::Point(2, 5);
			this->ClassLabel->Name = L"ClassLabel";
			this->ClassLabel->Size = System::Drawing::Size(84, 31);
			this->ClassLabel->TabIndex = 7;
			this->ClassLabel->Text = L"CLASS";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->comboBox4);
			this->panel5->Controls->Add(this->comboBox2);
			this->panel5->Controls->Add(this->TimeLabel);
			this->panel5->Controls->Add(this->FromTimeLabel);
			this->panel5->Controls->Add(this->ToTimaLabel);
			this->panel5->Location = System::Drawing::Point(9, 124);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(715, 100);
			this->panel5->TabIndex = 5;
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
			// TimeLabel
			// 
			this->TimeLabel->AutoSize = true;
			this->TimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TimeLabel->Location = System::Drawing::Point(2, 5);
			this->TimeLabel->Name = L"TimeLabel";
			this->TimeLabel->Size = System::Drawing::Size(72, 31);
			this->TimeLabel->TabIndex = 7;
			this->TimeLabel->Text = L"TIME";
			// 
			// FromTimeLabel
			// 
			this->FromTimeLabel->AutoSize = true;
			this->FromTimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FromTimeLabel->Location = System::Drawing::Point(4, 58);
			this->FromTimeLabel->Name = L"FromTimeLabel";
			this->FromTimeLabel->Size = System::Drawing::Size(64, 23);
			this->FromTimeLabel->TabIndex = 0;
			this->FromTimeLabel->Text = L"FROM";
			// 
			// ToTimaLabel
			// 
			this->ToTimaLabel->AutoSize = true;
			this->ToTimaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ToTimaLabel->Location = System::Drawing::Point(312, 52);
			this->ToTimaLabel->Name = L"ToTimaLabel";
			this->ToTimaLabel->Size = System::Drawing::Size(35, 23);
			this->ToTimaLabel->TabIndex = 1;
			this->ToTimaLabel->Text = L"TO";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->comboBox3);
			this->panel4->Controls->Add(this->comboBox1);
			this->panel4->Controls->Add(this->FromLabel);
			this->panel4->Controls->Add(this->PlaceLabel);
			this->panel4->Controls->Add(this->ToLabel);
			this->panel4->Location = System::Drawing::Point(9, 18);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(715, 100);
			this->panel4->TabIndex = 4;
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
			// FromLabel
			// 
			this->FromLabel->AutoSize = true;
			this->FromLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FromLabel->Location = System::Drawing::Point(3, 63);
			this->FromLabel->Name = L"FromLabel";
			this->FromLabel->Size = System::Drawing::Size(64, 23);
			this->FromLabel->TabIndex = 0;
			this->FromLabel->Text = L"FROM";
			// 
			// PlaceLabel
			// 
			this->PlaceLabel->AutoSize = true;
			this->PlaceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PlaceLabel->Location = System::Drawing::Point(3, 5);
			this->PlaceLabel->Name = L"PlaceLabel";
			this->PlaceLabel->Size = System::Drawing::Size(86, 31);
			this->PlaceLabel->TabIndex = 6;
			this->PlaceLabel->Text = L"PLACE";
			// 
			// ToLabel
			// 
			this->ToLabel->AutoSize = true;
			this->ToLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ToLabel->Location = System::Drawing::Point(312, 63);
			this->ToLabel->Name = L"ToLabel";
			this->ToLabel->Size = System::Drawing::Size(35, 23);
			this->ToLabel->TabIndex = 1;
			this->ToLabel->Text = L"TO";
			// 
			// MainPanel
			// 
			this->MainPanel->BackColor = System::Drawing::Color::Silver;
			this->MainPanel->Controls->Add(this->AccountPanel);
			this->MainPanel->Controls->Add(this->BuyTicketsPanel);
			this->MainPanel->Controls->Add(this->UserCashPanel);
			this->MainPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MainPanel->Location = System::Drawing::Point(208, 50);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(736, 441);
			this->MainPanel->TabIndex = 19;
			// 
			// UserCashPanel
			// 
			this->UserCashPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->UserCashPanel->Controls->Add(this->RefillButton);
			this->UserCashPanel->Controls->Add(this->CustomerCashLabel);
			this->UserCashPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->UserCashPanel->Location = System::Drawing::Point(0, 0);
			this->UserCashPanel->Name = L"UserCashPanel";
			this->UserCashPanel->Size = System::Drawing::Size(736, 441);
			this->UserCashPanel->TabIndex = 23;
			// 
			// RefillButton
			// 
			this->RefillButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->RefillButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RefillButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RefillButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RefillButton->Location = System::Drawing::Point(260, 214);
			this->RefillButton->Name = L"RefillButton";
			this->RefillButton->Size = System::Drawing::Size(175, 54);
			this->RefillButton->TabIndex = 13;
			this->RefillButton->Text = L"REFILL";
			this->RefillButton->UseVisualStyleBackColor = false;
			// 
			// CustomerCashLabel
			// 
			this->CustomerCashLabel->AutoSize = true;
			this->CustomerCashLabel->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->CustomerCashLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CustomerCashLabel->Location = System::Drawing::Point(317, 128);
			this->CustomerCashLabel->Name = L"CustomerCashLabel";
			this->CustomerCashLabel->Size = System::Drawing::Size(72, 48);
			this->CustomerCashLabel->TabIndex = 12;
			this->CustomerCashLabel->Text = L"0 $";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(944, 491);
			this->Controls->Add(this->MainPanel);
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
			this->MyTicketsPanel->ResumeLayout(false);
			this->MyTicketsPanel->PerformLayout();
			this->SettingsPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AccountIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditPasswordPicture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditEmailPicture))->EndInit();
			this->BuyTicketsPanel->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->MainPanel->ResumeLayout(false);
			this->UserCashPanel->ResumeLayout(false);
			this->UserCashPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	public: Customer^ mainCustomer;
	public: SqlService^ sqlService;
	public: EmailService^ emailService = gcnew EmailService();

	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{

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
	MyTicketsPanel->Visible = false;
	UserCashPanel->Visible = false;
	SettingsPanel->Visible = false;
}
	private: System::Void BuyTicketsLabel_Click(System::Object^ sender, System::EventArgs^ e)
{
	AccountPanel->Visible = false;
	MyTicketsPanel->Visible = false;
	BuyTicketsPanel->Visible = true;
	UserCashPanel->Visible = false;
	SettingsPanel->Visible = false;
}
	private: System::Void MyTicketsLabel_Click(System::Object^ sender, System::EventArgs^ e) 
{
	AccountPanel->Visible = false;
	MyTicketsPanel->Visible = true;
	BuyTicketsPanel->Visible = false;
	UserCashPanel->Visible = false;
	SettingsPanel->Visible = false;
}
	private: System::Void CashLabel_Click(System::Object^ sender, System::EventArgs^ e) 
{
	AccountPanel->Visible = false;
	MyTicketsPanel->Visible = false;
	BuyTicketsPanel->Visible = false;
	UserCashPanel->Visible = true;
	SettingsPanel->Visible = false;
}
	private: System::Void SettingsLabel_Click(System::Object^ sender, System::EventArgs^ e)
{
	AccountPanel->Visible = false;
	MyTicketsPanel->Visible = false;
	BuyTicketsPanel->Visible = false;
	UserCashPanel->Visible = false;
	SettingsPanel->Visible = true;
}

	private: System::Void VerifyAccountButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ code = emailService->SendRandomCode(mainCustomer->Email);

		VerifyForm^ verifyForm = gcnew VerifyForm(mainCustomer, code);

		this->Hide();

		verifyForm->ShowDialog();
	}
};
}
