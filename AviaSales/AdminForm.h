#pragma once
#include "Administrator.h"
#include "SqlService.h"
#include "Customer.h"
#include "Plane.h"
#include "Ticket.h"
#include "AddPlaneForm.h"
#include "DeletePlaneForm.h"


namespace AviaSales {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		AdminForm(Administrator^ admin)
		{
			InitializeComponent();
			this->admin = admin;
			sqlService = gcnew SqlService();

			AdminMailLabel->Text = this->admin->Email;
			AdminPasswordLabel->Text = this->admin->Password;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ AdminTopPanel;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ AdminSideMenuPanel;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ SettingsLabel;
	private: System::Windows::Forms::PictureBox^ pictureBox6;



	private: System::Windows::Forms::PictureBox^ MyTicketsPicture;
	private: System::Windows::Forms::PictureBox^ AccountPicture;

	private: System::Windows::Forms::Label^ BuyTicketsLabel;

	private: System::Windows::Forms::PictureBox^ MenuPicture;
	private: System::Windows::Forms::Label^ MenuLabel;
	private: System::Windows::Forms::Label^ PlanesLabel;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ CustomersLabel;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ AccountLabel;
	private: System::Windows::Forms::Panel^ AdminMainPanel;
	private: System::Windows::Forms::Panel^ AdminAccountPanel;
	private: System::Windows::Forms::PictureBox^ AdminAccountIcon;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ EditPasswordPicture;
	private: System::Windows::Forms::PictureBox^ EditEmailPicture;
	private: System::Windows::Forms::Label^ AdminPasswordLabel;

	private: System::Windows::Forms::Label^ AdminMailLabel;
	private: System::Windows::Forms::Panel^ CustomersPanel;

	private: System::Windows::Forms::Label^ CoutnCustomerTicketsLabel;
	private: System::Windows::Forms::ComboBox^ CustomerTicketsComboBox;


	private: System::Windows::Forms::Label^ ChooseTicketLabel;
	private: System::Windows::Forms::ComboBox^ CustomersComboBox;


	private: System::Windows::Forms::Label^ CustomersPanelChooseCustomerLabel;
	private: System::Windows::Forms::Button^ DeleteTicketButton;
	private: System::Windows::Forms::Panel^ PlanesPanel;
	private: System::Windows::Forms::Panel^ TicketsPanel;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ DeleteTicketsButton;

	private: System::Windows::Forms::Button^ AddPlaneButton;
	private: System::Windows::Forms::Label^ LabelPlane;
	private: System::Windows::Forms::Button^ DeletePlaneButton;
	private: System::Windows::Forms::Panel^ SettingsPanel;

	private: System::Windows::Forms::Button^ deleteAccountButton;
	private: System::Windows::Forms::Button^ LogOutButton;
	private: System::Windows::Forms::Timer^ MenuCloseTimer;
	private: System::Windows::Forms::Timer^ MenuOpenTimer;

