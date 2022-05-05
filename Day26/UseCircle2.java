import java.lang.String;
import java.lang.Double;

public class ConstructorDemo {
  public static void main(String args[]) {

    circle c1;
    circle c2;
    circle c3;

    c1 = new circle();
    c2 = new circle(99.99);
    c3 = new circle(0.001, "Harold");
    System.out.println("For c1:");
    System.out.println("  The radius is " + Double.toString(c1.radius));
    System.out.println("  The name is " + c1.name);
    System.out.println("For c2:");
    System.out.println("  The radius is " + Double.toString(c2.radius));
    System.out.println("  The name is " + c2.name);
    System.out.println("For c3:");
    System.out.println("  The radius is " + Double.toString(c3.radius));
    System.out.println("  The name is " + c3.name);
  }
}
