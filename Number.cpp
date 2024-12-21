#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

class numberGame
{
    int n, guess, hint;

public:
    int easy()
    {
        srand(time(0));
        n = rand() % 10;
        cout << n << endl;
        return n;
    }
    int moderate()
    {
        srand(time(0));
        n = rand() % 100;
        cout << n << endl;
        return n;
    }
    int hard()
    {
        srand(time(0));
        n = rand() % 1000;
        cout << n << endl;
        return n;
    }
    void getUserNum()
    {
        cout << "Enter >> ";
        cin >> guess;
    }
    bool check()
    {
        return n == guess ? true : false;
    }
};

int main()
{
    system("cls");
    int mode;
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
            n.easy();
            break;
        case 2:
            n.moderate();
            break;
        case 3:
            n.hard();
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (mode != 4);

    n.getUserNum();
    cout << n.check();
    return 0;
}