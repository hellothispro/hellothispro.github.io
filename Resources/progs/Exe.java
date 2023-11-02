class Exe {
  public static void main(String[] args) {
    try {
      int a = 100, b = 0, c;
      c = a / b;
      System.out.println("c = " + c);
    } catch (Exception e) {
      System.out.println("b <>0");
    }
  }
}