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


