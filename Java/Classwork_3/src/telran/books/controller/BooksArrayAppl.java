package telran.books.controller;

public class BooksArrayAppl {

	public static void main(String[] args) {
		Books library[] = new Books[4];
		library[0] = new Books(1250149444, "A Bad Day for Sunshine",
				"Darynda Jones", 2020, true);
		library[1] = new Books(1524763136, "Becoming",
				"Michelle Obama", 2018, true);
		library[2] = new Books(0062315005, "The Alchemist",
				"Paulo Coelho", 2014, false);

	}

}
