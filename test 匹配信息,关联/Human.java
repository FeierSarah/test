//父类人类
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
		System.out.println(name+"在吃饭");
	}
	
	public void sleep()
	{
		System.out.println(name+"在睡觉");
	}
	
	//覆盖隐含继承于Object类的equals方法
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
		result="姓名:"+name+";";
		result=result+"性别:"+sex+";";
		result=result+"年龄:"+age+"岁;";
		result=result+"身高:"+height+"厘米;";
		result=result+"体重:"+weight+"公斤";
		return result;
	}

}
