
public class ExceptionTest1 {

	public static void main(String[] args) {
		try
		{
		    A();
		}
		catch(ArrayIndexOutOfBoundsException ex)
		{
			System.out.println("数组下标越界");
		}

	}
	public static void A()throws ArrayIndexOutOfBoundsException
	{
		B();
	}
	public static void B()throws ArrayIndexOutOfBoundsException
	{
		C();
	}
	public static void C()throws ArrayIndexOutOfBoundsException
	{
		int[] arrays=new int[4];
		for (int i = 0; i < 5; i++) {
			System.out.println(arrays[i]);
		}
	}
}
