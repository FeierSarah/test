package test3;

class A{
	public void f() {
		System.out.println("a");
	}
}
class B extends A {
	public void g() {
		System.out.println("abc");
	}
}
public class test03 {
	public static void main(String[] args) {
		B b = new B();
		b.f();
		b.g();
	}
}
