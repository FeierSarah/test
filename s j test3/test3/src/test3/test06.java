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
		System.out.print("size为" + size + ",color为" + color + ",seats为" + seats);
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
		System.out.print(";speed为" + speed);
	}
}
public class test06 {
	public static void main(String[] args) {
		Cars c = new Cars(2,"白色",5,100);
		c.display();
	}
}
