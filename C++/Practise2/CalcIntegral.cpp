#include "CalcIntegral.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Practise2::CalcIntegral form;
	Application::Run(% form);
}
