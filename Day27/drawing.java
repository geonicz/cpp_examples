import java.awt.*;
import java.awt.geom.*;

public class DrawingTest extends Frame {
    Shape shapes[] = new Shape[4];
    public DrawingTest (String title) {
      super(title);
      setSize(500, 400);
      drawShapes();
      add("Center", new MyCanvas());
    }
    public static void main(String args[]) {
      DrawingTest app = new DrawingTest("Drawing test");
      app.show();
    }
    void drawShapes () {
      shapes[0] = new Rectangle2D.Double(12.0,12.0, 98.0, 120.0);
      shapes[1] = new Ellipse2D.Double(150.0, 150.0,90.0,30.0);
      shapes[2] = new RoundRectangle2D.Double(200.0, 25, 
                  235.0, 250.0, 50.0, 100.0);
      GeneralPath path = new GeneralPath(new Line2D.Double(100.0, 
                  350.0, 150.0, 300.0));
      path.append(new Line2D.Double(150.0, 300.0, 
                  200.0, 350.0), true);
      path.append(new Line2D.Double(200.0, 350.0, 
                  250.0, 300.0), true);
      path.append(new Line2D.Double(250.0, 300.0, 
                  300.0, 350.0), true);
      shapes[3] = path;
    }

    class MyCanvas extends Canvas {
      public void paint(Graphics graphics) {
         Graphics2D gr = (Graphics2D) graphics;
         for (int i=0; i<4; i++)
            gr.draw(shapes[i]);
      }
    }
}
