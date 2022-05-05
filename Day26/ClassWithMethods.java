import java.lang.String;

public class ClassWithMethods {

    public void displayText(String message, boolean newline) {
    // Displays message on the console, moving to
    // the start of a new line after message only
    // if newline is true.
    if (newline)
        System.out.println(message);
    else
        System.out.print(message);
    }

    public double halfOf(double value) {
    // Returns half of its argument.
    return value / 2;
    }

    public long sumOf(long value1, long value2) {
    // Returns the sum of its arguments.
    long result;
    result = value1 + value2;
    return result;
    }
}
