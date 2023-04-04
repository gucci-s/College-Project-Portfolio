import java.util.*;

public class MidtermQ3{
    
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int CurrentSalary = scanner.nextInt();
        System.out.println("Current Salary    " + CurrentSalary);
        
        int RaisePercent = scanner.nextInt();
        System.out.println("Percent of Raise:    %" + RaisePercent);
        
        int NewSalary;
        NewSalary = CurrentSalary * RaisePercent;
        System.out.println("Total New Salary = $" + CurrentSalary);
    }
}
