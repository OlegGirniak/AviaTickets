#include "VerifyForm.h"
#include "MainForm.h"

System::Void AviaSales::VerifyForm::ConfirmButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	{
		if (customerCode == CodeTextBox->Text)
		{
			SqlService^ sqlService = gcnew SqlService();
			sqlService->VerifyAccount(customer);
			this->Hide();

			customer = sqlService->GetCustomer(customer);

			MainForm^ mainForm = gcnew MainForm(customer);
			mainForm->Show();
		}
		else
		{
			MessageBox::Show("Inncorrect code", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}
