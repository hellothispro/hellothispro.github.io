class Vehicle{
  void run() {
    System.out.println("Vehicle is running");
  }
}
class Bike extends Vehicle{
  void run() {
    System.out.println("Bike is running safely");
  }
  public static void main(String args[]) {
    Vehicle obj1 = new Vehicle();
    obj1.run();
    Vehicle obj2 = new Bike();
    obj2.run();
  }
}
// class Vehicle{ void run(){
// System.out.println("Vehicle is running"); } }
// class Bike extends Vehicle{
// public static void main(String args[]){
// Bike obj = new Bike();
// obj.run(); } }