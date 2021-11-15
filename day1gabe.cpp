#include <iostream>
using namespace std;

int main()
{

char choice[9];
int score = 0;

//menu is displayed here
//Starting game intro:
cout<<"It is Monday. Thank God you don't have school this week."<<endl;
cout<<"Wait, why is that again? Oh yeah. Finals week. It’s 10 A.M. Up early today,\nyou guess."<<endl;
cout<<"It’s finally time to start studying (because, for some reason, you haven’t\nalready)."<<endl;
cout<<endl;

//Start of Day 1 (Intro)
cout<<"Despite wishing to be productive, you still find yourself mindlessly\nscrolling through social media on your phone. You receive a phone call from your grandma who asks if you want to go\nsee a movie. You love your grandma… how could you possibly say no to her?\nBut she wants to see some film about some weird massaging place."<<endl;
cout<<endl;

//Day 1 First Choice
cout<<"Go to the movies with grandma? Type [Y] or [N]"<<endl;
cin>>choice[0];//I understand we could just have 1 "choice" variable to be
//overwritten but just incase we want to do something separately with the individual
//choices I will assign them each choice varibles.

//Test output: cout<<"The user chose: "<<choice[0];
//Validate Input:
while (choice[0] != 'Y' && choice[0] != 'y' && choice[0] != 'N' && choice[0] != 'n')
    {
        cout<<"Please type either Y or N."<<endl;
        cin>>choice[0];
    }
cout<<endl;
if (choice[0] == 'Y' || choice[0] == 'y')
    {
        cout<<"That movie sucked… you feel you honestly would have been better off staying home studying."<<endl;
        cout<<"At least you got to spend time with Grandma though. uh... right? (+0)"<<endl<<endl;
    }
else
    {
        cout<<"'Sorry Grandma, I have to study,' you attempt to say in a regretful tone."<<endl;
        cout<<"'Alright sweet cheeks, let’s go on an adventure on the weekend then ok?\n After your exams.";
        cout<<" I hear the new massage parlor has the best masseuses!'\n(+1)"<<endl;
        score += 1;
        cout<<score;
        cout<<endl<<endl;

    }

//Day 1 Second Choice
//Intro
cout<<"It’s currently noon. While you’ve already studied a decent amount, the fear\nof failure is still creeping up on you."<<endl;
cout<<"You feel you should push yourself."<<endl;
cout<<endl;
cout<<"Study some more? Type [Y] or [N]"<<endl;
cin>>choice[1];
cout<<endl;

while (choice[1] != 'Y' && choice[1] != 'y' && choice[1] != 'N' && choice[1] != 'n')
    {
        cout<<"Please type either Y or N."<<endl;
        cin>>choice[1];
    }
    
if (choice[1] == 'Y' || choice[1] == 'y')
    {
        cout<<"Nice job! You hit the books again. (+1)"<<endl;
        score += 1;
    }

else
    {
        cout<<"No thanks. Exams are on Friday.";
        cout<<" You have plenty of time to slack off on your\nphone! Plus, it’ll only be an hour! (+0)"<<endl;
    }
    cout<<score<<endl<<endl;
	
//Day 1 Third Choice
cout<<"It is now around 2:30 P.M. You see a text message from your friend, Bailey."<<endl;
cout<<"“Wanna hang?”, it reads. Hang? And do what?"<<endl;
cout<<"Who cares? Sounds kind of fun anyway. You’ve already worked so hard today too."<<endl;
cout<<"Some more study time wouldn’t kill you though..." <<endl<<endl;

cout<<"Hangout with Bailey? Type [Y] or [N]"<<endl;
cin>>choice[2];

while (choice[2] != 'Y' && choice[2] != 'y' && choice[2] != 'N' && choice[2] != 'n')
    {
        cout<<"Please type either Y or N."<<endl;
        cin>>choice[2];
    }
	
if (choice[2] == 'Y' || choice[2] ==  'y')
	{
		cout<<"'What time?' you respond. 'Now lol', they reply 5 minutes later."<<endl;
		cout<<"You read the message and begin getting ready."<<endl<<endl;
		
		cout<<"You return home. At 2 A.M. Turns out "<<endl;
		cout<<"your friend hadn’t disclosed 100% of the plans for the day, or any really."<<endl;
		cout<<"What began as a simple trip to Whataburger turned into a SICK beach move with your friends."<<endl;
		cout<<"There was a bonfire, plenty of CRAZY STUFF ;) and WAY TOO MANY PEOPLE,\n";
		cout<<"Bailey is way too popular for their own good. You’re absurdly tired, but manage to"<<endl;
		cout<<"faintly remember some people testing out who was willing to jump over the firepit the most."<<endl;
		cout<<"Everybody made it over, at least you think they did. (-1)"<<endl;
		score-=1;

	}
else
	{
		cout<<"Good idea, right? You need to get some studying in. It’s the week OF finals"<<endl;
		cout<<"You have to take 4 and you literally haven’t even begun studying AT ALL."<<endl;
		cout<<"Might as well get the worst study session of the day out of the way first:\nCalculus. (+1)"<<endl;
		score+=1;


	}
	cout<<score<<endl<<endl;
	
	return 0;
}
