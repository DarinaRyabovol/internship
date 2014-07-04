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

все вызовы new к объектам и рисовальщикам
иметь возможность дать агенту ссылку на рисовальщик и объект

agent side:

просто вызывать метод перерисовки у пейнтера и указывать какой объект и где рисовать

___________________


былоб круто придумать передачу данных 


static class Base{
	Agent**; список всех агентов.
	Server;

	.. прочитай про статические классы!!!!
	public static AddAgent(Agent a){
	}

	.. шаблон одиночка..

    public static CgangeServer(Server s){
		...
	}

	чтоб ничо не упало. типа того что опять регистрируем агентов в сервере и сервер добавляет свои объекты этим агентам.
}

________________________






	как динамически генерировать разные объекты одного интерфейса


class server{

	Agent agent;

	public void MakeANewOjectAndPutItToAgents(){
		case(погода)
			пасмурно: agent.AddIObjec(new RectObject());
			сухо - agent.AddIObjec(new EllipceObject());
			хорошо -
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
