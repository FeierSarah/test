
public class ExceptionTest {

	public static void main(String[] args) {
		System.out.println("��ʼ");
		int[] arrays=new int[4];
		try
		{
			System.out.println(5/0);
			for (int i = 0; i < 5; i++) {
				System.out.println(arrays[i]);
			}
		}
		catch(ArithmeticException ex)
		{
			System.out.println("�����쳣");
		}
		catch(ArrayIndexOutOfBoundsException ex)
		{
			System.out.println("�����±�Խ��");
		}
		catch(Exception ex)
		{
			System.out.println("�쳣");
		}
		
		System.out.println("����");

	}

}
