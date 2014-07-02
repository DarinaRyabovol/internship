
namespace internship
{
	ref class myObject;
	ref class Server;
	ref class Agent;
	using namespace System;

	public ref class Painter
	{
	private:
		System::DateTime^ dt;
		Server^ myServ;
	private:
		void printEllipce(System::Windows::Forms::PaintEventArgs^ e, int color);
	public:
		Painter(Server^ Serv);
		void paint(System::Windows::Forms::PaintEventArgs^ e, myObject^ obj);
		void paint(System::Windows::Forms::PaintEventArgs^ e);
	};
}