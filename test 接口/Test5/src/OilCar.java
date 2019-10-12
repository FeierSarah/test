
public class OilCar extends Car implements OilInf {

	public OilCar(String carNum,String brand,String type)
	{
		super(carNum,brand,type);
	}

	@Override
	public void addOil()
	{
	    System.out.println(getCarNum()+"ÔÚ¼ÓÓÍ");	
	}


}
