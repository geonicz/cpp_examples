class BetterListOfNumbers extends ListOfNumbers {

   public double average() {
       if (icount > 0)
         return itotal / icount;
       else
         return 0;
   }
}
