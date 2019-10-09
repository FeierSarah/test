//子类学生类
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
        //先调用父类的构造方法来初始化父类的属性
		this.num=num;
		this.className=className;
		//在初始化自身所具有的特性
	}
	
	public void study()
	{
		System.out.println(getName()+"在学习");
	}
	
	public void exam()
	{
		System.out.println(getName()+"在考试");
	}
	
	//覆盖隐含继承于Object类的equals方法
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
		result=result+";学号:"+num+";";
		result=result+"班级:"+className;
		return result;
	}
}
