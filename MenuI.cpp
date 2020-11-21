#include "MenuI.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	PRY2PADavidRodríguez1164619::MenuI mainForm;
	Application::Run(% mainForm);
	return 0;

}