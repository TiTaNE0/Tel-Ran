public class hw_les1 {

	public static void main(String[] args) {
	
	System.out.println("Hello");
	
	int sum = numberSum(1234);
	System.out.println("a = " + sum);

	System.out.println(countDigits(123456789));
	
	luckyTicket(559964);
	luckyTicket1(559964);
	
	}

	private static void luckyTicket(int num) {
		int res = 0;
		while (num != 0) {
			res = num % 10 - res;
			num /= 10;
		}
		if (res != 0) {
			System.out.println("Unlucky");
		} else {
			System.out.println("Lucky");
		}
		
	}

	private static void luckyTicket1(int num){
		int res1 = 0;
		int res2 = 0;
		int pos = 1;
		while (num != 0) {
			int digit = num % 10;
			if (pos % 2 == 0) {
				res1 += digit;
			} else {
				res2 += digit;
			}
			num /= 10;
			pos++;
		}
		if (res1 == res2) {
			System.out.println("Lucky\n");
		} else {
			System.out.println("Unlucky\n");
		}
	}

	private static int countDigits(int num){
		int res = 0;
		do {
			num /= 10;
			res++;
		} while (num != 0);
		return res;
	}

	private static int numberSum(int num) {
		int res = 0;
		while (num != 0) {
			int digit = num % 10;
			res += digit;
			num /= 10;
		}
		return res;
	}
}