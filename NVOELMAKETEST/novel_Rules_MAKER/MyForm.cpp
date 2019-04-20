#include "MyForm.h"
using namespace novelRulesMAKER;
[STAThread]
int main(cli::array<System::String^>^ args){
	Application::EnableVisualStyles();
	Application::Run(gcnew MyForm());

}



