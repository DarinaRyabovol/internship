interface IPainter{
	paint(Iobject o, GraphCoord c);
}

class GraphCoords{
	int x;
	int y;
	Graphics g;
}

interface IObject{
	getText();
}



class RectPainter:IPainter{
	paint(Iobject o, GraphCoord c){
		String text = o.getText();
		c.g.paintRect(c.x,c.y);
		c.g.paintText(text);
	}
}

class EllipcePainter:IPainter{
	paint(Iobject o, GraphCoord c){
		String text = o.getText();
		c.g.paintEllipce(c.x,c.y);
		c.g.paintText(text);
	}
}

class One:IObject{
	getText(){
		return "one";
	}
}

class Two:IObject{
	getText(){
		return "two";
	}
}



___________________


server side:

��� ������ new � �������� � �������������
����� ����������� ���� ������ ������ �� ����������� � ������

agent side:

������ �������� ����� ����������� � �������� � ��������� ����� ������ � ��� ��������

___________________


����� ����� ��������� �������� ������ 


static class Base{
	Agent**; ������ ���� �������.
	Server;

	.. �������� ��� ����������� ������!!!!
	public static AddAgent(Agent a){
	}

	.. ������ ��������..

    public static CgangeServer(Server s){
		...
	}

	���� ���� �� �����. ���� ���� ��� ����� ������������ ������� � ������� � ������ ��������� ���� ������� ���� �������.
}

________________________






	��� ����������� ������������ ������ ������� ������ ����������


class server{

	Agent agent;

	public void MakeANewOjectAndPutItToAgents(){
		case(������)
			��������: agent.AddIObjec(new RectObject());
			���� - agent.AddIObjec(new EllipceObject());
			������ -
	}

	A a = new A();

	agent.addC(a);
	agent.addY(a);

}

class A:C,G,R,Y{
}



class Agent{
	IObjects* o;
	public void AddIObjct(IObject o){
		this->o.add(o);
	}

	private void UseIt(){
		for (IObject o in this->o){
			o.paint();
		}
	}

	addC(C a){
	}

	addY(Y y){
	}
}
