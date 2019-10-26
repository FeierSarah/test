package test2;

class MyDate{
	private int year;
	private int month;
	private int day;
	public int getYear() {
		return year;
	}
	public int getMonth() {
		return month;
	}
	public int getDay() {
		return day;
	}
	public MyDate() {
		this.year = 2018;
		this.month = 1;
		this.day = 1;
	}
	public MyDate(int y, int m, int d) {
		this.year = y;
		this.month = m;
		this.day = d;
	}
	public void showDate() {
		System.out.println(year + "Äê" + month + "ÔÂ" + day + "ÈÕ");
	}
}
public class test02 {
	public static void main(String[] args) {
		MyDate Date = new MyDate(2019, 10, 26);
		Date.showDate();
	}
}
