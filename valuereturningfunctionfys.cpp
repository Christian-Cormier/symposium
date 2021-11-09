/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

float realStudytime(int);
int main()
{
    int choice = 0;
    
    cout<<"You decide you are going to study for either 1, 2, or 3 hours when you get home in preparation for finals."<<endl;
    cout<<"How many hours will you study for (1-3)?"<<endl;
    cin>>choice;
    
    //input validation
    while (choice != 1 && choice != 2 && choice != 3)
    {
        cout<<"Invalid input. You can only study either 1, 2, or 3 hours. Any longer (or shorter) is not ideal, don't you think?"<<endl;
        cout<<"Please input either 1, 2 or 3."<<endl;
        cin>>choice;
    }
    
    //if-statement in form of switch statement
    switch (choice)
    {
        case 1: cout<<"You end up only studying for "<< realStudytime(choice) << " minutes due to how distracting TikTok is!"<<endl;
            break;
        case 2: cout<<"You end up only studying for "<< realStudytime(choice) << " hour due to how distracting TikTok is!"<<endl;
            break;
        case 3: cout<<"You end up only studying for "<< realStudytime(choice) << " hours due to how distracting TikTok is!"<<endl;
        //no default needed due to input validation previously
    }
    return 0;
}
//function that showcases how much time the user will really study (only half of the original time due to the distractiveness of TikTok!)
float realStudytime(int x)
{
    if (x == 1)
    {
        float y;
        y = 60/2.0;
        return y;
    }
    else
    {
        float y;
        y = x/2.0;
        return y;
    }
}

