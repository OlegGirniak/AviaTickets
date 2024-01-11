#pragma once

#include "Customer.h"
#include "SqlService.h"
#include "MainForm.h"

namespace AviaSales {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SignUpForm
	/// </summary>
	public ref class SignUpForm : public System::Windows::Forms::Form
	{
	public:
		SignUpForm(void)
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
		~SignUpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ SignUpButton;
	protected:
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ PasswordTextBox;
	private: System::Windows::Forms::TextBox^ EmailTextBox;
	private: System::Windows::Forms::Label^ SignUpLabel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ AviaSalesLabel;
	private: System::Windows::Forms::Label^ SomeText;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ PasswordAgainTextBox;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SignUpForm::typeid));
			this->SignUpButton = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->EmailTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SignUpLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->AviaSalesLabel = (gcnew System::Windows::Forms::Label());
			this->SomeText = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->PasswordAgainTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// SignUpButton
			// 
			this->SignUpButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignUpButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SignUpButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignUpButton->ForeColor = System::Drawing::Color::White;
			this->SignUpButton->Location = System::Drawing::Point(419, 278);
			this->SignUpButton->Name = L"SignUpButton";
			this->SignUpButton->Size = System::Drawing::Size(125, 41);
			this->SignUpButton->TabIndex = 15;
			this->SignUpButton->Text = L"SIGN UP";
			this->SignUpButton->UseVisualStyleBackColor = true;
			this->SignUpButton->Click += gcnew System::EventHandler(this, &SignUpForm::SignUpButton_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(378, 155);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(210, 2);
			this->panel3->TabIndex = 14;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(378, 92);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(210, 2);
			this->panel2->TabIndex = 13;
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->PasswordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PasswordTextBox->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PasswordTextBox->ForeColor = System::Drawing::Color::Gray;
			this->PasswordTextBox->Location = System::Drawing::Point(378, 132);
			this->PasswordTextBox->Multiline = true;
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Size = System::Drawing::Size(202, 20);
			this->PasswordTextBox->TabIndex = 12;
			this->PasswordTextBox->Text = L"password";
			this->PasswordTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->PasswordTextBox->Click += gcnew System::EventHandler(this, &SignUpForm::PasswordTextBox_Click);
			this->PasswordTextBox->TextChanged += gcnew System::EventHandler(this, &SignUpForm::PasswordTextBox_TextChanged);
			// 
			// EmailTextBox
			// 
			this->EmailTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->EmailTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->EmailTextBox->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->EmailTextBox->ForeColor = System::Drawing::Color::Gray;
			this->EmailTextBox->Location = System::Drawing::Point(378, 67);
			this->EmailTextBox->Multiline = true;
			this->EmailTextBox->Name = L"EmailTextBox";
			this->EmailTextBox->Size = System::Drawing::Size(202, 20);
			this->EmailTextBox->TabIndex = 11;
			this->EmailTextBox->Text = L"email";
			this->EmailTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->EmailTextBox->Click += gcnew System::EventHandler(this, &SignUpForm::EmailTextBox_Click);
			// 
			// SignUpLabel
			// 
			this->SignUpLabel->AutoSize = true;
			this->SignUpLabel->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SignUpLabel->ForeColor = System::Drawing::Color::White;
			this->SignUpLabel->Location = System::Drawing::Point(421, 22);
			this->SignUpLabel->Name = L"SignUpLabel";
			this->SignUpLabel->Size = System::Drawing::Size(123, 29);
			this->SignUpLabel->TabIndex = 9;
			this->SignUpLabel->Text = L"SIGN UP";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->AviaSalesLabel);
			this->panel1->Controls->Add(this->SomeText);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(249, 361);
			this->panel1->TabIndex = 8;
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
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(378, 220);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(210, 2);
			this->panel4->TabIndex = 17;
			// 
			// PasswordAgainTextBox
			// 
			this->PasswordAgainTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->PasswordAgainTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PasswordAgainTextBox->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PasswordAgainTextBox->ForeColor = System::Drawing::Color::Gray;
			this->PasswordAgainTextBox->Location = System::Drawing::Point(378, 197);
			this->PasswordAgainTextBox->Multiline = true;
			this->PasswordAgainTextBox->Name = L"PasswordAgainTextBox";
			this->PasswordAgainTextBox->Size = System::Drawing::Size(202, 20);
			this->PasswordAgainTextBox->TabIndex = 16;
			this->PasswordAgainTextBox->Text = L"password again";
			this->PasswordAgainTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->PasswordAgainTextBox->Click += gcnew System::EventHandler(this, &SignUpForm::PasswordAgainTextBox_Click);
			this->PasswordAgainTextBox->TextChanged += gcnew System::EventHandler(this, &SignUpForm::PasswordAgainTextBox_TextChanged);
			// 
			// SignUpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(694, 361);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->PasswordAgainTextBox);
			this->Controls->Add(this->SignUpButton);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->EmailTextBox);
			this->Controls->Add(this->SignUpLabel);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SignUpForm";
			this->Text = L"SignUpForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void PasswordTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (PasswordTextBox->Text != "password")
			PasswordTextBox->PasswordChar = '*';
	}
	private: System::Void PasswordAgainTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (PasswordAgainTextBox->Text != "password again")
			PasswordAgainTextBox->PasswordChar = '*';
	}
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

	private: System::Void PasswordAgainTextBox_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (PasswordAgainTextBox->Text == "password again")
		{
			PasswordAgainTextBox->Text = "";
			PasswordAgainTextBox->ForeColor = Color::White;
		}
	}

	private: System::Void SignUpButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//create new customer

		if (EmailTextBox->Text != "email" && PasswordTextBox->Text != "password" 
			&& PasswordTextBox->Text == PasswordAgainTextBox->Text 
			&& EmailTextBox->Text->Length > 3 && PasswordTextBox->Text->Length > 3)
		{
			//create new customer
			Customer newCustomer(EmailTextBox->Text, PasswordTextBox->Text, 0, false);

			//create sql service
			SqlService sqlService;

			sqlService.AddCustomer(% newCustomer);
			this->Hide();

			MainForm^ mainForm = gcnew MainForm(% newCustomer);
			mainForm->ShowDialog();
		}
		else
		{
			MessageBox::Show("Invalid data", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
