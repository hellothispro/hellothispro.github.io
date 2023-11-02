class Note extends Thread{ // "Thread" is a predefined internal class provided by Java Standard Library
  public void run(){
    for (int i=1;i<=5 ;i++ ){
      System.out.println("thread Note:"+ i);
    }
  }
}
class Book extends Thread{
  public void run(){
    for (int k=1;k<=5 ;k++ ){ 
      System.out.println("Thread Book:" + k);
    } 
  }
}
class Mythread{
  public static void main (String[] args){
    Note n= new Note(); n.start();
    Book b= new Book(); b.start();
  }
}