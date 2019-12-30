package test3;
import java.util.*;

class Animal{
	public String type,voice;
	public Animal(){
		
	}
	public Animal(String type,String voice){
		this.type=type;
		this.voice=voice;
	}
	public String toString(){
		return type;
	}
	public void sound(){
		System.out.println("叫声信息："+voice);
	}
}
interface Flyable{
	public double flyspeed();
}
class Giede extends Animal implements Flyable{
	public Giede(String type,String voice){
		super(type,voice);
	}	
	public double flyspeed() {
		return 40;
	}
}
class Pigeon extends Animal implements Flyable{
	public Pigeon(String type,String voice){
		super(type,voice);
	}	
	public double flyspeed() {
		return 30;
	}
}
public class test09 {
		public static void main(String args[]){
			Giede giede=new Giede("鹰","尖锐");
			Pigeon pigeon=new Pigeon("鸽子","低沉");
			System.out.println("动物类型: "+giede.type+";动物声音： "+giede.voice+";最大飞行速度： "+giede.flyspeed());
			System.out.println("动物类型: "+pigeon.type+";动物声音： "+pigeon.voice+";最大飞行速度： "+pigeon.flyspeed());
		}
}

