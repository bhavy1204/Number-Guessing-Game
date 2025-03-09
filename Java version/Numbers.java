import java.util.Random;
import java.util.Scanner;

class Numbers {
    Scanner input = new Scanner(System.in);
    int guessNum, randomNum;

    int input() {
        System.out.print("Enter your guess >> ");
        while (true) {
            if (input.hasNextInt()) {
                guessNum = input.nextInt();
                if (guessNum > 0)
                    return guessNum;
                else
                    System.out.println("Please enter a positive number ");
            } else {
                System.out.println("Please enter a valid int");
                input.nextLine();
            }
        }

    }

    void playGame(int min, int max,int lives) {
        Random random = new Random();
        int temp = lives;
        randomNum = random.nextInt(min, max+1);
        while (lives != 0) {
            input();
            if (guessNum == randomNum) {
                System.out.println("YOU WON !! the number was, \"" + randomNum + "\" ");
                System.out.println("You made " + (temp - lives)+ " guesses.");
                break;
            } else if (guessNum > randomNum)
                System.out.println("The number is smaller ! it is " + ((randomNum % 2 == 0) ? " Even " : " odd ")+" number ");
            else
                System.out.println("The number is bigger ! it is " + ((randomNum % 2 == 0) ? " Even " : " odd ")+" number ");
            if (lives > 0)
                System.out.println("Guess remaining :" + --lives);
            else{
                System.out.println("Game over lives in -ve ");
            }
            if(lives == 0 ){
                System.out.println("Game Over ! The number was " + randomNum);
                int diff = Math.abs(guessNum - randomNum);
                System.out.println("You made " + (temp - lives) + " gusses, and you were " + diff + " close to the number ! Better luck next time :) !! ");
            }
        }
    }

    void menu() {
        int choice;
        do {
            System.out.println("-------- WELCOME TO GAME --------");
            System.out.println("1. Easy (1-10)");
            System.out.println("2. Moderate (1-100) ");
            System.out.println("3. Hard (1-1000) ");
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
                    playGame(1, 10,3);
                    break;
                case 2:
                    playGame(1, 100,5);
                    break;
                case 3:
                    playGame(1, 1000,7);
                    break;
                case 4:
                    System.out.println("EXITING...");
                    break;
                default:
                    break;
            }
        } while (choice != 4);
    }
    public static void main(String args[]) {
        Numbers game = new Numbers();
        game.menu();
    }

}