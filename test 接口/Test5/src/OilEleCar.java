
public class OilEleCar extends Car implements OilInf, EleInf {

	public OilEleCar(String carNum,String brand,String type)
	{
		super(carNum,brand,type);
	}
	@Override
	public void addOil() {
		// TODO Auto-generated method stub
		System.out.println(getCarNum()+"在加油");	
	}

	@Override
	public void addEle() {
		// TODO Auto-generated method stub
		System.out.println(getCarNum()+"在充电");	
	}

}
