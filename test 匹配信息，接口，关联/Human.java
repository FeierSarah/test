//��������
public class Human {
	private String name;
	private String sex;
	private int age;
	private int height;
	private float weight;
	public void setName(String name) {
		this.name = name;
	}
	public String getName() {
		return name;
	}
	public void setSex(String sex) {
		this.sex = sex;
	}
	public String getSex() {
		return sex;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public int getAge() {
		return age;
	}
	public void setHeight(int height) {
		this.height = height;
	}
	public int getHeight() {
		return height;
	}
	public void setWeight(float weight) {
		this.weight = weight;
	}
	public float getWeight() {
		return weight;
	}
	
	public Human(String name,String sex,int age,int height,float weight)
	{
		this.name=name;
		this.sex=sex;
		this.age=age;
		this.height=height;
		this.weight=weight;
	}
	
	public void eat()
	{
		System.out.println(name+"�ڳԷ�");
	}
	
	public void sleep()
	{
		System.out.println(name+"��˯��");
	}
	
	//���������̳���Object���equals����
	public boolean equals(Human human)
	{
		boolean result=false;
		if(name.equals(human.name))
		{
			if(sex.equals(human.sex))
			{
				if(age==human.age)
				{
					if(height==human.height)
					{
						if(weight==human.weight)
						{
							result=true;
						}
					}
				}
			}
		}
		return result;
	}
	
	public String toString()
	{
		String result="";
		result="����:"+name+";";
		result=result+"�Ա�:"+sex+";";
		result=result+"����:"+age+"��;";
		result=result+"���:"+height+"����;";
		result=result+"����:"+weight+"����";
		return result;
	}

}
