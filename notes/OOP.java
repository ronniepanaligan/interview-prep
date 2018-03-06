//INHERITANCE
// a way for a class (derived class) to inherit varaibles and methods from another class (base class)
// has-a relationship
// code re-usability

/* POLYMORPHISM
/ having many shapes, is-a relationship
/ Polymorphosm occurs when you define a reference variable with a base type, but point it to an instance of the derived type.
/ allowing objects having different internal structures to share the same external interface and used in implemeting inherotamce

/ overloading, compile-time */
class Calculation {
  void sum(int a,int b){System.out.println(a+b);}
  void sum(int a,int b,int c){System.out.println(a+b+c);}

  public static void main(String args[]) {
    Calculation obj=new Calculation();
    obj.sum(10,10,10);  // 30
    obj.sum(20,20);     //40
  }
}

//overriding, run-time
class Animal {
   public void move(){
      System.out.println("Animals can move");
   }
}

class Dog extends Animal {

   public void move() {
      System.out.println("Dogs can walk and run");
   }
}

public class TestDog {

   public static void main(String args[]) {
      Animal a = new Animal(); // Animal reference and object
      Animal b = new Dog(); // Animal reference but Dog object

      a.move();//output: Animals can move

      b.move();//output:Dogs can walk and run
   }
}

// ABSTRACTION
// Abstract class -> cannot be instantiated, declared wiht abstract keyword, can have abstract(method without body) and non-abstract method.
// used to be a base class and so a derived class can extend its own version of the abstract method(s).


// ENCAPSULATION
// it is a protective shield that prevents the data from being accessed by the code outside this shield.
// encapsulation -> wrapping the data (variables) and code acting on the data (methods) together as a single unit.
// the variables of a class will be hidden from other classes, and can be accessed only through the methods of their current class called data-hiding
// declare variables of a class as private
// provide public setter and getter methods to modify and view the variables values
// benefits ->
// 1. the fields of a class can be made read-only or write-only
// 2. a class can have total control over what is stored in its fields

public class EncapTest {
   private String name;
   private String idNum;
   private int age;

   public int getAge() {
      return age;
   }

   public String getName() {
      return name;
   }

   public String getIdNum() {
      return idNum;
   }

   public void setAge( int newAge) {
      age = newAge;
   }

   public void setName(String newName) {
      name = newName;
   }

   public void setIdNum( String newId) {
      idNum = newId;
   }
}
