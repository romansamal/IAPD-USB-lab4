#include "MainWindow.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
// int main(array<String^>^ args) { // Kann Fehler nach 'using namespace std;' verursachen
int main() {
	Application::Run(gcnew IAPDUSB::MainWindow()); // "CppCLR_WinformsProjekt" noch anpassen
	return 0;
}