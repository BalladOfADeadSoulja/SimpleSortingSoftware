#include "MyForm.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) { //^^�������������� ������� ������
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	SimpleSortingSoftware::MyForm form;
	Application::Run(% form); //% ��� ��� ������������ ������ ref - ������ �� ������
}
