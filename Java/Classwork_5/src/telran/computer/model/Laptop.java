package telran.computer.model;

public class Laptop extends Computer {

		private double weight;
		private int battery;
		
		public Laptop(int ram, int hdd, String cpu, String brand, double weight, int battery) {
			super(ram, hdd, cpu, brand);
			this.weight = weight;
			this.battery = battery;
		}

		public double getWeight() {
			return weight;
		}

		public void setWeight(double weight) {
			this.weight = weight;
		}

		public int getBattery() {
			return battery;
		}

		public void setBattery(int battery) {
			this.battery = battery;
		}

		
		
		public void display() { // переопределение метода / method override
			super.display();
			System.out.print(", Weight: " + weight + ", Battery: " + battery);
		}
		
}
