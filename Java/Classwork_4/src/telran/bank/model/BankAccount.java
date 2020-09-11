package telran.bank.model;

public class BankAccount {
	private long account;
	private String owner;
	private String bank;
	private int branch;
	private double amount;
	
	public BankAccount(long account, String owner, String bank, int branch, double amount) {
		
		this.account =  account;
		this.owner = owner;
		this.bank = bank;
		this.branch = branch;
		this.amount = amount + 50;
	}

	public BankAccount(long account, String owner, String bank, int branch) {
		super();
		this.account = account;
		this.owner = owner;
		this.bank = bank;
		this.branch = branch;
		amount = 50;
	}


	public BankAccount(String owner, long account, String bank, int branch) {
		super();
		this.account = account;
		this.owner = owner;
		this.bank = bank;
		this.branch = branch;
		amount = 50;
	}

	public BankAccount(long account, String bank, int branch) {
		this.account = account;
		this.bank = bank;
		this.branch = branch;
	}

	public BankAccount(long account, String bank, int branch, double amount) {
		this.account = account;
		this.bank = bank;
		this.branch = branch;
		this.amount = amount;
	}

	public long getAccount() {
		return account;
	}

	public String getOwner() {
		return owner;
	}

	public String getBank() {
		return bank;
	}

	public int getBranch() {
		return branch;
	}

	public double getAmount() {
		return amount;
	}
	
	public void debit(double sum) {
		amount += sum;
	}
	
	public boolean credit(double sum) {
		boolean res = false;
		if (sum <= amount) {
			amount -= sum;
			//return true; 
		} 
		return res; //return false один return или два
	}
	
	public void display() {
		String res;
		if (owner != null) {
			res = "Owner: " + owner;
		} else {
			res = "Owner: Anonymus";
		}
		res +=  ", Account: " + account + ", Ammount: " + amount + ", Bank: " + bank + ", Branch: " + branch;

		System.out.println(res);
	}
 	
	public void display(boolean gender) {
		String res;
		if (gender) {
			res = "Mr.";
		} else {
			res = "Mrs.";
		}

	}

}