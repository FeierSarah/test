//ģ�����
public class UI {

	public static void main(String[] args) {
		//TestInf test=new Test();
		//���ò�������ʵ�����ӿڶ���
		TestInf test=new BL();
		//��ҵ���߼�����ɺ���ҵ���߼�����ʵ�����ӿڶ���
		System.out.println(test.getScoreBySnameAndCname("����", "���ݿ�"));

	}

}
class Test implements TestInf//������
{
	public int getScoreBySnameAndCname(String sname,String cname)
	{
		return 0;
	}
}
