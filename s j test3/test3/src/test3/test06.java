package test3;
class Vehlcles{
	protected int size;
	protected String color;
	protected int seats;
	public Vehlcles(){
		
	}
	public Vehlcles(int size,String color,int seats){
		this.size = size;
		this.color = color;
		this.seats = seats;
	}
	public void display() {
		System.out.print("sizeΪ" + size + ",colorΪ" + color + ",seatsΪ" + seats);
	}	
}
class Cars extends Vehlcles{
	private int speed;
	public Cars(int size,String color,int seats,int speed) {
		super(size,color,seats);
		this.speed = speed;
	}
	public Cars() {
		
	}
	public void display() {
		super.display();
		System.out.print(";speedΪ" + speed);
	}
}
public class test06 {
	public static void main(String[] args) {
		Cars c = new Cars(2,"��ɫ",5,100);
		c.display();
	}
}
