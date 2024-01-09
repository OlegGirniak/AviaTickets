#include "SignInForm.h"
#include "MainForm.h"
#include "SignUpForm.h"
#include "AdminForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	AviaSales::SignUpForm signUpForm;
	Application::Run(% signUpForm);

	return 0;
}