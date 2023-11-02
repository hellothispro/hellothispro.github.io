class C { 
  static int x=10;
} 
interface I { 
  int y=20;
} 
class Multiply extends C implements I { 
  public static void main(String[]args){
    System.out.println("Multiplication:"+ x*y);
  }
}
