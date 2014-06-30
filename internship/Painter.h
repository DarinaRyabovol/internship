
namespace internship
{
	class myObject;
	ref class Server;
	ref class Agent;
	using namespace System;

	public ref class Painter
	{
	private:
		Server^ myServ;
		Agent^ myAgent;
	private:
		void printEllipce(int color);
	public:
		Painter(Server^ Serv);
		void paint(myObject* obj);
		System::Drawing::Graphics^ paint();
	};
}