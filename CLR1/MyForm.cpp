#include "MyForm.h"
#include <Windows.h>
using namespace CLR1; // �������� ������� � �������� namespace
//(����������)������ ���� �����������;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
}