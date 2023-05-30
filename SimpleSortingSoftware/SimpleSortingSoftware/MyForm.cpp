#include "MyForm.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) { //^^автоматическая очистка памяти
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	SimpleSortingSoftware::MyForm form;
	Application::Run(% form); //% так как используются классы ref - классы по ссылке
}
