
public class ExceptionTest {

	public static void main(String[] args) {
		System.out.println("开始");
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
			System.out.println("算数异常");
		}
		catch(ArrayIndexOutOfBoundsException ex)
		{
			System.out.println("数组下标越界");
		}
		catch(Exception ex)
		{
			System.out.println("异常");
		}
		
		System.out.println("结束");

	}

}
