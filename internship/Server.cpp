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

	Server::Server(void)
		{
			InitializeComponent();
			col = 0;
			countOfAgents = 0;
		}

	Server::~Server()
		{
			if (components)
			{
				delete components;
			}
		}

	void Server::toCountLabel()
			{
				countOfAgents++;
				labelKolAgent->Text = Convert::ToString(countOfAgents);
			}
	System::Void Server::Server_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 newagent1 = gcnew newAgent(this);
				 newPainter = gcnew Painter(this);
				 //listOfObjects = new myObject();
				 //если убрать комментарий,  то при компил€ции выдает ошибку LNK2034 и LNK2020
				 newagent1->Show();
			 }
	System::Void Server::buttonOk_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 IEnumerator^ myEnum = checkedListBoxObj->CheckedIndices->GetEnumerator();
				 int count1 = (checkedListBoxObj->CheckedIndices->Count);
				 col = new int[count1]();
				 int i = 0;
				 while(myEnum->MoveNext())
				 {
					 Int32 indexChecked =  *safe_cast<Int32^>(myEnum->Current);
					 col[i] = indexChecked;
					 i++;
				 }
				 pictureBoxObj->Refresh();
			 }
	System::Void Server::pictureBoxObj_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
			 {
				 int i = 0;
				 if(col)
				 {
					 while (i < checkedListBoxObj->CheckedIndices->Count)
					 {
						newPainter->paint();
						 i++;
					 }
				 }
			 }
	System::Void Server::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
			 {
			 }
}
