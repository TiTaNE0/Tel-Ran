package telran.books.controller;

public class booksAppl {

	public static void main(String[] args) {
		Books book1 = new Books(1250149444, "A Bad Day for Sunshine",
				"Darynda Jones", 2020, true);
		Books book2 = new Books(1524763136, "Becoming",
				"Michelle Obama", 2018, true);
		Books book3 = new Books(0062315005, "The Alchemist",
				"Paulo Coelho", 2014, false);
		
		book1.display();
		book2.display();
		book3.display();

	}

}
