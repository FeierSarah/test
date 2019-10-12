//����ѧ����
public class Student extends Human {
	private String num;
	private String className;
	public void setNum(String num) {
		this.num = num;
	}
	public String getNum() {
		return num;
	}
	public void setClassName(String className) {
		this.className = className;
	}
	public String getClassName() {
		return className;
	}
	
	public Student(String name,String sex,int age,int height,float weight,String num,String className)
	{
        super(name,sex,age,height,weight);
        //�ȵ��ø���Ĺ��췽������ʼ�����������
		this.num=num;
		this.className=className;
		//�ڳ�ʼ�����������е�����
	}
	
	public void study()
	{
		System.out.println(getName()+"��ѧϰ");
	}
	
	public void exam()
	{
		System.out.println(getName()+"�ڿ���");
	}
	
	//���������̳���Object���equals����
	public boolean equals(Student student)
	{
		boolean result=super.equals(student);
	    if(result)
	    {
	    	if(num.equals(student.num))
	    	{
	    		if(className.equals(student.className))
	    		{
	    			return true;
	    		}
	    		else
	    		{
	    			return false;
	    		}
	    	}
	    	else
	    	{
	    		return false;
	    	}
	    }
	    else
	    {
	    	return result;
	    }
	}
	
	public String toString()
	{
		String result=super.toString();
		result=result+";ѧ��:"+num+";";
		result=result+"�༶:"+className;
		return result;
	}
}