	private: System::ComponentModel::IContainer^ components;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			this->AdminTopPanel = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AdminSideMenuPanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->SettingsPanel = (gcnew System::Windows::Forms::Panel());
			this->deleteAccountButton = (gcnew System::Windows::Forms::Button());
			this->LogOutButton = (gcnew System::Windows::Forms::Button());
			this->TicketsPanel = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->DeleteTicketsButton = (gcnew System::Windows::Forms::Button());
			this->CustomersPanel = (gcnew System::Windows::Forms::Panel());
			this->DeleteTicketButton = (gcnew System::Windows::Forms::Button());
			this->CoutnCustomerTicketsLabel = (gcnew System::Windows::Forms::Label());
			this->CustomerTicketsComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ChooseTicketLabel = (gcnew System::Windows::Forms::Label());
			this->CustomersComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->CustomersPanelChooseCustomerLabel = (gcnew System::Windows::Forms::Label());
			this->AdminAccountPanel = (gcnew System::Windows::Forms::Panel());
			this->AdminAccountIcon = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->EditPasswordPicture = (gcnew System::Windows::Forms::PictureBox());
			this->EditEmailPicture = (gcnew System::Windows::Forms::PictureBox());
			this->AdminPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->AdminMailLabel = (gcnew System::Windows::Forms::Label());
			this->AccountLabel = (gcnew System::Windows::Forms::Label());
			this->PlanesLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->CustomersLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SettingsLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->MyTicketsPicture = (gcnew System::Windows::Forms::PictureBox());
			this->AccountPicture = (gcnew System::Windows::Forms::PictureBox());
			this->BuyTicketsLabel = (gcnew System::Windows::Forms::Label());
			this->MenuPicture = (gcnew System::Windows::Forms::PictureBox());
			this->MenuLabel = (gcnew System::Windows::Forms::Label());
			this->AdminMainPanel = (gcnew System::Windows::Forms::Panel());
			this->PlanesPanel = (gcnew System::Windows::Forms::Panel());
			this->AddPlaneButton = (gcnew System::Windows::Forms::Button());
			this->LabelPlane = (gcnew System::Windows::Forms::Label());
			this->DeletePlaneButton = (gcnew System::Windows::Forms::Button());
			this->MenuCloseTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->MenuOpenTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->AdminTopPanel->SuspendLayout();
			this->AdminSideMenuPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SettingsPanel->SuspendLayout();
			this->TicketsPanel->SuspendLayout();
			this->CustomersPanel->SuspendLayout();
			this->AdminAccountPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AdminAccountIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditPasswordPicture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditEmailPicture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyTicketsPicture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AccountPicture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MenuPicture))->BeginInit();
			this->AdminMainPanel->SuspendLayout();
			this->PlanesPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// AdminTopPanel
			// 
			this->AdminTopPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->AdminTopPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AdminTopPanel->Controls->Add(this->label2);
			this->AdminTopPanel->Controls->Add(this->label1);
			this->AdminTopPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->AdminTopPanel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(106)));
			this->AdminTopPanel->Location = System::Drawing::Point(0, 0);
			this->AdminTopPanel->Name = L"AdminTopPanel";
			this->AdminTopPanel->Size = System::Drawing::Size(944, 50);
			this->AdminTopPanel->TabIndex = 1;
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
			// AdminSideMenuPanel
			// 
			this->AdminSideMenuPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->AdminSideMenuPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AdminSideMenuPanel->Controls->Add(this->pictureBox2);
			this->AdminSideMenuPanel->Controls->Add(this->SettingsPanel);
			this->AdminSideMenuPanel->Controls->Add(this->TicketsPanel);
			this->AdminSideMenuPanel->Controls->Add(this->CustomersPanel);
			this->AdminSideMenuPanel->Controls->Add(this->AdminAccountPanel);
			this->AdminSideMenuPanel->Controls->Add(this->AccountLabel);
			this->AdminSideMenuPanel->Controls->Add(this->PlanesLabel);
			this->AdminSideMenuPanel->Controls->Add(this->pictureBox1);
			this->AdminSideMenuPanel->Controls->Add(this->CustomersLabel);
			this->AdminSideMenuPanel->Controls->Add(this->panel1);
			this->AdminSideMenuPanel->Controls->Add(this->MyTicketsPicture);
			this->AdminSideMenuPanel->Controls->Add(this->AccountPicture);
			this->AdminSideMenuPanel->Controls->Add(this->BuyTicketsLabel);
			this->AdminSideMenuPanel->Controls->Add(this->MenuPicture);
			this->AdminSideMenuPanel->Controls->Add(this->MenuLabel);
			this->AdminSideMenuPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->AdminSideMenuPanel->Location = System::Drawing::Point(0, 50);
			this->AdminSideMenuPanel->Name = L"AdminSideMenuPanel";
			this->AdminSideMenuPanel->Size = System::Drawing::Size(208, 441);
			this->AdminSideMenuPanel->TabIndex = 2;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(11, 91);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(30, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// SettingsPanel
			// 
			this->SettingsPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->SettingsPanel->Controls->Add(this->deleteAccountButton);
			this->SettingsPanel->Controls->Add(this->LogOutButton);
			this->SettingsPanel->ForeColor = System::Drawing::Color::White;
			this->SettingsPanel->Location = System::Drawing::Point(59, 293);
			this->SettingsPanel->Name = L"SettingsPanel";
			this->SettingsPanel->Size = System::Drawing::Size(40, 35);
			this->SettingsPanel->TabIndex = 49;
			// 
			// deleteAccountButton
			// 
			this->deleteAccountButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->deleteAccountButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->deleteAccountButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteAccountButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteAccountButton->Location = System::Drawing::Point(408, 181);
			this->deleteAccountButton->Name = L"deleteAccountButton";
			this->deleteAccountButton->Size = System::Drawing::Size(189, 79);
			this->deleteAccountButton->TabIndex = 3;
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
			this->LogOutButton->Location = System::Drawing::Point(139, 181);
			this->LogOutButton->Name = L"LogOutButton";
			this->LogOutButton->Size = System::Drawing::Size(189, 79);
			this->LogOutButton->TabIndex = 2;
			this->LogOutButton->Text = L"Log Out";
			this->LogOutButton->UseVisualStyleBackColor = false;
			// 
			// TicketsPanel
			// 
			this->TicketsPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->TicketsPanel->Controls->Add(this->label3);
			this->TicketsPanel->Controls->Add(this->DeleteTicketsButton);
			this->TicketsPanel->ForeColor = System::Drawing::Color::White;
			this->TicketsPanel->Location = System::Drawing::Point(11, 293);
			this->TicketsPanel->Name = L"TicketsPanel";
			this->TicketsPanel->Size = System::Drawing::Size(41, 39);
			this->TicketsPanel->TabIndex = 45;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(304, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 37);
			this->label3->TabIndex = 46;
			this->label3->Text = L"TICKETS";
			// 
			// DeleteTicketsButton
			// 
			this->DeleteTicketsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->DeleteTicketsButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DeleteTicketsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeleteTicketsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DeleteTicketsButton->Location = System::Drawing::Point(301, 204);
			this->DeleteTicketsButton->Name = L"DeleteTicketsButton";
			this->DeleteTicketsButton->Size = System::Drawing::Size(134, 37);
			this->DeleteTicketsButton->TabIndex = 45;
			this->DeleteTicketsButton->Text = L"DELETE";
			this->DeleteTicketsButton->UseVisualStyleBackColor = false;
			// 
			// CustomersPanel
			// 
			this->CustomersPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->CustomersPanel->Controls->Add(this->DeleteTicketButton);
			this->CustomersPanel->Controls->Add(this->CoutnCustomerTicketsLabel);
			this->CustomersPanel->Controls->Add(this->CustomerTicketsComboBox);
			this->CustomersPanel->Controls->Add(this->ChooseTicketLabel);
			this->CustomersPanel->Controls->Add(this->CustomersComboBox);
			this->CustomersPanel->Controls->Add(this->CustomersPanelChooseCustomerLabel);
			this->CustomersPanel->ForeColor = System::Drawing::Color::White;
			this->CustomersPanel->Location = System::Drawing::Point(17, 237);
			this->CustomersPanel->Name = L"CustomersPanel";
			this->CustomersPanel->Size = System::Drawing::Size(37, 50);
			this->CustomersPanel->TabIndex = 25;
			// 
			// DeleteTicketButton
			// 
			this->DeleteTicketButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->DeleteTicketButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DeleteTicketButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeleteTicketButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DeleteTicketButton->Location = System::Drawing::Point(445, 139);
			this->DeleteTicketButton->Name = L"DeleteTicketButton";
			this->DeleteTicketButton->Size = System::Drawing::Size(134, 37);
			this->DeleteTicketButton->TabIndex = 40;
			this->DeleteTicketButton->Text = L"DELETE";
			this->DeleteTicketButton->UseVisualStyleBackColor = false;
			// 
			// CoutnCustomerTicketsLabel
			// 
			this->CoutnCustomerTicketsLabel->AutoSize = true;
			this->CoutnCustomerTicketsLabel->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->CoutnCustomerTicketsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CoutnCustomerTicketsLabel->Location = System::Drawing::Point(420, 18);
			this->CoutnCustomerTicketsLabel->Name = L"CoutnCustomerTicketsLabel";
			this->CoutnCustomerTicketsLabel->Size = System::Drawing::Size(107, 31);
			this->CoutnCustomerTicketsLabel->TabIndex = 39;
			this->CoutnCustomerTicketsLabel->Text = L"Tickets: ";
			// 
			// CustomerTicketsComboBox
			// 
			this->CustomerTicketsComboBox->BackColor = System::Drawing::Color::Plum;
			this->CustomerTicketsComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CustomerTicketsComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CustomerTicketsComboBox->ForeColor = System::Drawing::Color::White;
			this->CustomerTicketsComboBox->FormattingEnabled = true;
			this->CustomerTicketsComboBox->Location = System::Drawing::Point(407, 95);
			this->CustomerTicketsComboBox->Name = L"CustomerTicketsComboBox";
			this->CustomerTicketsComboBox->Size = System::Drawing::Size(205, 24);
			this->CustomerTicketsComboBox->TabIndex = 38;
			// 
			// ChooseTicketLabel
			// 
			this->ChooseTicketLabel->AutoSize = true;
			this->ChooseTicketLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ChooseTicketLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ChooseTicketLabel->Location = System::Drawing::Point(420, 61);
			this->ChooseTicketLabel->Name = L"ChooseTicketLabel";
			this->ChooseTicketLabel->Size = System::Drawing::Size(172, 31);
			this->ChooseTicketLabel->TabIndex = 37;
			this->ChooseTicketLabel->Text = L"Choose Ticket";
			// 
			// CustomersComboBox
			// 
			this->CustomersComboBox->BackColor = System::Drawing::Color::Plum;
			this->CustomersComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CustomersComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CustomersComboBox->ForeColor = System::Drawing::Color::White;
			this->CustomersComboBox->FormattingEnabled = true;
			this->CustomersComboBox->Location = System::Drawing::Point(15, 98);
			this->CustomersComboBox->Name = L"CustomersComboBox";
			this->CustomersComboBox->Size = System::Drawing::Size(205, 24);
			this->CustomersComboBox->TabIndex = 36;
			// 
			// CustomersPanelChooseCustomerLabel
			// 
			this->CustomersPanelChooseCustomerLabel->AutoSize = true;
			this->CustomersPanelChooseCustomerLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CustomersPanelChooseCustomerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CustomersPanelChooseCustomerLabel->Location = System::Drawing::Point(6, 61);
			this->CustomersPanelChooseCustomerLabel->Name = L"CustomersPanelChooseCustomerLabel";
			this->CustomersPanelChooseCustomerLabel->Size = System::Drawing::Size(214, 31);
			this->CustomersPanelChooseCustomerLabel->TabIndex = 23;
			this->CustomersPanelChooseCustomerLabel->Text = L"Choose Customer";
			// 
			// AdminAccountPanel
			// 
			this->AdminAccountPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->AdminAccountPanel->Controls->Add(this->AdminAccountIcon);
			this->AdminAccountPanel->Controls->Add(this->panel3);
			this->AdminAccountPanel->Controls->Add(this->panel2);
			this->AdminAccountPanel->Controls->Add(this->EditPasswordPicture);
			this->AdminAccountPanel->Controls->Add(this->EditEmailPicture);
			this->AdminAccountPanel->Controls->Add(this->AdminPasswordLabel);
			this->AdminAccountPanel->Controls->Add(this->AdminMailLabel);
			this->AdminAccountPanel->ForeColor = System::Drawing::Color::White;
			this->AdminAccountPanel->Location = System::Drawing::Point(86, 245);
			this->AdminAccountPanel->Name = L"AdminAccountPanel";
			this->AdminAccountPanel->Size = System::Drawing::Size(43, 37);
			this->AdminAccountPanel->TabIndex = 0;
			// 
			// AdminAccountIcon
			// 
			this->AdminAccountIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AdminAccountIcon.Image")));
			this->AdminAccountIcon->Location = System::Drawing::Point(289, 95);
			this->AdminAccountIcon->Name = L"AdminAccountIcon";
			this->AdminAccountIcon->Size = System::Drawing::Size(150, 150);
			this->AdminAccountIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->AdminAccountIcon->TabIndex = 24;
			this->AdminAccountIcon->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(260, 343);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(220, 2);
			this->panel3->TabIndex = 23;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(260, 291);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(220, 2);
			this->panel2->TabIndex = 22;
			// 
			// EditPasswordPicture
			// 
			this->EditPasswordPicture->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EditPasswordPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EditPasswordPicture.Image")));
			this->EditPasswordPicture->Location = System::Drawing::Point(485, 315);
			this->EditPasswordPicture->Name = L"EditPasswordPicture";
			this->EditPasswordPicture->Size = System::Drawing::Size(25, 25);
			this->EditPasswordPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->EditPasswordPicture->TabIndex = 21;
			this->EditPasswordPicture->TabStop = false;
			// 
			// EditEmailPicture
			// 
			this->EditEmailPicture->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EditEmailPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EditEmailPicture.Image")));
			this->EditEmailPicture->Location = System::Drawing::Point(485, 260);
			this->EditEmailPicture->Name = L"EditEmailPicture";
			this->EditEmailPicture->Size = System::Drawing::Size(25, 25);
			this->EditEmailPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->EditEmailPicture->TabIndex = 20;
			this->EditEmailPicture->TabStop = false;
			// 
			// AdminPasswordLabel
			// 
			this->AdminPasswordLabel->AutoSize = true;
			this->AdminPasswordLabel->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->AdminPasswordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdminPasswordLabel->Location = System::Drawing::Point(254, 306);
			this->AdminPasswordLabel->Name = L"AdminPasswordLabel";
			this->AdminPasswordLabel->Size = System::Drawing::Size(230, 34);
			this->AdminPasswordLabel->TabIndex = 19;
			this->AdminPasswordLabel->Text = L"Admin password";
			// 
			// AdminMailLabel
			// 
			this->AdminMailLabel->AutoSize = true;
			this->AdminMailLabel->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->AdminMailLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdminMailLabel->Location = System::Drawing::Point(257, 260);
			this->AdminMailLabel->Name = L"AdminMailLabel";
			this->AdminMailLabel->Size = System::Drawing::Size(178, 34);
			this->AdminMailLabel->TabIndex = 18;
			this->AdminMailLabel->Text = L"Admin email";
			// 
			// AccountLabel
			// 
			this->AccountLabel->AutoSize = true;
			this->AccountLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AccountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AccountLabel->ForeColor = System::Drawing::Color::White;
			this->AccountLabel->Location = System::Drawing::Point(55, 102);
			this->AccountLabel->Name = L"AccountLabel";
			this->AccountLabel->Size = System::Drawing::Size(67, 19);
			this->AccountLabel->TabIndex = 14;
			this->AccountLabel->Text = L"Account";
			this->AccountLabel->Click += gcnew System::EventHandler(this, &AdminForm::AccountLabel_Click);
			// 
			// PlanesLabel
			// 
			this->PlanesLabel->AutoSize = true;
			this->PlanesLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PlanesLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlanesLabel->ForeColor = System::Drawing::Color::White;
			this->PlanesLabel->Location = System::Drawing::Point(55, 174);
			this->PlanesLabel->Name = L"PlanesLabel";
			this->PlanesLabel->Size = System::Drawing::Size(54, 19);
			this->PlanesLabel->TabIndex = 13;
			this->PlanesLabel->Text = L"Planes";
			this->PlanesLabel->Click += gcnew System::EventHandler(this, &AdminForm::PlanesLabel_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(11, 163);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(30, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// CustomersLabel
			// 
			this->CustomersLabel->AutoSize = true;
			this->CustomersLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CustomersLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CustomersLabel->ForeColor = System::Drawing::Color::White;
			this->CustomersLabel->Location = System::Drawing::Point(54, 138);
			this->CustomersLabel->Name = L"CustomersLabel";
			this->CustomersLabel->Size = System::Drawing::Size(84, 19);
			this->CustomersLabel->TabIndex = 11;
			this->CustomersLabel->Text = L"Customers";
			this->CustomersLabel->Click += gcnew System::EventHandler(this, &AdminForm::CustomersLabel_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->panel1->Controls->Add(this->SettingsLabel);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->ForeColor = System::Drawing::Color::Gray;
			this->panel1->Location = System::Drawing::Point(0, 373);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(207, 66);
			this->panel1->TabIndex = 10;
			// 
			// SettingsLabel
			// 
			this->SettingsLabel->AutoSize = true;
			this->SettingsLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SettingsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SettingsLabel->ForeColor = System::Drawing::Color::White;
			this->SettingsLabel->Location = System::Drawing::Point(47, 27);
			this->SettingsLabel->Name = L"SettingsLabel";
			this->SettingsLabel->Size = System::Drawing::Size(66, 19);
			this->SettingsLabel->TabIndex = 13;
			this->SettingsLabel->Text = L"Settings";
			this->SettingsLabel->Click += gcnew System::EventHandler(this, &AdminForm::SettingsLabel_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(11, 16);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(30, 30);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 12;
			this->pictureBox6->TabStop = false;
			// 
			// MyTicketsPicture
			// 
			this->MyTicketsPicture->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MyTicketsPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MyTicketsPicture.Image")));
			this->MyTicketsPicture->Location = System::Drawing::Point(11, 198);
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
			this->AccountPicture->Location = System::Drawing::Point(11, 127);
			this->AccountPicture->Name = L"AccountPicture";
			this->AccountPicture->Size = System::Drawing::Size(30, 30);
			this->AccountPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->AccountPicture->TabIndex = 7;
			this->AccountPicture->TabStop = false;
			// 
			// BuyTicketsLabel
			// 
			this->BuyTicketsLabel->AutoSize = true;
			this->BuyTicketsLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BuyTicketsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BuyTicketsLabel->ForeColor = System::Drawing::Color::White;
			this->BuyTicketsLabel->Location = System::Drawing::Point(55, 209);
			this->BuyTicketsLabel->Name = L"BuyTicketsLabel";
			this->BuyTicketsLabel->Size = System::Drawing::Size(58, 19);
			this->BuyTicketsLabel->TabIndex = 5;
			this->BuyTicketsLabel->Text = L"Tickets";
			this->BuyTicketsLabel->Click += gcnew System::EventHandler(this, &AdminForm::BuyTicketsLabel_Click);
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
			this->MenuPicture->Click += gcnew System::EventHandler(this, &AdminForm::MenuPicture_Click);
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
			// AdminMainPanel
			// 
			this->AdminMainPanel->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->AdminMainPanel->Controls->Add(this->PlanesPanel);
			this->AdminMainPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AdminMainPanel->Location = System::Drawing::Point(208, 50);
			this->AdminMainPanel->Name = L"AdminMainPanel";
			this->AdminMainPanel->Size = System::Drawing::Size(736, 441);
			this->AdminMainPanel->TabIndex = 3;
			// 
			// PlanesPanel
			// 
			this->PlanesPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->PlanesPanel->Controls->Add(this->AddPlaneButton);
			this->PlanesPanel->Controls->Add(this->LabelPlane);
			this->PlanesPanel->Controls->Add(this->DeletePlaneButton);
			this->PlanesPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PlanesPanel->ForeColor = System::Drawing::Color::White;
			this->PlanesPanel->Location = System::Drawing::Point(0, 0);
			this->PlanesPanel->Name = L"PlanesPanel";
			this->PlanesPanel->Size = System::Drawing::Size(736, 441);
			this->PlanesPanel->TabIndex = 41;
			// 
			// AddPlaneButton
			// 
			this->AddPlaneButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->AddPlaneButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddPlaneButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddPlaneButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddPlaneButton->Location = System::Drawing::Point(232, 157);
			this->AddPlaneButton->Name = L"AddPlaneButton";
			this->AddPlaneButton->Size = System::Drawing::Size(134, 37);
			this->AddPlaneButton->TabIndex = 43;
			this->AddPlaneButton->Text = L"ADD";
			this->AddPlaneButton->UseVisualStyleBackColor = false;
			this->AddPlaneButton->Click += gcnew System::EventHandler(this, &AdminForm::AddPlaneButton_Click);
			// 
			// LabelPlane
			// 
			this->LabelPlane->AutoSize = true;
			this->LabelPlane->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->LabelPlane->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LabelPlane->Location = System::Drawing::Point(304, 83);
			this->LabelPlane->Name = L"LabelPlane";
			this->LabelPlane->Size = System::Drawing::Size(124, 37);
			this->LabelPlane->TabIndex = 42;
			this->LabelPlane->Text = L"PLANES";
			// 
			// DeletePlaneButton
			// 
			this->DeletePlaneButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->DeletePlaneButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DeletePlaneButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeletePlaneButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DeletePlaneButton->Location = System::Drawing::Point(372, 157);
			this->DeletePlaneButton->Name = L"DeletePlaneButton";
			this->DeletePlaneButton->Size = System::Drawing::Size(134, 37);
			this->DeletePlaneButton->TabIndex = 41;
			this->DeletePlaneButton->Text = L"DELETE";
			this->DeletePlaneButton->UseVisualStyleBackColor = false;
			this->DeletePlaneButton->Click += gcnew System::EventHandler(this, &AdminForm::DeletePlaneButton_Click);
			// 
			// MenuCloseTimer
			// 
			this->MenuCloseTimer->Interval = 1;
			this->MenuCloseTimer->Tick += gcnew System::EventHandler(this, &AdminForm::MenuCloseTimer_Tick);
			// 
			// MenuOpenTimer
			// 
			this->MenuOpenTimer->Interval = 1;
			this->MenuOpenTimer->Tick += gcnew System::EventHandler(this, &AdminForm::MenuOpenTimer_Tick);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(944, 491);
			this->Controls->Add(this->AdminMainPanel);
			this->Controls->Add(this->AdminSideMenuPanel);
			this->Controls->Add(this->AdminTopPanel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->AdminTopPanel->ResumeLayout(false);
			this->AdminTopPanel->PerformLayout();
			this->AdminSideMenuPanel->ResumeLayout(false);
			this->AdminSideMenuPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->SettingsPanel->ResumeLayout(false);
			this->TicketsPanel->ResumeLayout(false);
			this->TicketsPanel->PerformLayout();
			this->CustomersPanel->ResumeLayout(false);
			this->CustomersPanel->PerformLayout();
			this->AdminAccountPanel->ResumeLayout(false);
			this->AdminAccountPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AdminAccountIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditPasswordPicture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditEmailPicture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyTicketsPicture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AccountPicture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MenuPicture))->EndInit();
			this->AdminMainPanel->ResumeLayout(false);
			this->PlanesPanel->ResumeLayout(false);
			this->PlanesPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	public: SqlService^ sqlService;
	public: Administrator^ admin;
	public: List<Plane^>^ planes;

	private: System::Void MenuCloseTimer_Tick(System::Object^ sender, System::EventArgs^ e) 
	{
		if (AdminSideMenuPanel->Width > 55)
		{
			AdminSideMenuPanel->Width -= 5;
		}
		else
		{
			MenuCloseTimer->Stop();
		}
	}
	private: System::Void MenuOpenTimer_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		if (AdminSideMenuPanel->Width < 190)
		{
			AdminSideMenuPanel->Width += 5;
		}
		else
		{
			MenuOpenTimer->Stop();
		}
	}
	private: System::Void MenuPicture_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (AdminSideMenuPanel->Width > 55)
		{
			MenuCloseTimer->Start();
		}
		else
		{
			MenuOpenTimer->Start();
		}
	}
	private: System::Void AccountLabel_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		AdminAccountPanel->Visible = true;
		PlanesPanel->Visible = false;
		SettingsPanel->Visible = false;
		TicketsPanel->Visible = false;
		CustomersPanel->Visible = false;
	}

	private: System::Void CustomersLabel_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		AdminAccountPanel->Visible = false;
		PlanesPanel->Visible = false;
		SettingsPanel->Visible = false;
		TicketsPanel->Visible = false;
		CustomersPanel->Visible = true;
	}

	private: System::Void PlanesLabel_Click(System::Object^ sender, System::EventArgs^ e) 
	{	
		AdminAccountPanel->Visible = false;
		PlanesPanel->Visible = true;
		SettingsPanel->Visible = false;
		TicketsPanel->Visible = false;
		CustomersPanel->Visible = false;
	}

	private: System::Void BuyTicketsLabel_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		AdminAccountPanel->Visible = false;
		PlanesPanel->Visible = false;
		SettingsPanel->Visible = false;
		TicketsPanel->Visible = true;
		CustomersPanel->Visible = false;
	}

	private: System::Void SettingsLabel_Click(System::Object^ sender, System::EventArgs^ e) 
	{	
		AdminAccountPanel->Visible = false;
		PlanesPanel->Visible = false;
		SettingsPanel->Visible = true;
		TicketsPanel->Visible = false;
		CustomersPanel->Visible = false;
	}
	private: System::Void AddPlaneButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AddPlaneForm^ addPlaneForm = gcnew AddPlaneForm(admin);

		this->Hide();

		addPlaneForm->Show();
	}
	private: System::Void DeletePlaneButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		DeletePlaneForm^ deletePlaneForm = gcnew DeletePlaneForm(admin);

		this->Hide();

		deletePlaneForm->Show();
	}
};
}
