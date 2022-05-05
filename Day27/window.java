import java.awt.*;

public class AWT_Test1 extends Frame {

  // Constructor.
  public AWT_Test1(String title) {
      super(title);
      Label lbl = new Label("Hello from Java", Label.CENTER);
      lbl.setFont(new Font("Helvetica", Font.PLAIN, 16));
      add("Center", lbl);
  }

  public static void main(String args[]) {
      AWT_Test1 Test = new AWT_Test1("A Java Window");
      Test.resize(350,250);
      Test.show();
  }
}
