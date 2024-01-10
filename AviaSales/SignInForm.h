#pragma once
#include "SqlService.h"
#include "SignUpForm.h"
#include  "AdminForm.h"

namespace AviaSales {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SignInForm
	/// </summary>
	public ref class SignInForm : public System::Windows::Forms::Form
	{
	public:
		SignInForm(void)
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
		~SignInForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ SomeText;
	private: System::Windows::Forms::Label^ IfDontAccountLabel;
	protected:



	private: System::Windows::Forms::Label^ AviaSalesLabel;

	private: System::Windows::Forms::Label^ SignInLabel;
	private: System::Windows::Forms::TextBox^ EmailTextBox;
	private: System::Windows::Forms::TextBox^ PasswordTextBox;



	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ SignUpButton;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SignInForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->IfDontAccountLabel = (gcnew System::Windows::Forms::Label());
			this->AviaSalesLabel = (gcnew System::Windows::Forms::Label());
			this->SomeText = (gcnew System::Windows::Forms::Label());
			this->SignInLabel = (gcnew System::Windows::Forms::Label());
			this->EmailTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->SignUpButton = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->IfDontAccountLabel);
			this->panel1->Controls->Add(this->AviaSalesLabel);
			this->panel1->Controls->Add(this->SomeText);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(249, 361);
			this->panel1->TabIndex = 0;
			// 
			// IfDontAccountLabel
			// 
			this->IfDontAccountLabel->AutoSize = true;
			this->IfDontAccountLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->IfDontAccountLabel->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->IfDontAccountLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->IfDontAccountLabel->Location = System::Drawing::Point(21, 267);
			this->IfDontAccountLabel->Name = L"IfDontAccountLabel";
			this->IfDontAccountLabel->Size = System::Drawing::Size(190, 16);
			this->IfDontAccountLabel->TabIndex = 2;
			this->IfDontAccountLabel->Text = L"If you don\'t have ACCOUNT";
			this->IfDontAccountLabel->Click += gcnew System::EventHandler(this, &SignInForm::IfDontAccountLabel_Click);
			// 
			// AviaSalesLabel
			// 
			this->AviaSalesLabel->AutoSize = true;
			this->AviaSalesLabel->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AviaSalesLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->AviaSalesLabel->Location = System::Drawing::Point(19, 25);
			this->AviaSalesLabel->Name = L"AviaSalesLabel";
			this->AviaSalesLabel->Size = System::Drawing::Size(165, 26);
			this->AviaSalesLabel->TabIndex = 1;
			this->AviaSalesLabel->Text = L"AVIA | SALES";
			// 
			// SomeText
			// 
			this->SomeText->AutoSize = true;
			this->SomeText->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SomeText->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->SomeText->Location = System::Drawing::Point(21, 67);
			this->SomeText->Name = L"SomeText";
			this->SomeText->Size = System::Drawing::Size(204, 165);
			this->SomeText->TabIndex = 0;
			this->SomeText->Text = resources->GetString(L"SomeText.Text");
			// 
			// SignInLabel
			// 
			this->SignInLabel->AutoSize = true;
			this->SignInLabel->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SignInLabel->ForeColor = System::Drawing::Color::White;
			this->SignInLabel->Location = System::Drawing::Point(417, 22);
			this->SignInLabel->Name = L"SignInLabel";
			this->SignInLabel->Size = System::Drawing::Size(119, 29);
			this->SignInLabel->TabIndex = 2;
			this->SignInLabel->Text = L"SIGN IN";
			// 
			// EmailTextBox
			// 
			this->EmailTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->EmailTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->EmailTextBox->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->EmailTextBox->ForeColor = System::Drawing::Color::Gray;
			this->EmailTextBox->Location = System::Drawing::Point(373, 107);
			this->EmailTextBox->Multiline = true;
			this->EmailTextBox->Name = L"EmailTextBox";
			this->EmailTextBox->Size = System::Drawing::Size(202, 20);
			this->EmailTextBox->TabIndex = 3;
			this->EmailTextBox->Text = L"email";
			this->EmailTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->EmailTextBox->Click += gcnew System::EventHandler(this, &SignInForm::EmailTextBox_Click);
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->PasswordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PasswordTextBox->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PasswordTextBox->ForeColor = System::Drawing::Color::Gray;
			this->PasswordTextBox->Location = System::Drawing::Point(373, 180);
			this->PasswordTextBox->Multiline = true;
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Size = System::Drawing::Size(202, 20);
			this->PasswordTextBox->TabIndex = 4;
			this->PasswordTextBox->Text = L"password";
			this->PasswordTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->PasswordTextBox->Click += gcnew System::EventHandler(this, &SignInForm::PasswordTextBox_Click);
			this->PasswordTextBox->TextChanged += gcnew System::EventHandler(this, &SignInForm::PasswordTextBox_TextChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(373, 132);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(210, 2);
			this->panel2->TabIndex = 5;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(373, 203);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(210, 2);
			this->panel3->TabIndex = 6;
			// 
			// SignUpButton
			// 
			this->SignUpButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignUpButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SignUpButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignUpButton->ForeColor = System::Drawing::Color::White;
			this->SignUpButton->Location = System::Drawing::Point(411, 267);
			this->SignUpButton->Name = L"SignUpButton";
			this->SignUpButton->Size = System::Drawing::Size(125, 41);
			this->SignUpButton->TabIndex = 7;
			this->SignUpButton->Text = L"SIGN IN";
			this->SignUpButton->UseVisualStyleBackColor = true;
			this->SignUpButton->Click += gcnew System::EventHandler(this, &SignInForm::SignUpButton_Click);
			// 
			// SignInForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(694, 361);
			this->Controls->Add(this->SignUpButton);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->EmailTextBox);
			this->Controls->Add(this->SignInLabel);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SignInForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SignInForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: SqlService sqlService;

private: System::Void EmailTextBox_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (EmailTextBox->Text == "email")
	{
		EmailTextBox->Text = "";
		EmailTextBox->ForeColor = Color::White;
	}
}


private: System::Void PasswordTextBox_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (PasswordTextBox->Text == "password")
	{
		PasswordTextBox->Text = "";
		PasswordTextBox->ForeColor = Color::White;
	}
}
private: System::Void PasswordTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (PasswordTextBox->Text != "password")
	{
		PasswordTextBox->PasswordChar = '*';
	}
}
private: System::Void IfDontAccountLabel_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Hide();

	SignUpForm^ signUpForm = gcnew SignUpForm();
	signUpForm->ShowDialog();
}
private: System::Void SignUpButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	User^ user = gcnew User(EmailTextBox->Text, PasswordTextBox->Text);

	if (sqlService.CheckIfAdminExists(user) && sqlService.CheckCorrectPassword(user))
	{
		Administrator^ admin = sqlService.GetAdmin(user);

		AdminForm^ adminForm = gcnew AdminForm(admin);

		this->Hide();
		adminForm->ShowDialog();

	}
	else if (sqlService.CheckIfCustomerExists(user) && sqlService.CheckCorrectPassword(user))
	{
		Customer^ customer = sqlService.GetCustomer(user);

		this->Hide();

		MainForm^ mainForm = gcnew MainForm(customer);
		mainForm->ShowDialog();

	}
	else
	{
		MessageBox::Show("Invalid data", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
