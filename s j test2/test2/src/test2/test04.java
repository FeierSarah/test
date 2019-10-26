package test2;

class MyInteger{
	private int value;
	public MyInteger(int x) {
		this.value = x;
	}
	public boolean isEven() {
		if(value % 2 == 1)
			return true;
		else
			return false;
	}
	public boolean isOdd() {
		if(value % 2 == 0)
			return true;
		else
			return false;
	}
	public boolean isPrime() {
		for(int i = 2; i < value; i++) {
			if(value % i == 0)
				continue;
			return true;
		}
		return false;
	}
}

public class test04 {
	public static void main(String[] args) {
		MyInteger i1 = new MyInteger(23);
		System.out.println(i1.isEven());
		System.out.println(i1.isOdd());
		System.out.println(i1.isPrime());
	}
}
