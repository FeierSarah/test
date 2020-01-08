package test3;

class Temperature{
	private double c;
	private double f;
	public Temperature() {
	}
    public void setCelsius(double c) {
        this.c = c;
    }
    public double getCelsius() {
        return c;
    }
    public void setFahrenhei(double f) {
        this.f = f;
    }
    public double getFahrenheit() {
        return f;
    }
}
public class test12 {
	 public static void main(String[] args) {
		 Temperature t = new Temperature();
	 }

}
