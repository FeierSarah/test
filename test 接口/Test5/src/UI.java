//模拟界面
public class UI {

	public static void main(String[] args) {
		//TestInf test=new Test();
		//先用测试类来实例化接口对象
		TestInf test=new BL();
		//当业务逻辑类完成后用业务逻辑类来实例化接口对象
		System.out.println(test.getScoreBySnameAndCname("张三", "数据库"));

	}

}
class Test implements TestInf//测试类
{
	public int getScoreBySnameAndCname(String sname,String cname)
	{
		return 0;
	}
}
