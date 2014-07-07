
namespace internship
{
	ref class myObject;
	ref class Server;
	using namespace System;

	public interface class IPainter
	{
		void print(int x, int y, myObject^ obj, System::Windows::Forms::PaintEventArgs^ e);
	};

	public ref class Painter : IPainter
	{
	private:
	protected: Server^ serv;
	public:
		virtual void print(int x, int y, myObject^ obj, System::Windows::Forms::PaintEventArgs^ e)  abstract = IPainter::print;
	};

	public ref class RoundPainter : Painter
	{
	public: virtual void print(int x, int y, myObject^ obj, System::Windows::Forms::PaintEventArgs^ e) override;
			RoundPainter(Server^ serv);
	};
	public ref class SquarePainter : Painter
	{
	public: virtual void print(int x, int y, myObject^ obj, System::Windows::Forms::PaintEventArgs^ e) override;
			SquarePainter(Server^ serv);
	};
	public ref class TrianglePainter : Painter
	{
	public: virtual void print(int x, int y, myObject^ obj, System::Windows::Forms::PaintEventArgs^ e) override;
			TrianglePainter(Server^ serv);
	};
}