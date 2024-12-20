#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>

class numberGame{
    int n;
    public:
};

using namespace std;
int main()
{
    system("cls");
    srand(time(0));
    int n,guess;
    n =( rand()%10);
    cout<<n<<endl;
    cout<<"Welcome to number Game !  "<<endl;
    cout<<"Enter your number :- "<<endl;
    cin>>guess;
    if (guess==n)
        cout<<"You won the game !! "<<endl;
    else{
        cout<<"Bad luck the number was \""<<n<<"\"\nTry again next time !!."<<endl;
    }
    
    return 0;
}