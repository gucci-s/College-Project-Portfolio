import java.util.*;

public class Assignment4b{
    
    public static void main(String args[]){
        try (Scanner scanner = new Scanner(System.in)) {
            int numDailySales = scanner.nextInt();
            System.out.println("Number Daily Sales:    " + numDailySales);
            
            int totDailySales = scanner.nextInt();
            System.out.println("Total Daily Sales:    $" + totDailySales);
            
            int avgDailySales;
            avgDailySales = totDailySales / numDailySales;
            System.out.println("Average Daily Sales = $" + avgDailySales);
        }
    }
}