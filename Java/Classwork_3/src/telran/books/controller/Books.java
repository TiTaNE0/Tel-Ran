package telran.books.controller;

public class Books {
	private long isbn;
	private String title;
	private String author;
	private int year;
	private boolean hardCover;

	public Books(long isbn1, String title1, String author1,
			int year1, boolean hardCover1) {
		setIsbn(isbn1);
		setTitle(title1);
		setAuthor(author1);
		setYear(year1);
		setHardcover(hardCover1);
	}

	public void setIsbn(long isbn1) {
		if (isbn1 >= 1_000_000_000 && isbn1 <= 9_999_999_999l) {
		isbn = isbn1;
		} else {
			System.out.println("ISBN10 Standart in use");
		}
	}
	
	public long getIsbn() {
		return isbn;
	}
	
	
	public void setTitle(String title1) {
		title = title1;
	}
	
	public String getTitle() {
		return title;
	}
	
	
	private void setAuthor(String author1) {
		author = author1;
		
	}
	
	public String getAuthor() {
		return author;
	}
	
	public void setYear(int year1) {
		if (year1 >= -10000 && year1 <= 2030) {
			year = year1;
		} else {
			System.out.println("Out of range");
		}
	}
	
	public int getYear() {
		return year;
	}
	
	public void setHardcover(boolean hardCover1) {
		hardCover = hardCover1;
	}
	
	public boolean getHardCover() {
		return hardCover;
	}
	
	
	public void display() {
		System.out.println("\nISBN:" + isbn + "\nTITLE: \"" +
				title + "\"" + "\nAUTHOR: " + author + "\nYEAR:" +
				+ year + "\nHardcover: " + hardCover);
	}
}
