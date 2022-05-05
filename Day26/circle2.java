import java.lang.String;

public class circle {

    public double radius;
    public String name;

    circle () {
      radius = 0;
      name = "Unnamed";
    }

    circle (double r) {
      radius = r;
      name = "Unnamed";
    }

    circle (double r, String n) {
      radius = r;
      name = n;
    }
}
