package telran.computer.controller;

import telran.computer.model.Computer;
import telran.computer.model.Laptop;
import telran.computer.model.Smartphone;

public class ComputerAppl {

		public static void main(String[] args) {
			Computer comp1 = new Computer(6, 320, "i5", "Dell");
			comp1.display();
			
			Laptop lap1 = new Laptop(8, 512, "i7", "Acer", 2.1, 120);
			System.out.println();
			lap1.display();
			System.out.println();
			Smartphone smart1 = new Smartphone(6, 64, "Snapdragon", "Samsung", 0.150, 180, 814372938);
			smart1.display();
		}
}
