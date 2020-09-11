package telran.supermarket.controller;

import telran.supermarket.model.Bread;

public class SupermarketAppl {

	public static void main(String[] args) {
		
		Bread[] bread = new Bread[5];
		bread[0] = new Bread("Khala", 150, "wheat", true);
		bread[1] = new Bread("Baget", 120, "wheat", false);
		bread[2] = new Bread("Chiabatta", 160, "wheat/rye", false);
		bread[3] = new Bread("Rizhsky", 190, "rye", true);
		bread[4] = new Bread("Khalot", 200, "wheat", false);

		bread[1].display();
	}
	
}

