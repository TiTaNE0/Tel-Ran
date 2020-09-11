package telran.bank.controller;

import telran.bank.model.BankAccount;

public class BankArrayAppl {
	
	public static void main(String[] args) {
		BankAccount[] bank = new BankAccount[4];
		bank[0] = new BankAccount(1000, "Peter", "Leumi", 932, 100);
		bank[1] = new BankAccount(2000, "Maria", "Leumi", 961);
		bank[3] = new BankAccount(3000, "Pupkin and sons", 123, 1000000);
		bank[4] = new BankAccount(4000, "Pupkin and sons", 123);
		
		double total = totalBalance(bank);
		System.out.println("" + total);
		
		total = totalBalanceOfAnonymus(bank);
		System.out.println("" + total);
	}

		private static double totalBalanceOfAnonymus(BankAccount[] bank) {
	//		double res = 0;
			for (int i = 0; i < bank.length; i++) {
				if (bank[i].getOwner() == null) { }
			}
		
		return 0;
	}

		private static double totalBalance(BankAccount[] bank) {
			double res = 0;
			for (int i = 0; i < bank.length; i++) {
				res += bank[i].getAmount();
			}
			return res;
		}
}
