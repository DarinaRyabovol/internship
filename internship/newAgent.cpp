#include "StdAfx.h"
#include "ColerctionOfAgents.h"
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
			currentServ = nullptr;
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
				this->buttonAdd->Enabled = false;
				this->buttonChange->Enabled = false;
				myAgents = gcnew CollectionOfAgetns();
			 }
System::Void newAgent::buttonAdd_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Agent^ agent1 = gcnew Agent(textBoxName->Text, currentServ);
				 textBoxName->Text = L"";
				 currentServ->toCountLabel();
				 myAgents->AddAgent(agent1);
				 agent1->Show();
}
System::Void newAgent::buttonCreate_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 currentServ  = gcnew Server(myAgents->GetAllAgents());
			 buttonAdd->Enabled = true;
			 buttonChange->Enabled = true;
			 buttonCreate->Enabled = false;
			 currentServ->Show();
		 }
System::Void newAgent::buttonChange_Click(System::Object^  sender, System::EventArgs^  e) 
{
	delete(currentServ);
	currentServ = gcnew Server(myAgents->GetAllAgents());
	currentServ->Show();
}
}
