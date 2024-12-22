#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

class numberGame
{
    int n, guess, lives = 3, range;

public:
    int RandomNumber(int range)
    {
        n = rand() % range;
        cout << n << endl;
        return n;
    }
    bool PlayGame()
    {
        do
        {
            cout << "Enter your guess >> ";
            cin >> guess;
            if (n == guess)
            {
                cout << "You won the game !! " << endl;
                return true;
            }
            else if (guess < n)
                cout << "Wrong answe !!\nHINT : The number is higher " << endl;
            else if (guess > n)
                cout << "Wrong answe !!\nHINT : The number is lower " << endl;
            lives--;
            if (lives == 0)
            {
                cout << "\nOut of lives !! The number was " << n << "\nbetter luck next time" << endl;
                return false;
            }
        } while (lives != 0);
    }
};

int main()
{
    system("cls");
    srand(time(0));
    char choice;
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
        cout << "-----------------------------------------------------" << endl;
        switch (choice)
        {
        case '1':
            n.RandomNumber(10);
            n.PlayGame();
            break;
        case '2':
            n.RandomNumber(100);
            n.PlayGame();
            break;
        case '3':
            n.RandomNumber(1000);
            n.PlayGame();
            break;
        case '4':
            cout << "Bye Bye !! " << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (choice != '4');
    return 0;
}