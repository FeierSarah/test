package year;

public class Year {
	public static String ShengXiao(int year) {
		int year2 = 1999;//��ǰ��֪1999��Ϊ����
		String[] shengxiao = {"��", "ţ", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��"}; 
		int res =  (year - year2 + 2400) % 12;
		return shengxiao[res];
	}
	public static void main(String[] args) {
		System.out.println("��" + ShengXiao(1879));
	}
}
