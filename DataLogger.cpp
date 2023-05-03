#include "DataLogger.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ arr) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DataLoggerApp::DataLogger frm;
	Application::Run(% frm);
	return 0;
}
