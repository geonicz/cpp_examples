import java.applet.Applet;
import java.awt.*;

public class AppletTest extends Applet {
  Font f = new Font("TimesRoman", Font.BOLD, 36);
  boolean useRed = true;

  public void paint(Graphics screen) {
      screen.setFont(f);
      if (useRed)
         screen.setColor(Color.red);
      else
         screen.setColor(Color.blue);
      screen.drawString("This is an applet!", 5, 30);
  }

  public boolean mouseDown(Event evt, int x, int y) {
      useRed = !useRed;
      repaint();
      return true;
  }
}
