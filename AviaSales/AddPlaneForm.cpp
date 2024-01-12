#include "AddPlaneForm.h"
#include "AdminForm.h"

System::Void AviaSales::AddPlaneForm::PlaceDepatmentTextbox_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (PlaceDepatmentTextbox->Text == "Place of department")
	{
		PlaceDepatmentTextbox->Text = "";
		PlaceDepatmentTextbox->ForeColor = Color::White;
	}
}

System::Void AviaSales::AddPlaneForm::PlaceArrivalTextBox_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (PlaceArrivalTextBox->Text == "Place of arrival")
	{
		PlaceArrivalTextBox->Text = "";
		PlaceArrivalTextBox->ForeColor = Color::White;
	}
}

System::Void AviaSales::AddPlaneForm::DepartmentDateTextBox_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (DepartmentDateTextBox->Text == "Date of department")
	{
		DepartmentDateTextBox->Text = "";
		DepartmentDateTextBox->ForeColor = Color::White;
	}
}

System::Void AviaSales::AddPlaneForm::ArrivalDataTextBox_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (ArrivalDataTextBox->Text == "Date of arrival")
	{
		ArrivalDataTextBox->Text = "";
		ArrivalDataTextBox->ForeColor = Color::White;
	}
}

System::Void AviaSales::AddPlaneForm::AddPlaneButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ departmentPlace = PlaceDepatmentTextbox->Text;
	String^ arrivalPlace = PlaceArrivalTextBox->Text;
	String^ departmentDate = DepartmentDateTextBox->Text;
	String^ arrivalDate = ArrivalDataTextBox->Text;

	int economCount = Convert::ToInt64(EconomCountTextBox->Text);
	int businessCount = Convert::ToInt64(BusinessCountTextBox->Text);
	int premiumCount = Convert::ToInt64(PremiumCountTextBox->Text);

	Plane^ newPlane = gcnew Plane(departmentPlace, arrivalPlace, departmentDate, arrivalDate, economCount, businessCount, premiumCount);

	sqlService->AddPlane(newPlane);

	this->Hide();

	AdminForm^ adminForm = gcnew AdminForm(admin);

	adminForm->Show();
}
