public class ClassBasicsDemo {
   public static void main(String args[])
   {
     SimpleClass MyClass;
   
     MyClass = new SimpleClass();
     MyClass.data = 1.2345;
     MyClass.text = "A class act.";
     System.out.print("The number stored in MyClass is ");
     System.out.println(MyClass.data);
     System.out.print("The text stored in MyClass is ");
     System.out.println(MyClass.text);
  }
}
