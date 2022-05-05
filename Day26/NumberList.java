public class NumberList {

  public static void main(String args[]) {

    ListOfNumbers MyList = new ListOfNumbers();
    BetterListOfNumbers MyBetterList = new BetterListOfNumbers();

    MyList.Add(4);
    MyList.Add(8);
    MyList.Add(9.6);
    MyBetterList.Add(4);
    MyBetterList.Add(8);
    MyBetterList.Add(9.6);

    System.out.println("From class ListOfNumbers:");
    System.out.print("Total = ");
    System.out.println(MyList.total());
    System.out.print("Count = ");
    System.out.println(MyList.count());
    System.out.println("From class BetterListOfNumbers:");
    System.out.print("Total = ");
    System.out.println(MyBetterList.total());
    System.out.print("Count = ");
    System.out.println(MyBetterList.count());
    System.out.print("Average = ");
    System.out.println(MyBetterList.average());
  }
}
