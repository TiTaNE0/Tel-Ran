package telran.computer.model;

public class Computer {

		protected int ram; 				// если модификатор не указан, то его видимость зависит от местонахождения в пакете
		protected int hdd; 				// private / protected / default (package protected) / public
		protected String cpu; 			// 
		protected String brand; // поменяли private на protected, чтобы использовать поля
		
		public Computer() {
		}
		// 				CLASS	PACKAGE		INHERITANT	PROTECTED
		// PRIVATE		  1		0			0			0
		// DEFAULT		  1		1			0			0
		// PROTECTED	  1		1			0			0
		// PUBLIC		  1		1			1			1
		//


		public Computer(int ram, int hdd, String cpu, String brand) {
			this.ram = ram;
			this.hdd = hdd;
			this.cpu = cpu;
			this.brand = brand;
		}


		public int getRam() {
			return ram;
		}



		public void setRam(int ram) {
			this.ram = ram;
		}



		public int getHdd() {
			return hdd;
		}



		public void setHdd(int hdd) {
			this.hdd = hdd;
		}



		public String getCpu() {
			return cpu;
		}


		public void setCpu(String cpu) {
			this.cpu = cpu;
		}


		public String getBrand() {
			return brand;
		}

		public void setBrand(String brand) {
			this.brand = brand;
		}

		
		public void display() { 
			System.out.print("Brand: " + brand + ", CPU, " + cpu + ",RAM: "
		+ ram + ", HDD: " + hdd);
		}


}
