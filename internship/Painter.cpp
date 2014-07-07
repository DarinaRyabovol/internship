#include "stdafx.h"
#include "Painter.h"
#include "myObject.h"
namespace internship
{
	using namespace System;
	RoundPainter::RoundPainter(Server^ serv)
	{
		this->serv = serv;
	}
	void RoundPainter::print(int x, int y, myObject^ obj, System::Windows::Forms::PaintEventArgs^ e)
	{
		System::Drawing::SolidBrush^ br = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Red);
		e->Graphics->FillEllipse(br, x, y, 40,40);
		e->Graphics->DrawEllipse(System::Drawing::Pens::Black, x, y, 40,41);
		e->Graphics->DrawString(obj->GetString(),
			gcnew System::Drawing::Font(L"Arial", 10),
			System::Drawing::Brushes::Black,
			System::Drawing::PointF(x+4,y+4));
	}
	SquarePainter::SquarePainter(Server^ serv)
	{
		this->serv = serv;
	}
	void SquarePainter::print(int x, int y, myObject^ obj, System::Windows::Forms::PaintEventArgs^ e)
	{
		System::Drawing::SolidBrush^ br = gcnew System::Drawing::SolidBrush(System::Drawing::Color::LightGreen);
		e->Graphics->FillRectangle(br, x, y, 40,40);
		e->Graphics->DrawRectangle(System::Drawing::Pens::Black, x, y, 40,40);
		e->Graphics->DrawString(obj->GetString(),
			gcnew System::Drawing::Font(L"Arial", 10),
			System::Drawing::Brushes::Black,
			System::Drawing::PointF(x+4,y+4));
	}
	TrianglePainter::TrianglePainter(Server^ serv)
	{
		this->serv = serv;
	}
	void TrianglePainter::print(int x, int y, myObject^ obj, System::Windows::Forms::PaintEventArgs^ e)
	{
		System::Drawing::SolidBrush^ br = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Violet);
		array<System::Drawing::Point>^ points = gcnew array<System::Drawing::Point>(3);
		points[0] = System::Drawing::Point(x,y);
		points[1] = System::Drawing::Point(x + 40,y+80);
		points[2] = System::Drawing::Point(x-30,y+80);
		e->Graphics->FillPolygon(br, points);
		e->Graphics->DrawPolygon(System::Drawing::Pens::Black, points);
		e->Graphics->DrawString(obj->GetString(),
			gcnew System::Drawing::Font(L"Arial", 10),
			System::Drawing::Brushes::Black,
			System::Drawing::PointF(x+4,y+4));
	}
}