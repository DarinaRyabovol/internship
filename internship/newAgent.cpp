#include "StdAfx.h"


namespace internship {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

newAgent::newAgent(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
newAgent::newAgent(Server^ myParent)
		{
			InitializeComponent();
			this->myParent = myParent;
		}

newAgent::~newAgent()
		{
			if (components)
			{
				delete components;
			}
		}
#pragma endregion
System::Void newAgent::newAgent_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
System::Void newAgent::buttonAdd_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Agent^ agent1 = gcnew Agent(textBoxName->Text, myParent);
				 textBoxName->Text = L"";
				 myParent->toCountLabel();
				 myParent->getNewAgent(agent1);
				 agent1->Show();
			 }
}
