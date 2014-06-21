
public class myObject
{
private:
	int shape;
	int color;
public:
	myObject()
	{
		this->color = 0;
		this->shape = 0;
	}
	myObject(int shape, int color)
	{
		this->color = color;
		this->shape = shape;
	}
public:
	int getShape()
	{
		return shape;
	}
	int getColor()
	{
		return color;
	}
public:
	~myObject()
	{
	}
};