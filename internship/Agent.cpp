#include "StdAfx.h"
#include "Agent.h"
#include "Painter.h"

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
			if (components)
			{
				delete components;
			}
		}

System::Void Agent::Agent_Load(System::Object^  sender, System::EventArgs^  e) {
	myPainter = gcnew Painter(serv);
			 }

System::Void Agent::pictureBoxAgent_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	IEnumerator^ i = serv->listOfObjects->GetEnumerator();
	while (i->MoveNext())
	{
		myPainter->paint(e, (myObject^)i->Current);
	} 
	
}

void Agent::UpdateMe()
{
	pictureBoxAgent->Refresh();
}
}
