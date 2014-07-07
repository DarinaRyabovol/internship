namespace internship
{
	public interface class IObject
	{
		System::String^ GetString();
	};

	ref class myObject: IObject
	{
	protected: System::String^ myString;
	public:
		virtual System::String^ GetString() = IObject::GetString 
		{
			return myString;
		}
	};

	ref class OneObject : public myObject
	{
	public:
		OneObject()
		{
			myString = gcnew System::String(L"1");
		}
	};
	ref class TwoObject : public myObject
	{
	public:
		TwoObject()
		{
			myString = gcnew System::String(L"2");
		}
	};
	ref class ThreeObject : public myObject
	{
	public:
		ThreeObject()
		{
			myString = gcnew System::String(L"3");
		}
	};
}