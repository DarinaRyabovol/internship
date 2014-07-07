#include "StdAfx.h"
#include "Agent.h"
#include "Painter.h"
#include "ColerctionOfAgents.h"
namespace internship {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


Agent::Agent(void)
		{
			InitializeComponent();
			
		}
Agent::Agent(String ^ name, Server^ serv)
		{
			InitializeComponent();
			this->Name = name;
			this->Text = name;
			this->serv = serv;
		}

Agent::~Agent()
		{
			CollectionOfAgetns::DeleteAgent(this);
			serv->DeleteAgent(this);
			if (components)
			{
				delete components;
			}
		}

System::Void Agent::Agent_Load(System::Object^  sender, System::EventArgs^  e) {
	serv->AddAgent(this);
			 }

System::Void Agent::pictureBoxAgent_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	IEnumerator^ i = serv->GetMyObjects(this)->GetEnumerator();
	while (i->MoveNext())
	{
		serv->GetPainter()->print(serv->GetRandom()%300, serv->GetRandom()%200, (myObject^)i->Current, e);
	} 
	
}

void Agent::UpdateMe()
{
	pictureBoxAgent->Refresh();
}

void Agent::ChangeServ(Server^ serv)
{
	this->serv = serv;
}
}
