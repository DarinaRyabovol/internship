#include "stdafx.h"
#include "Painter.h"
#include "myObject.h"
namespace internship
{
	using namespace System;

	void Painter::printEllipce(System::Windows::Forms::PaintEventArgs^ e, int color)
		{
			Random^ r = gcnew Random(color);
			switch(color)
			{
			case 0:
				e->Graphics->FillEllipse(System::Drawing::Brushes::Green,System::Drawing::RectangleF(r->Next()%100,r->Next(0, 150),40,40));
				break;
			case 1:
				e->Graphics->FillEllipse(System::Drawing::Brushes::Red,System::Drawing::RectangleF(r->Next()%100,r->Next(0, 150),40,40));
				break;
			case 2:
				e->Graphics->FillEllipse(System::Drawing::Brushes::Blue,System::Drawing::RectangleF(r->Next()%100,r->Next(0, 150),40,40));
				break;
			case 3:
				e->Graphics->FillEllipse(System::Drawing::Brushes::DarkOrange,System::Drawing::RectangleF(r->Next()%100,r->Next(0, 150),40,40));
				break;
			}
		}
	Painter::Painter(Server^ Serv)
		{
			myServ = Serv;
			dt = gcnew System::DateTime(2013,5,30);
		}
	void Painter::paint(System::Windows::Forms::PaintEventArgs^ e, myObject^ obj)
		{
			printEllipce(e, obj->getColor());
		}
	void Painter::paint(System::Windows::Forms::PaintEventArgs^ e)
	{
		Random^ r = gcnew Random();
		e->Graphics->FillEllipse(System::Drawing::Brushes::Green,System::Drawing::RectangleF(r->Next(0,200),r->Next(0,150),40,40));
		return ;
	}
}