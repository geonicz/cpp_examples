import java.io.*;
public class ReadTextFile {
  public static void main(String args[]) {
    String s;
    try {
      FileReader inFile = new FileReader("c:\\test.txt");
      BufferedReader buff = new BufferedReader(inFile);
      boolean endOfFile = false;
      while (!endOfFile) {
        s = buff.readLine();
        if (s == null)
          endOfFile = true;
        else
          System.out.println(s);
      }
      buff.close();
    }
    catch (IOException e) {
      System.out.println("An error occurred: " + e.toString());
    }
  }
}
