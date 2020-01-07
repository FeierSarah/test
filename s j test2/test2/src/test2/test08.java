package test2;

import java.io.*;
class Calendar {
	private static int year;
	private static String []months = {"Januray", "February", "March", "April", "May", "June", 
			"July", "Augest", "September", "October", "November", "December"};
	public Calendar() {
		
	}
	public static long firstDayofYear(int y) {
		long n;
		n = 365 * y;
		for(int i = 1;i < y;i++)
			if(leapyear(i))
				n++;
		return (int)(n%7);
	}
	public static boolean leapyear(int y) {
		boolean isleapyear = true;
		if((y%4==0 && y%100!=0) || y%400 == 0)
			return isleapyear;
		else {
			isleapyear = false;
			return isleapyear;
		}
	}
	public static int monthofDay(int month) {
		if(month==1||month==3||month==5||month==7
				||month==8||month==10||month==12)
			return 31;
		if(month==4||month==6||month==9||month==11)
			return 30;
		if(month==2) {
			if(leapyear(year))
				return 29;
			else
				return 28;
		}
		else
			return 0;
	}
	public static void printmonth(int y) {
		System.out.println("Please input years: " + y);
		for(int i = 1; i <= months.length; i++) {
			System.out.println("Month's name is " + months[i - 1]);
			System.out.println("=====================");
			System.out.println("日   一  二   三  四   五  六");
			for(int k = 1; k <= y; k++) {
				System.out.print("   ");
			} 
			for(int d = 1; d <= monthofDay(i);d++) {
				if(d < 10)
					System.out.print(d + "  ");
				else
					System.out.print(d + " ");
				y = (y+1) % 7;
				if(y == 0)
					System.out.println();
			}
			System.out.println();
		}
	}
}

public class test08 {
	public static void main(String[] args) throws IOException {
		  Calendar.printmonth(2018);
	}
}
