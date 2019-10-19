//求满足1！+2！+3！+ …+n!≤9999的最大整数n 
public class Maxnum {
	public static void main(String[] args) {
		int num = 9999, count = 0, i = 1;
		while(num >= 0) {
			count++;
			i *= count;
			num -= i;
		}
		System.out.print(count); 
	}
}
