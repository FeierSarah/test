package year;

public class Year {
	public static String ShengXiao(int year) {
		int year2 = 1999;//提前得知1999年为兔年
		String[] shengxiao = {"鼠", "牛", "虎", "兔", "龙", "蛇", "马", "羊", "猴", "鸡", "狗", "猪"}; 
		int res =  (year - year2 + 2400) % 12;
		return shengxiao[res];
	}
	public static void main(String[] args) {
		System.out.println("属" + ShengXiao(1879));
	}
}
