#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <iomanip>
#include <limits>

using namespace std;

class numberGame
{
    int n, guess, range;

public:
    int RandomNumber(int range)
    {
        n = rand() % range;
        cout << n << endl;
        return n;
    }
    bool PlayGame()
    {
        int lives = 3;
        do
        {
            cout << "Enter your guess >> ";
            while (true)
            {
                cin >> guess;
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input. Please enter a valid number :";
                }
                else
                    break;
            }

            if (n == guess)
            {
                cout << "You won the game !! " << endl;
                return true;
            }
            else if (guess < n)
                cout << "Wrong answer !!\nHINT : The number is higher " << endl;
            else if (guess > n)
                cout << "Wrong answer !!\nHINT : The number is lower " << endl;
            lives--;
            if (lives == 0)
            {
                cout << "\nOut of lives !! The number was " << n << "\nbetter luck next time" << endl;
                return false;
            }
        } while (lives != 0);
    }
    void play(int n){
        RandomNumber(n);
        PlayGame();
    }
};

int main()
{
    system("cls");
    srand(time(0));
    int choice;
    numberGame n;
    cout << "~~~ WELCOME TO GAME ~~~" << endl;
    do
    {
        cout << "-----------------------------------------------------" << endl;
        cout << " Enter difficulty " << endl;
        cout << "1. Easy" << endl;
        cout << "2. Moderate" << endl;
        cout << "3. Hard" << endl;
        cout << "4. exit game" << endl;
        cin >> choice;
        while (true)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Please enter a valid number : ";
            }
            else
                break;
        }

        cout << "-----------------------------------------------------" << endl;
        switch (choice)
        {
        case 1:
            n.play(10);
            break;
        case 2:
            n.play(100);
            break;
        case 3:
            n.play(1000);
            break;
        case 4:
            cout << "Bye Bye !! " << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (choice != 4);
    return 0;
}