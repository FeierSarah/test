
public class OilEleCar extends Car implements OilInf, EleInf {

	public OilEleCar(String carNum,String brand,String type)
	{
		super(carNum,brand,type);
	}
	@Override
	public void addOil() {
		// TODO Auto-generated method stub
		System.out.println(getCarNum()+"�ڼ���");	
	}

	@Override
	public void addEle() {
		// TODO Auto-generated method stub
		System.out.println(getCarNum()+"�ڳ��");	
	}

}
