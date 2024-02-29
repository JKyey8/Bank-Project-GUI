#include "Main Page.h"
#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace BankProjectGUI;
using namespace BankProjectGUI
[STAThread]

Void MainPage_Load() {
	LoginForm^ Lform = gcnew LoginForm;
	Lform->TopLevel = false;
	// Lform->Dock = DockStyle->Fill;
	mainPanel->Controls->Add(Lform);
	mainPanel->Tag = Lform;
	Lform->Show();

};


void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BankProjectGUI::MainPage form;
	Application::Run(% form);


}
