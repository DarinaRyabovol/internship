// internship.cpp : main project file.

#include "stdafx.h"
using namespace internship;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	// Create the main window and run it
	Application::Run(gcnew Server());
	return 0;
}
