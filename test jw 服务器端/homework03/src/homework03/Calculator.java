package homework03;

public class Calculator {
	private double a;
	private double b;
	private String operator;
	private double result;
	public Calculator() {};
	public double getA() {
		return a;
	}
	public void setA(double a) {
		this.a = a;
	}
	public double getB() {
		return b;
	}
	public void setB(double b) {
		this.b = b;
	}
	public String getOperator() {
		return operator;
	}
	public void setOperator(String operator) {
		this.operator = operator;
	}
	public double fun(double a,double b,String operator) {
		switch(operator) {
			case "+":result=a+b;break;
			case "-":result=a-b;break;
			case "*":result=a*b;break;
			case "/":result=a/b;break;
		}
		return result;
	}
	
}
