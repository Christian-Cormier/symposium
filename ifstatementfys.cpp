
#include <iostream>
using namespace std;
int main()
{
    char choice;
    cout<<"Will you attend your friends house? If so, enter Y. If not, enter N."<<endl;
    cin>>choice;
    
    //input validation
    while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')
    {
        cout<<"Invalid input. Please type either Y or N. Y for yes, N for no."<<endl;
        cin>>choice;
    }
    
    if(choice ==  'Y' || choice == 'y')
    {
        cout<<"You decide to attend your friends place at Momentum Village. Turns out she invited TONS of people."<<endl;
		cout<<"There are up to 40 people in this little, now jam packed apartment."<<endl;
		cout<<"There are lights flashing everywhere and music is ABSOLUTELY BLARING. You dance all night without a care in the world, "<<endl;
        cout<<"you had a great time, you think. You also wake up the next morning with an awful migraine.";
             //update points
    }
    
    if(choice == 'N' || choice == 'n')
    {
        cout<<"As originally intended, you decide to study versus going to your friend's house. You feel slightly proud of yourself for not giving into "
        "the temptation of that apparent party. Now's a good time to get some quality study time in.";
        //update points?
    }
	



    return 0;
}