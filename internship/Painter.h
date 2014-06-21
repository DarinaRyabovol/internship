#include "myObject.h"

using namespace System;

class Painter
{
private:
	void printEllipce(System::Windows::Forms::PaintEventArgs^* e, int color)
	{
		Random^ r = gcnew Random(0);
		switch(color)
		{
		case 0:
			(*e)->Graphics->FillEllipse(System::Drawing::Brushes::Green,System::Drawing::RectangleF(10 +(r->Next()%100)*45,10,40,40));
			break;
		case 1:
			(*e)->Graphics->FillEllipse(System::Drawing::Brushes::Red,System::Drawing::RectangleF(10 + (r->Next()%100)*45,10,40,40));
			break;
		case 2:
			(*e)->Graphics->FillEllipse(System::Drawing::Brushes::Blue,System::Drawing::RectangleF(10 + (r->Next()%100)*45,10,40,40));
			break;
		case 3:
			(*e)->Graphics->FillEllipse(System::Drawing::Brushes::Violet,System::Drawing::RectangleF(10 + (r->Next()%100)*45,10,40,40));
			break;
		}
	}
public:
	void paint(System::Windows::Forms::PaintEventArgs^* e, myObject *obj)
	{
		printEllipce(e, obj->getColor());
	}
};