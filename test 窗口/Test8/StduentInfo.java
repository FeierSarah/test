
public class StduentInfo {
	private String num;
	private String name;
	private String sex;
	public void setNum(String num) {
		this.num = num;
	}
	public String getNum() {
		return num;
	}
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
	
	public StduentInfo(String num,String name,String sex)
	{
		this.num=num;
		this.name=name;
		this.sex=sex;
	}
}
