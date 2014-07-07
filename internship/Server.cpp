#include "stdafx.h"
#include "Server.h"
#include "Painter.h"
#include "myObject.h"

namespace internship {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	AgentWithCollection::AgentWithCollection(Agent^ a)
	{
		currentAgent = a;
		collection = gcnew System::Collections::ArrayList();
	}
	AgentWithCollection::~AgentWithCollection()
	{
		delete(collection);
		delete(currentAgent);
	}

	Server::Server()
	{
		InitializeComponent();
	}
	Server::~Server()
		{
			myTimer->Stop();
			if (components)
			{
				delete components;
			}
		}
	Server::Server(System::Collections::ArrayList^ agents)
	{
		InitializeComponent();
		countOfAgents = agents->Count;
		Agents = gcnew System::Collections::ArrayList();
		IEnumerator^ ag = agents->GetEnumerator();
		while(ag->MoveNext())
		{
			Agents->Add(gcnew AgentWithCollection((Agent^)ag->Current));
		}
		delete(ag);
		ChangeServer();
		UpdateAllAgents();
	}
	void Server::AddAgent(Agent^ a)
	{
		Agents->Add(gcnew AgentWithCollection(a));
	}
	void Server::toCountLabel()
			{
				countOfAgents++;
				labelKolAgent->Text = Convert::ToString(countOfAgents);
			}
	void Server::UpdateAllAgents()
	{
		IEnumerator^ i = Agents->GetEnumerator();
		while (i->MoveNext())
		{
			((AgentWithCollection^)(i->Current))->currentAgent->UpdateMe();

		} 
	}
	Painter^ Server::GetPainter()
	{
		return newPainter;
	}
	void Server::ChangeServer()
	{
		IEnumerator^ i = Agents->GetEnumerator();
		while (i->MoveNext())
		{
			((AgentWithCollection^)(i->Current))->currentAgent->ChangeServ(this);

		} 
	}
	int Server::GetRandom()
	{
		return r->Next();
	}
	void Server::ChangePainter()
	{
		switch(r->Next()%3)
		{
		case 0:
			newPainter = gcnew RoundPainter(this);
			break;
		case 1:
			newPainter = gcnew SquarePainter(this);
			break;
		case 2:
			newPainter = gcnew TrianglePainter(this);
			break;
		}
	}
	myObject^ Server::CreateObject()
	{
		switch(r->Next()%3)
		{
		case 0:
			return (gcnew OneObject());
			break;
		case 1:
			return (gcnew TwoObject());
			break;
		case  2:
			return (gcnew ThreeObject());
			break;
		}
	}
	System::Collections::ArrayList^ Server::GetMyObjects(Agent^ ag)
	{
		IEnumerator^ tmpAgents = Agents->GetEnumerator();
		while(tmpAgents->MoveNext())
		{
			if (ag == ((AgentWithCollection^)(tmpAgents->Current))->currentAgent)
			{
				return ((AgentWithCollection^)(tmpAgents->Current))->collection;
			}
		}
		delete(tmpAgents);
		return nullptr;
	}
	void Server::TimerPainter(System::Object^ source, System::Timers::ElapsedEventArgs^ e)
	{
		newPainter = arrPainter[(e->SignalTime.Ticks)%3];
		//pictureBoxObj->Refresh();
	}
	void Server::TimerObject(System::Object^ source, System::Timers::ElapsedEventArgs^ e)
	{
		if(Agents->Count == 0)
			return;
		int n = e->SignalTime.Millisecond % Agents->Count;
		IEnumerator^ en = Agents->GetEnumerator();
		en->MoveNext();
		for (int i = 1; i < n; i ++)
		{
			en->MoveNext();
		}
		((AgentWithCollection^)(en->Current))->collection->Add(arrAllObjects[e->SignalTime.Second%3]);
	}
	void Server::DeleteAgent(Agent^ ag)
	{
		IEnumerator^ tmpAgents = Agents->GetEnumerator();
		while(tmpAgents->MoveNext())
		{
			if (ag == ((AgentWithCollection^)(tmpAgents->Current))->currentAgent)
			{
				Agents->Remove((AgentWithCollection^)tmpAgents->Current);
				break;
			}
		}
		delete(tmpAgents);
	}
	System::Void Server::Server_Load(System::Object^  sender, System::EventArgs^  e) 
			{
				r = gcnew System::Random();
				arrPainter = gcnew array<Painter^>(3);
				arrPainter[0] = gcnew RoundPainter(this);
				arrPainter[1] = gcnew SquarePainter(this);
				arrPainter[2] = gcnew TrianglePainter(this);
				arrAllObjects = gcnew array<myObject^>(3);
				arrAllObjects[0] = gcnew OneObject();
				arrAllObjects[1] = gcnew TwoObject();
				arrAllObjects[2] = gcnew ThreeObject();
				myTimer = gcnew System::Timers::Timer(7000);
				myTimer->Elapsed += gcnew System::Timers::ElapsedEventHandler( &Server::TimerPainter);
				myTimer->Enabled = true;
				myTimerObj = gcnew System::Timers::Timer(r->Next(5,7)*1000);
				myTimerObj->Elapsed += gcnew System::Timers::ElapsedEventHandler( &Server::TimerObject);
				ChangePainter();
				myTimer->Start();
				myTimerObj->Start();
			 }
	System::Void Server::buttonOk_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 UpdateAllAgents();
				 pictureBoxObj->Refresh();
			 }
	System::Void Server::pictureBoxObj_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
			 {
				
				 for(int i = 0; i < 3; i ++)
				 {
					 newPainter->print(GetRandom()%150,GetRandom()%150, arrAllObjects[i], e);
				 }
			 }
	System::Void Server::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
			 {
			 }
}
