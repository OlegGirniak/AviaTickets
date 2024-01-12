#pragma once
#include "SqlService.h"
#include "Administrator.h"

namespace AviaSales {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddPlaneForm
	/// </summary>
	public ref class AddPlaneForm : public System::Windows::Forms::Form
	{
	public:
		AddPlaneForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		AddPlaneForm(Administrator^ admin)
		{
			InitializeComponent();
			this->admin = admin;
			sqlService = gcnew SqlService();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddPlaneForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ AddPlaneButton;
	private: System::Windows::Forms::TextBox^ PlaceDepatmentTextbox;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ PlaceArrivalTextBox;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ DepartmentDateTextBox;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ ArrivalDataTextBox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ EconomCountTextBox;
	private: System::Windows::Forms::TextBox^ BusinessCountTextBox;
	private: System::Windows::Forms::TextBox^ PremiumCountTextBox;



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
			this->AddPlaneButton = (gcnew System::Windows::Forms::Button());
			this->PlaceDepatmentTextbox = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->PlaceArrivalTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->DepartmentDateTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->ArrivalDataTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->EconomCountTextBox = (gcnew System::Windows::Forms::TextBox());
			this->BusinessCountTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PremiumCountTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// AddPlaneButton
			// 
			this->AddPlaneButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->AddPlaneButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddPlaneButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddPlaneButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddPlaneButton->ForeColor = System::Drawing::Color::White;
			this->AddPlaneButton->Location = System::Drawing::Point(168, 399);
			this->AddPlaneButton->Name = L"AddPlaneButton";
			this->AddPlaneButton->Size = System::Drawing::Size(134, 37);
			this->AddPlaneButton->TabIndex = 44;
			this->AddPlaneButton->Text = L"ADD";
			this->AddPlaneButton->UseVisualStyleBackColor = false;
			this->AddPlaneButton->Click += gcnew System::EventHandler(this, &AddPlaneForm::AddPlaneButton_Click);
			// 
			// PlaceDepatmentTextbox
			// 
			this->PlaceDepatmentTextbox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->PlaceDepatmentTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PlaceDepatmentTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlaceDepatmentTextbox->ForeColor = System::Drawing::Color::DarkGray;
			this->PlaceDepatmentTextbox->Location = System::Drawing::Point(121, 31);
			this->PlaceDepatmentTextbox->Multiline = true;
			this->PlaceDepatmentTextbox->Name = L"PlaceDepatmentTextbox";
			this->PlaceDepatmentTextbox->Size = System::Drawing::Size(236, 30);
			this->PlaceDepatmentTextbox->TabIndex = 45;
			this->PlaceDepatmentTextbox->Text = L"Place of department";
			this->PlaceDepatmentTextbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->PlaceDepatmentTextbox->Click += gcnew System::EventHandler(this, &AddPlaneForm::PlaceDepatmentTextbox_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(116, 58);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(247, 2);
			this->panel1->TabIndex = 46;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(116, 108);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(247, 2);
			this->panel2->TabIndex = 48;
			// 
			// PlaceArrivalTextBox
			// 
			this->PlaceArrivalTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->PlaceArrivalTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PlaceArrivalTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlaceArrivalTextBox->ForeColor = System::Drawing::Color::DarkGray;
			this->PlaceArrivalTextBox->Location = System::Drawing::Point(121, 81);
			this->PlaceArrivalTextBox->Multiline = true;
			this->PlaceArrivalTextBox->Name = L"PlaceArrivalTextBox";
			this->PlaceArrivalTextBox->Size = System::Drawing::Size(236, 30);
			this->PlaceArrivalTextBox->TabIndex = 47;
			this->PlaceArrivalTextBox->Text = L"Place of arrival";
			this->PlaceArrivalTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->PlaceArrivalTextBox->Click += gcnew System::EventHandler(this, &AddPlaneForm::PlaceArrivalTextBox_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(116, 160);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(247, 2);
			this->panel3->TabIndex = 50;
			// 
			// DepartmentDateTextBox
			// 
			this->DepartmentDateTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->DepartmentDateTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DepartmentDateTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DepartmentDateTextBox->ForeColor = System::Drawing::Color::DarkGray;
			this->DepartmentDateTextBox->Location = System::Drawing::Point(121, 133);
			this->DepartmentDateTextBox->Multiline = true;
			this->DepartmentDateTextBox->Name = L"DepartmentDateTextBox";
			this->DepartmentDateTextBox->Size = System::Drawing::Size(236, 30);
			this->DepartmentDateTextBox->TabIndex = 49;
			this->DepartmentDateTextBox->Text = L"Date of department";
			this->DepartmentDateTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->DepartmentDateTextBox->Click += gcnew System::EventHandler(this, &AddPlaneForm::DepartmentDateTextBox_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(111, 210);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(247, 2);
			this->panel4->TabIndex = 52;
			// 
			// ArrivalDataTextBox
			// 
			this->ArrivalDataTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ArrivalDataTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ArrivalDataTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ArrivalDataTextBox->ForeColor = System::Drawing::Color::DarkGray;
			this->ArrivalDataTextBox->Location = System::Drawing::Point(116, 183);
			this->ArrivalDataTextBox->Multiline = true;
			this->ArrivalDataTextBox->Name = L"ArrivalDataTextBox";
			this->ArrivalDataTextBox->Size = System::Drawing::Size(236, 30);
			this->ArrivalDataTextBox->TabIndex = 51;
			this->ArrivalDataTextBox->Text = L"Date of arrival";
			this->ArrivalDataTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ArrivalDataTextBox->Click += gcnew System::EventHandler(this, &AddPlaneForm::ArrivalDataTextBox_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(90, 253);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 23);
			this->label1->TabIndex = 53;
			this->label1->Text = L"Count of econom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(90, 294);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 23);
			this->label2->TabIndex = 54;
			this->label2->Text = L"Count of business";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(90, 334);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(175, 23);
			this->label3->TabIndex = 55;
			this->label3->Text = L"Count of premium";
			// 
			// EconomCountTextBox
			// 
			this->EconomCountTextBox->BackColor = System::Drawing::Color::Plum;
			this->EconomCountTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->EconomCountTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EconomCountTextBox->ForeColor = System::Drawing::Color::White;
			this->EconomCountTextBox->Location = System::Drawing::Point(290, 252);
			this->EconomCountTextBox->Multiline = true;
			this->EconomCountTextBox->Name = L"EconomCountTextBox";
			this->EconomCountTextBox->Size = System::Drawing::Size(78, 24);
			this->EconomCountTextBox->TabIndex = 57;
			this->EconomCountTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// BusinessCountTextBox
			// 
			this->BusinessCountTextBox->BackColor = System::Drawing::Color::Plum;
			this->BusinessCountTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BusinessCountTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BusinessCountTextBox->ForeColor = System::Drawing::Color::White;
			this->BusinessCountTextBox->Location = System::Drawing::Point(290, 293);
			this->BusinessCountTextBox->Multiline = true;
			this->BusinessCountTextBox->Name = L"BusinessCountTextBox";
			this->BusinessCountTextBox->Size = System::Drawing::Size(78, 24);
			this->BusinessCountTextBox->TabIndex = 58;
			this->BusinessCountTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// PremiumCountTextBox
			// 
			this->PremiumCountTextBox->BackColor = System::Drawing::Color::Plum;
			this->PremiumCountTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PremiumCountTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PremiumCountTextBox->ForeColor = System::Drawing::Color::White;
			this->PremiumCountTextBox->Location = System::Drawing::Point(290, 333);
			this->PremiumCountTextBox->Multiline = true;
			this->PremiumCountTextBox->Name = L"PremiumCountTextBox";
			this->PremiumCountTextBox->Size = System::Drawing::Size(78, 24);
			this->PremiumCountTextBox->TabIndex = 59;
			this->PremiumCountTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// AddPlaneForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(464, 461);
			this->Controls->Add(this->PremiumCountTextBox);
			this->Controls->Add(this->BusinessCountTextBox);
			this->Controls->Add(this->EconomCountTextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->ArrivalDataTextBox);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->DepartmentDateTextBox);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->PlaceArrivalTextBox);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->PlaceDepatmentTextbox);
			this->Controls->Add(this->AddPlaneButton);
			this->Name = L"AddPlaneForm";
			this->Text = L"AddPlaneForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: Administrator^ admin;
	public: SqlService^ sqlService;

	private: System::Void PlaceDepatmentTextbox_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PlaceArrivalTextBox_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void DepartmentDateTextBox_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ArrivalDataTextBox_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AddPlaneButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
