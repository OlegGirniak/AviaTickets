#include "SignInForm.h"
#include "MainForm.h"
#include "SignUpForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	AviaSales::MainForm signInForm;
	Application::Run(% signInForm);

	return 0;
}