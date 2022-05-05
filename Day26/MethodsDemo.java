import java.lang.Double;
import java.lang.Long;

public class MethodsDemo {
  public static void main(String args[]) {
     ClassWithMethods The_Class;
     String temp;
     double d;
     long l;

     The_Class = new ClassWithMethods();
     The_Class.displayText("Using ClassWithMethods:", true);
     The_Class.displayText("Half of 99 is ", false);
     d = The_Class.halfOf(99);
     temp = Double.toString(d);
     The_Class.displayText(temp, true);
     The_Class.displayText("The sum of 12345 and 997766 is ", false);
     l = The_Class.sumOf(12345, 997766);
     temp = Long.toString(l);
     The_Class.displayText(temp, true);
  }
}
