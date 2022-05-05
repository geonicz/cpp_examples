import java.awt.*;

class PopUpWindow extends Frame {

  FlowLayout lm = new FlowLayout(FlowLayout.CENTER);

  public PopUpWindow(String title) {
      super(title);
      setSize(300, 100);
      setLayout(lm);
      Button b = new Button("Close");
      add(b);
  }

  public boolean action(Event evt, Object arg) {
      hide();
      return true;
  }
}
