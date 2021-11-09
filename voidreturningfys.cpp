/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void day(int &a);
int main()
{
    int a =0;
    int dayCounter = 0;
    day(a);
    cout<<"Here will be present the opportunties (if-statements) the player is presented with throughout day 1. We are still working on the finer details "<<endl;
    cout<<"of the story."<<endl<<endl;
    day(a);
    cout<<"Here will be present the opportunties (if-statements) the player is presented with throughout day 2. We are still working on the finer details "<<endl;
    cout<<"of the story."<<endl;
//...

}

void day(int &a)
{
    a+=1;
    cout<<"It is now day "<<a<<"."<<endl;
}