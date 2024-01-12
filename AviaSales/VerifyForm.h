#pragma once
#include "Customer.h"
#include "SqlService.h"

namespace AviaSales {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VerifyForm
	/// </summary>
	public ref class VerifyForm : public System::Windows::Forms::Form
	{
	public:
		VerifyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		VerifyForm(Customer^ user, String^ code)
		{
			InitializeComponent();

			customer = user;

			customerCode = code;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VerifyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ SomeLabel;
	protected:

	protected:
	private: System::Windows::Forms::Button^ ConfirmButton;
	private: System::Windows::Forms::TextBox^ CodeTextBox;

	private: System::Windows::Forms::Panel^ panel1;

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
			this->SomeLabel = (gcnew System::Windows::Forms::Label());
			this->ConfirmButton = (gcnew System::Windows::Forms::Button());
			this->CodeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// SomeLabel
			// 
			this->SomeLabel->AutoSize = true;
			this->SomeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SomeLabel->Location = System::Drawing::Point(52, 43);
			this->SomeLabel->Name = L"SomeLabel";
			this->SomeLabel->Size = System::Drawing::Size(272, 23);
			this->SomeLabel->TabIndex = 0;
			this->SomeLabel->Text = L"We sent a code on your email";
			this->SomeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ConfirmButton
			// 
			this->ConfirmButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ConfirmButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ConfirmButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ConfirmButton->Location = System::Drawing::Point(121, 175);
			this->ConfirmButton->Name = L"ConfirmButton";
			this->ConfirmButton->Size = System::Drawing::Size(109, 35);
			this->ConfirmButton->TabIndex = 1;
			this->ConfirmButton->Text = L"CONFIRM";
			this->ConfirmButton->UseVisualStyleBackColor = false;
			this->ConfirmButton->Click += gcnew System::EventHandler(this, &VerifyForm::ConfirmButton_Click);
			// 
			// CodeTextBox
			// 
			this->CodeTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->CodeTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CodeTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CodeTextBox->ForeColor = System::Drawing::Color::White;
			this->CodeTextBox->Location = System::Drawing::Point(114, 90);
			this->CodeTextBox->Multiline = true;
			this->CodeTextBox->Name = L"CodeTextBox";
			this->CodeTextBox->Size = System::Drawing::Size(124, 19);
			this->CodeTextBox->TabIndex = 2;
			this->CodeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(114, 115);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(124, 2);
			this->panel1->TabIndex = 3;
			// 
			// VerifyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(365, 249);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->CodeTextBox);
			this->Controls->Add(this->ConfirmButton);
			this->Controls->Add(this->SomeLabel);
			this->ForeColor = System::Drawing::Color::White;
			this->Name = L"VerifyForm";
			this->Text = L"VerifyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	public: Customer^ customer;
	public: String^ customerCode;

	private: System::Void ConfirmButton_Click(System::Object^ sender, System::EventArgs^ e);
	
};
}
