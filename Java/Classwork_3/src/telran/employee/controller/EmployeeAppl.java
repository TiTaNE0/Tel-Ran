package telran.employee.controller;

public class EmployeeAppl {

	public static void main(String[] args) {
		Employee peter;
		peter = new Employee(123456789, "Peter", 15000, 2.25);
		peter.display();
		Employee john = new Employee(987654321, "John", 17000, 5.25);
		john.display();
		double tax = peter.taxIsrael();
		System.out.println(tax);
		tax = peter.taxIsrael();
		System.out.println(tax);
		
//		peter.salary = 3000;
//		System.out.println(peter.salary);
	}
}	
		
