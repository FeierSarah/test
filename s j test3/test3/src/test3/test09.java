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
		System.out.println("������Ϣ��"+voice);
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
			Giede giede=new Giede("ӥ","����");
			Pigeon pigeon=new Pigeon("����","�ͳ�");
			System.out.println("��������: "+giede.type+";���������� "+giede.voice+";�������ٶȣ� "+giede.flyspeed());
			System.out.println("��������: "+pigeon.type+";���������� "+pigeon.voice+";�������ٶȣ� "+pigeon.flyspeed());
		}
}

