#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

class numberGame
{
    int n, guess, hint,lives=3,range;

public:
    int RandomNumber(int range)
    {
        n = rand() % range;
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
        if (n==guess){
            cout<<"You won the game !! "<<endl;
            return true;
        }else{
            if (guess<n)
                cout<<"HINT : The number is higher "<<endl;
            else if(n>guess)
                cout<<"HINT : The number is lower "<<endl;
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
            life=3;
            while (life != 0)
            {
                n.getUserNum();
                if (n.check() == 0)
                    cout << "Try again you are close"<<endl;
                else
                {
                    cout << " You won " << endl;
                    break;
                }
                life--;
            }
            break;
        case 2:
            n.RandomNumber(100);
            life =3;
            while (life != 0)
            {
                n.getUserNum();
                if (n.check() == 0)
                    cout << "Try again you are close"<<endl;
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
                n.getUserNum();
                if (n.check() == 0)
                    cout << "Try again you are close"<<endl;
                else
                {
                    cout << " You won " << endl;
                    break;
                }
                life--;
            }
            break;
        case 4:
            cout<<"Bye Bye !! "<<endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (mode != 4);
    return 0;
}