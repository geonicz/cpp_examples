import java.lang.System;import java.io.*;

public class WriteTextFile { 
  public static void main(String args[]) {
    String s;
    BufferedReader kb;
    boolean fileError = false;

    kb = new BufferedReader(new InputStreamReader(System.in));
    try {
        FileWriter outFile = new FileWriter("c:\\output.txt");
        BufferedWriter buff = new BufferedWriter(outFile);
        System.out.println("Enter lines of text to put in the file.");
        System.out.println("Enter a blank line when done.");
        boolean done = false;
        while (!done) {
          s = kb.readLine();
          if (s.length() > 0 ) {
            s = s + "\n";
            buff.write(s);
          }
          else
            done = true;
        }
        buff.close();
    }
    catch (IOException e) {
        System.out.println("Error: " + e.toString());
        fileError = true;
    }
    if (!fileError)
        System.out.println("File successfully written.");
    else
        System.out.println("An error occurred - file not written.");
  }
}
