import java.util.Scanner;
public class TowerofHanoi {
   public static void main(String[] args) 
   {
      Scanner sc = new Scanner(System.in);
      int nDisks = sc.nextInt();
      hanoi(nDisks, 'A', 'B', 'C');
   }
   public static void hanoi(int N, char from, char inter, char to) 
   {
      if (N == 1) 
      {
         System.out.println("Disk 1 from " + from + " to " + to);
      } 
      else 
      {
         hanoi(N - 1, from, to, inter);
         System.out.println("Disk " + N + " from " + from + " to " + to);
         hanoi(N - 1, inter, from, to);
      }
   }
}