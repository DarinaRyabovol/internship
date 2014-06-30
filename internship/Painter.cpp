#include "stdafx.h"
#include "Painter.h"
#include "myObject.h"
namespace internship
{
	using namespace System;

	void Painter::printEllipce(int color)
		{
			Random^ r = gcnew Random(0);
			System::Drawing::Graphics^ e = myServ->pictureBoxObj->CreateGraphics();
			switch(color)
			{
			case 0:
				(e)->FillEllipse(System::Drawing::Brushes::Green,System::Drawing::RectangleF(10 +(r->Next()%100)*45,10,40,40));
				break;
			case 1:
				(e)->FillEllipse(System::Drawing::Brushes::Red,System::Drawing::RectangleF(10 + (r->Next()%100)*45,10,40,40));
				break;
			case 2:
				(e)->FillEllipse(System::Drawing::Brushes::Blue,System::Drawing::RectangleF(10 + (r->Next()%100)*45,10,40,40));
				break;
			case 3:
				(e)->FillEllipse(System::Drawing::Brushes::Violet,System::Drawing::RectangleF(10 + (r->Next()%100)*45,10,40,40));
				break;
			}
		}

	Painter::Painter(Server^ Serv)
		{
			myServ = Serv;
			myAgent = nullptr;
		}
	void Painter::paint(myObject* obj)
		{
			printEllipce(obj->getColor());
		}
	System::Drawing::Graphics^ Painter::paint()
	{
		Random^ r = gcnew Random(0);
		System::Drawing::Graphics^ e = (myServ)->pictureBoxObj->CreateGraphics();
		System::Drawing::RectangleF^ rect = gcnew System::Drawing::RectangleF(10,10,100,20);
		e->FillRectangle(System::Drawing::Brushes::BlueViolet, *rect);
	//	e->FillEllipse(System::Drawing::Brushes::Green,System::Drawing::RectangleF(45,10,40,40));
		return e;
	}
}