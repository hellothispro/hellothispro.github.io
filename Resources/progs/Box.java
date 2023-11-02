class Box { 
  double h,w,d; 
  Box() { 
    h=w=d=10;
  } 
  Box(double h, double w, double d) {
    this.h=h;
    this.w=w;
    this.d=d;
  } 
  void volume() { 
    double v= h*w*d;
    System.out.println("Volume:" + v);
  } 
} 
class BoxTest { 
   public static void main(String a[]) { 
      Box b = new Box();
      b.volume(); 
      Box b1 = new Box(5,2,3);
      b1.volume();
    } 
}
