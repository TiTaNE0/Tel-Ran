package telran.supermarket.model;

public class Bread {
	protected String name;
	protected int netto;
	protected String flavour;
	protected Boolean sugar;
	
	
	public Bread() {
		
	}
	
	
	public Bread(String name, int netto, String flavour, boolean sugar) {
		this.name = name;
		this.netto = netto;
		this.flavour = flavour;
		this.sugar = sugar;
		
	}
	
	public String getName() {
		return name;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	
	public int getNetto() {
		return netto;
	}
	
	public void setNetto(int netto) {
		this.netto = netto;
	}
	
	
	public String getFlavour() {
		return flavour;
	}

	public void setFlavour(String flavour) {
		this.flavour = flavour;
	}
	
	
	public boolean getSugar() {
		return sugar;
	}
	
	public void setSugar(boolean sugar) {
		this.sugar = sugar;
	}
	
	
	
	public void display() {
		System.out.print(name + "made of " + flavour + ", " + netto + " gramm net weigt");
		if (sugar == true) {
			System.out.print(", sugar FREE");
		} else {
			System.out.print(", contains SUGAR!");
		}
	}
}











