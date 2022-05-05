import java.lang.String;
import java.lang.Double;

public class OverloadDemo 
{
   public static void main(String args[]) 
   {
      Overloaded MyClass;
      double d;

      MyClass = new Overloaded();
      System.out.println("Adding two numbers: ");
      System.out.print("  The sum of 1.4 and 6.7 is ");
      d = MyClass.sumOf(1.4, 6.7);
      System.out.println(Double.toString(d));
      System.out.println("Adding three numbers: ");
      System.out.print("  The sum of 1.4, 6.7, and 12.2 is ");
      d = MyClass.sumOf(1.4, 6.7, 12.2);
      System.out.println(Double.toString(d));
      System.out.println("Adding four numbers: ");
      System.out.print("  The sum of 1.4, 6.7, 12.2, and -4.1 is ");
      d = MyClass.sumOf(1.4, 6.7, 12.2, -4.1);
      System.out.println(Double.toString(d));
   }
}
