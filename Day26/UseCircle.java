import java.lang.String;
import java.lang.Double;

public class ConstructorDemo {
   public static void main(String args[]) {

      circle c1;
      c1 = new circle(1.25);
      System.out.println("The circle's radius is " 
                       + Double.toString(c1.radius));
   }
}
