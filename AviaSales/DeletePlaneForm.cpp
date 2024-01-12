#include "DeletePlaneForm.h"
#include "AdminForm.h"

System::Void AviaSales::DeletePlaneForm::PlanesComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	Object^ selectedId = PlanesComboBox->SelectedItem;

	if (selectedId != nullptr)
	{
		for (size_t i = 0; i < planes->Count; i++)
		{
			int planeId = planes[i]->Id;

			if (planeId.ToString() == selectedId->ToString())
			{
				DepartmentPlaceLabel->Text = "Place of department: " + planes[i]->PlaceOfDeparture;
			}
		}

		for each (Plane ^ currentPlane in planes)
		{
			if (currentPlane->Id == selectedId)
			{
				DepartmentPlaceLabel->Text = "Place of department " + currentPlane->PlaceOfDeparture;
				ArrivalPlaceLabel->Text = "Place of arrival " + currentPlane->PlaceOfDeparture;
				DepartmentTimeLabel->Text = "Department time " + currentPlane->DepartureTime;
				ArrivaltimeLabel->Text = "Arrival time " + currentPlane->ArrivalTime;
				CountEconomLabel->Text = "Count of econom " + currentPlane->CountOfEconomTickets.ToString();
				CountBusinessLabel->Text = "Count of business " + currentPlane->CountOfBusinessTickets.ToString();
				CountPremiumLabel->Text = "Count of premium " + currentPlane->CountOfPremiumTickets.ToString();
			}
		}
	}
}

System::Void AviaSales::DeletePlaneForm::DeletePlaneButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Object^ selectedId = PlanesComboBox->SelectedItem;

	if (selectedId != nullptr)
	{
		Plane^ planeToRemove = gcnew Plane(Convert::ToInt64(selectedId));
		planes->Remove(planeToRemove);
		sqlService->DeletePlane(planeToRemove);
		this->Hide();
	
		AdminForm^ adminForm = gcnew AdminForm(admin); 
		adminForm->Show();
	}
	else
	{
		MessageBox::Show("Choose plane", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

