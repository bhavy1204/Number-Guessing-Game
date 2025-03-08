import java.util.Random;
import java.util.Scanner;

class Numbers {
    Random random = new Random();

    void menu() {
        int choice;
        Scanner input = new Scanner(System.in);
        System.out.println("-------- WELCOME TO GAME --------");
        System.out.println("1. Easy ");
        System.out.println("2. Moderate ");
        System.out.println("3. Hard ");
        System.out.println("4. Exit ");
        System.out.print(">>> ");
        while (true) {
            if (input.hasNextInt()) {
                choice = input.nextInt();
                break;
            } else {
                System.out.println("Please enter only integer data ! ");
                input.nextLine();
            }
        }
        switch (choice) {
            case 1:
                
                break;
            case 2:
                
                break;
            case 3:
                
                break;
            case 4:
                
                break;
            default:
                break;
        }
        input.close();
    }

    public static void main(String args[]) {

    }
}