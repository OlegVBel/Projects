#include "CalcInterval.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Practise1::CalcInterval form;
	Application::Run(% form);
}