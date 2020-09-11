package telran.string.controller;

public class StringAppl {

	public static void main(String[] args) {
		String str = "Hello ";
		String str1 = "World!";
		String str3 = str + str1 + 5;
		System.out.println(str3);	
		greeting("Evgeny");
		greeting("Gleb");
		
		double res = calculator(3, 5, "*");
		System.out.println("res = " + res);
	}
	
	public static void greeting(String name) {
		String str = name + ", welcome to Israel!";
		System.out.println(str);
	}

	public static double calculator(double arg1, double arg2, String oper) {
		switch(oper) {
		case "+": return arg1 + arg2;
		case "-": return arg1 - arg2;
		case "*": return arg1 * arg2;
		case "/": return arg1 / arg2;
		
		default:
			System.out.println("Wrong operation");
			return 0;
		
		}
	}
}
