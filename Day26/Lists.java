public class ListOfNumbers {

    protected int icount;
    protected double itotal;

    //Constructor.
    ListOfNumbers() {
          icount = 0;
          itotal = 0;
    }

    public void Add(double x) {
          icount++;
          itotal += x;
    }

    public int count() {
          return icount;
    }

    public double total() {
          return itotal;
    }
}
