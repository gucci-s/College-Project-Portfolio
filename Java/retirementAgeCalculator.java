import java.util.*;

public class retirementAgeCalculator{
    
    public static void main(String args[]){
        try (Scanner scanner = new Scanner(System.in)) {
            String firstName = scanner.next();
            System.out.println("First Name:  " + firstName);
            
            String lastName = scanner.next();
            System.out.println("Last Name:  " + lastName);
            
            int age = scanner.nextInt();
            System.out.println("Current Age:  " + age);
            
            int rage = scanner.nextInt();
            System.out.println("Retirement Age:  " + rage);
            
            int numyears;
            numyears = rage - age;
            System.out.println("Years to retirement = " + numyears);
        }
    }
}