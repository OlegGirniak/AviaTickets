#pragma once
#include "Plane.h"
#include "SqlService.h"
#include "Administrator.h"

namespace AviaSales {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for DeletePlaneForm
	/// </summary>
	public ref class DeletePlaneForm : public System::Windows::Forms::Form
	{
	public:
		DeletePlaneForm(void)
		{
			InitializeComponent();
		}

		DeletePlaneForm(Administrator^ admin)
		{
			InitializeComponent();

			sqlService = gcnew SqlService();
			
			planes = gcnew List<Plane^>;
			sqlService->GetPlanes(planes);

			this->admin = admin;

			for each (Plane ^ plane in planes)
			{
				PlanesComboBox->Items->Add(plane->Id);
			}

			this->PlanesComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &DeletePlaneForm::PlanesComboBox_SelectedIndexChanged);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DeletePlaneForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ DeletePlaneButton;
	private: System::Windows::Forms::ComboBox^ PlanesComboBox;
	private: System::Windows::Forms::Label^ CountPremiumLabel;


	private: System::Windows::Forms::Label^ CountBusinessLabel;

	private: System::Windows::Forms::Label^ CountEconomLabel;

	private: System::Windows::Forms::Label^ DepartmentPlaceLabel;
	private: System::Windows::Forms::Label^ ArrivalPlaceLabel;
	private: System::Windows::Forms::Label^ DepartmentTimeLabel;
	private: System::Windows::Forms::Label^ ArrivaltimeLabel;





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
			this->DeletePlaneButton = (gcnew System::Windows::Forms::Button());
			this->PlanesComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->CountPremiumLabel = (gcnew System::Windows::Forms::Label());
			this->CountBusinessLabel = (gcnew System::Windows::Forms::Label());
			this->CountEconomLabel = (gcnew System::Windows::Forms::Label());
			this->DepartmentPlaceLabel = (gcnew System::Windows::Forms::Label());
			this->ArrivalPlaceLabel = (gcnew System::Windows::Forms::Label());
			this->DepartmentTimeLabel = (gcnew System::Windows::Forms::Label());
			this->ArrivaltimeLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// DeletePlaneButton
			// 
			this->DeletePlaneButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->DeletePlaneButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DeletePlaneButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeletePlaneButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DeletePlaneButton->ForeColor = System::Drawing::Color::White;
			this->DeletePlaneButton->Location = System::Drawing::Point(41, 354);
			this->DeletePlaneButton->Name = L"DeletePlaneButton";
			this->DeletePlaneButton->Size = System::Drawing::Size(134, 37);
			this->DeletePlaneButton->TabIndex = 42;
			this->DeletePlaneButton->Text = L"DELETE";
			this->DeletePlaneButton->UseVisualStyleBackColor = false;
			this->DeletePlaneButton->Click += gcnew System::EventHandler(this, &DeletePlaneForm::DeletePlaneButton_Click);
			// 
			// PlanesComboBox
			// 
			this->PlanesComboBox->BackColor = System::Drawing::Color::Plum;
			this->PlanesComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PlanesComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PlanesComboBox->ForeColor = System::Drawing::Color::White;
			this->PlanesComboBox->FormattingEnabled = true;
			this->PlanesComboBox->Location = System::Drawing::Point(41, 46);
			this->PlanesComboBox->Name = L"PlanesComboBox";
			this->PlanesComboBox->Size = System::Drawing::Size(134, 24);
			this->PlanesComboBox->TabIndex = 43;
			// 
			// CountPremiumLabel
			// 
			this->CountPremiumLabel->AutoSize = true;
			this->CountPremiumLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CountPremiumLabel->ForeColor = System::Drawing::Color::White;
			this->CountPremiumLabel->Location = System::Drawing::Point(232, 364);
			this->CountPremiumLabel->Name = L"CountPremiumLabel";
			this->CountPremiumLabel->Size = System::Drawing::Size(194, 27);
			this->CountPremiumLabel->TabIndex = 58;
			this->CountPremiumLabel->Text = L"Count of premium";
			// 
			// CountBusinessLabel
			// 
			this->CountBusinessLabel->AutoSize = true;
			this->CountBusinessLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CountBusinessLabel->ForeColor = System::Drawing::Color::White;
			this->CountBusinessLabel->Location = System::Drawing::Point(232, 324);
			this->CountBusinessLabel->Name = L"CountBusinessLabel";
			this->CountBusinessLabel->Size = System::Drawing::Size(188, 27);
			this->CountBusinessLabel->TabIndex = 57;
			this->CountBusinessLabel->Text = L"Count of business";
			// 
			// CountEconomLabel
			// 
			this->CountEconomLabel->AutoSize = true;
			this->CountEconomLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CountEconomLabel->ForeColor = System::Drawing::Color::White;
			this->CountEconomLabel->Location = System::Drawing::Point(232, 283);
			this->CountEconomLabel->Name = L"CountEconomLabel";
			this->CountEconomLabel->Size = System::Drawing::Size(184, 27);
			this->CountEconomLabel->TabIndex = 56;
			this->CountEconomLabel->Text = L"Count of econom";
			// 
			// DepartmentPlaceLabel
			// 
			this->DepartmentPlaceLabel->AutoSize = true;
			this->DepartmentPlaceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DepartmentPlaceLabel->ForeColor = System::Drawing::Color::White;
			this->DepartmentPlaceLabel->Location = System::Drawing::Point(237, 43);
			this->DepartmentPlaceLabel->Name = L"DepartmentPlaceLabel";
			this->DepartmentPlaceLabel->Size = System::Drawing::Size(211, 27);
			this->DepartmentPlaceLabel->TabIndex = 59;
			this->DepartmentPlaceLabel->Text = L"Place of department\r\n";
			// 
			// ArrivalPlaceLabel
			// 
			this->ArrivalPlaceLabel->AutoSize = true;
			this->ArrivalPlaceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ArrivalPlaceLabel->ForeColor = System::Drawing::Color::White;
			this->ArrivalPlaceLabel->Location = System::Drawing::Point(237, 97);
			this->ArrivalPlaceLabel->Name = L"ArrivalPlaceLabel";
			this->ArrivalPlaceLabel->Size = System::Drawing::Size(157, 27);
			this->ArrivalPlaceLabel->TabIndex = 60;
			this->ArrivalPlaceLabel->Text = L"Place of arrival\r\n";
			// 
			// DepartmentTimeLabel
			// 
			this->DepartmentTimeLabel->AutoSize = true;
			this->DepartmentTimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DepartmentTimeLabel->ForeColor = System::Drawing::Color::White;
			this->DepartmentTimeLabel->Location = System::Drawing::Point(237, 152);
			this->DepartmentTimeLabel->Name = L"DepartmentTimeLabel";
			this->DepartmentTimeLabel->Size = System::Drawing::Size(179, 27);
			this->DepartmentTimeLabel->TabIndex = 61;
			this->DepartmentTimeLabel->Text = L"Department time\r\n";
			// 
			// ArrivaltimeLabel
			// 
			this->ArrivaltimeLabel->AutoSize = true;
			this->ArrivaltimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ArrivaltimeLabel->ForeColor = System::Drawing::Color::White;
			this->ArrivaltimeLabel->Location = System::Drawing::Point(237, 211);
			this->ArrivaltimeLabel->Name = L"ArrivaltimeLabel";
			this->ArrivaltimeLabel->Size = System::Drawing::Size(127, 27);
			this->ArrivaltimeLabel->TabIndex = 62;
			this->ArrivaltimeLabel->Text = L"Arrival time\r\n";
			// 
			// DeletePlaneForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(699, 414);
			this->Controls->Add(this->ArrivaltimeLabel);
			this->Controls->Add(this->DepartmentTimeLabel);
			this->Controls->Add(this->ArrivalPlaceLabel);
			this->Controls->Add(this->DepartmentPlaceLabel);
			this->Controls->Add(this->CountPremiumLabel);
			this->Controls->Add(this->CountBusinessLabel);
			this->Controls->Add(this->CountEconomLabel);
			this->Controls->Add(this->PlanesComboBox);
			this->Controls->Add(this->DeletePlaneButton);
			this->ForeColor = System::Drawing::Color::White;
			this->Name = L"DeletePlaneForm";
			this->Text = L"DeletePlaneForm";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	public: SqlService^ sqlService;
	public: List<Plane^>^ planes;
	public: Administrator^ admin;

	private: System::Void PlanesComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void DeletePlaneButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
