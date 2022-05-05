import java.lang.System.*;
import java.awt.*;

public class PopUpWindowDemo extends Frame {

   Button open, quit;
   Frame popup = new PopUpWindow("I am a popup window");
   FlowLayout lm = new FlowLayout(FlowLayout.CENTER);

   public PopUpWindowDemo (String title) {
      super(title);
      setLayout(lm);
      setSize(400, 250);
      open = new Button("Show pop-up window");
      add(open);
      quit = new Button("Quit program");
      add(quit);
   }
   public static void main(String args[]) {
      PopUpWindowDemo app = new PopUpWindowDemo ("Pop-up window demo");
      app.show();
   }

   public boolean action(Event evt, Object arg) {
      if (evt.target instanceof Button) {
         String label = (String)arg;
         if (label.equals("Show pop-up window")) {
            if (!popup.isShowing())
                popup.show();
         }
         else {
             System.exit(0);
         }
      }
      return true;
   }
}
