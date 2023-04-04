import java.util.*;

public class Assignment5a {

    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        String fullName = scanner.next();
        System.out.println("Full Name:  " + fullName);

        int baseIncome = scanner.nextInt();
        System.out.println("Yearly Base Income:  $" + baseIncome);

        int commissions = scanner.nextInt();
        System.out.println("Yearly Commisions:   $" + commissions);

        int totincome;
        totincome = baseIncome + commissions;
        System.out.println("Total Income:        $" + totincome);
    }
}