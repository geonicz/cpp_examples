import java.lang.System;
import java.lang.String;

public class StringTest {

    public static void main(String args[]) {

    String s1 = "Teach Yourself C in 21 Days";

    System.out.println("The original string: " + s1);
    System.out.println("Converted to uppercase: " + s1.toUpperCase());
    System.out.println("Converted to lowercase: " + s1.toLowerCase());
    System.out.println("The first Y is at position " + s1.indexOf('Y'));
    System.out.println("Replacing 'e' with '!': "+s1.replace('e', '!'));
    System.out.println("This string has " + s1.length()+" characters.");
    }
}
