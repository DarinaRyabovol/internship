#include "StdAfx.h"
#include "Agent.h"

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

#pragma endregion
System::Void Agent::Agent_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
}
