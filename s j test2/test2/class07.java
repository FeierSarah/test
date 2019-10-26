package test2;

class Account{
	private int id;
	private double balance;
	private double annualInterestRate;
	private String dataCreated;
	public Account() {
		this.id = 0;
		this.balance = 0;
		this.annualInterestRate = 0;
		this.dataCreated = "2019年10月26日";
	}
	public Account(int id, double balance, double annualInterestRate, String dataCreated) {
		this.id = id;
		this.balance = balance;
		this.annualInterestRate = annualInterestRate;
		this.dataCreated = dataCreated;
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public double getBalance() {
		return balance;
	}
	public void setBalance(double balance) {
		this.balance = balance;
	}
	public double getAnnualInterestRate() {
		return annualInterestRate;
	}
	public void setAnnualInterestRate(double annualInterestRate) {
		this.annualInterestRate = annualInterestRate;
	}
	public String getDataCreated() {
		return dataCreated;
	}
	public double getMonthlyInterestRate() {
		return this.annualInterestRate / 12;
	}
	public void withDraw(double x) {
		this.balance = this.balance - x;
	}
	public void deposit(double x) {
		this.balance = this.balance + x;
	}
}
public class class07 {
	public static void main(String[] args) {
		Account a = new Account(1122, 20000, 4.5, "2019年");
		a.withDraw(2500);
		a.deposit(3000);
		System.out.println(a.getBalance());
		System.out.println(a.getMonthlyInterestRate());
	}
}
