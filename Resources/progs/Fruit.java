abstract class Fruit {
  abstract String getColour();
}
class Apple extends Fruit {
  String getColour() {
    return "red";
  }
}
class Test {
  public static void main(String[]args) {
    Apple a = new Apple();
    System.out.println("Color of Apple:"+ a.getColour());
  }
}