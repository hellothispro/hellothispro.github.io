class Fruit {
  String color;
}
class Apple extends Fruit {
  Apple() {
    super.color = "red";
  }
}
class Test {
  public static void main(String[] args) {
    Apple a = new Apple();
    System.out.println("color:"+ a.color);
  }
}