
public class Test {

	public static void main(String[] args) {
		System.out.println("Hello World!");
		System.out.println("I am a Java developer");
		byte a = 127;
		a++;
		short b = 10500;
		System.out.println("a = " + a + ", b = " + b);
		char c = 'H';
		c++;
		System.out.println(c);
		int x = 532;
		System.out.println(x);
		b = (short)(x + 10);
		System.out.println(b);
		long z = 100000000000l;
		System.out.println(z);
		float pi = 3.14f;
		System.out.println(pi);
		boolean check = x > 100;
		System.out.println(check);
		int arg1 = 18;
		int arg2 = 10;
		int res = max(arg1, arg2);
		System.out.println("max = " + res);
		res =  min(arg1, arg2);
		System.out.println("min = " + res);
}
	
	private static int min(int x, int y) {
		if (x < y) {
			return x;
		} else {
			return y;
		}
	}
	
	public static int max(int x, int y) {
		return x > y ? x : y;
	}
}
