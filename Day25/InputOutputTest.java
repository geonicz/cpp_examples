import java.lang.System;
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;

public class InputOutputTest {

    public static void main(String args[]) throws IOException {
    // Set up to read lines from the keyboard.
    BufferedReader kb;
    String s1;

    kb = new BufferedReader(new InputStreamReader(System.in));
    System.out.println("Enter a line of text: ");
    s1 = kb.readLine();
    System.out.println("You entered " + s1);

    }
}
