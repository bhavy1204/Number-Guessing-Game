#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

class numberGame
{
    int n, guess, hint, lives = 3, range;

public:
    int RandomNumber(int range)
    {
        n = rand() % range;
        cout << n << endl;
        return n;
    }
    bool PlayGame()
    {
        cout << "Enter your guess >> ";
        cin >> guess;
        if (n == guess)
        {
            cout << "You won the game !! " << endl;
            return true;
        }
        else if (guess < n)
        {
            cout << "Wrong answe !!\nHINT : The number is higher " << endl;
            return false;
        }
        else if (guess > n)
        {
            cout << "Wrong answe !!\nHINT : The number is lower " << endl;
            return false;
        }
    }
};

int main()
{
    system("cls");
    srand(time(0));
    int mode, life;
    numberGame n;
    do
    {
        cout << "Welcome to game " << endl;
        cout << " Enter difficulty " << endl;
        cout << "1. Easy" << endl;
        cout << "2. Moderate" << endl;
        cout << "3. Hard" << endl;
        cout << "4. exit game" << endl;
        cin >> mode;
        switch (mode)
        {
        case 1:
            n.RandomNumber(10);
            life = 3;
            while (life != 0)
            {
                n.PlayGame();
                life--;
            }
            break;
        case 2:
            n.RandomNumber(100);
            life = 3;
            while (life != 0)
            {
                n.PlayGame();
                if (n.PlayGame() == 0)
                    cout << "Try again you are close" << endl;
                else
                {
                    cout << " You won " << endl;
                    break;
                }
                life--;
            }
            break;
        case 3:
            n.RandomNumber(1000);
            while (life != 0)
            {
                n.PlayGame();
                if (n.PlayGame() == 0)
                    cout << "Try again you are close" << endl;
                else
                {
                    cout << " You won " << endl;
                    break;
                }
                life--;
            }
            break;
        case 4:
            cout << "Bye Bye !! " << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (mode != 4);
    return 0;
}