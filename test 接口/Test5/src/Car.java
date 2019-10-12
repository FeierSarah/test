//Æû³µÀà
public class Car {
	private String carNum;
	private String brand;
	private String type;
	public void setCarNum(String carNum) {
		this.carNum = carNum;
	}
	public String getCarNum() {
		return carNum;
	}
	public void setBrand(String brand) {
		this.brand = brand;
	}
	public String getBrand() {
		return brand;
	}
	public void setType(String type) {
		this.type = type;
	}
	public String getType() {
		return type;
	}
	
	public Car(String carNum,String brand,String type)
	{
		this.carNum=carNum;
		this.brand=brand;
		this.type=type;
	}
	
	public void start()
	{
		System.out.println("Æô¶¯");
	}
	
	public void stop()
	{
		System.out.println("Í£Ö¹");
	}
}
