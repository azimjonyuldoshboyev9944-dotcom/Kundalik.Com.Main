#include "pch.h"
#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Kundalicom::MyForm1 form;
	Application::Run(% form);
}