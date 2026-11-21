import java.util.Scanner;

public class ConditionalsInJava {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int age = scanner.nextInt();

        if (age < 18) {
            System.out.println("Not Adult");
        } else if (age == 18) {
            System.out.println("Exactly Adult");
        } else {
            System.out.println("Adult");
        }

        scanner.close();
    }
}