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
cout<<"Press [Enter] to continue"<<endl<<endl;
cin.get();

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
cout<<"It’s currently noon. The fear of failure is still creeping up on you."<<endl;
cout<<"You feel you should push yourself."<<endl;
cout<<endl;
cout<<"Study? Type [Y] or [N]"<<endl;
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
        cout<<score<<endl<<endl;
    }

else
    {
        cout<<"No thanks. Exams are on Friday.";
        cout<<" You have plenty of time to slack off on your\nphone! Plus, it’ll only be an hour! (+0)"<<endl<<endl;
    }
   
	
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
		cout<<"Good idea, right? You need to get some studying in. It’s the week OF finals."<<endl;
		cout<<"You have to take 4 and you literally haven’t even begun studying AT ALL."<<endl;
		cout<<"Might as well get the worst study session of the day out of the way first:\nCalculus. (+1)"<<endl;
		score+=1;


	}
	cout<<score<<endl<<endl;
//Day 2 Intro
cout<<"So shut eye was a bust, for the most part. You were up studying,"<<endl;
cout<<"(at least you tried studying) and got little to no sleep."<<endl;
//Day 2 First Choice
cout<<"You check your disgusting alarm clock, it’s 8 A.M. Jesus, 8 A.M???????"<<endl;
cout<<"You could go back to sleep, but you could also study more. Finals are in 3 days…"<<endl<<endl;

cout<<"Fall back asleep? Type [Y] or [N]"<<endl;
cin>>choice[3];

while (choice[3] != 'Y' && choice[3] != 'y' && choice[3] != 'N' && choice[3] != 'n')
{
    cout<<"Please type either Y or N."<<endl;
    cin>>choice[3];
}
cout<<endl<<endl;

if (choice[3] == 'Y' || choice[3] == 'y')
    {
        cout<<"Your brain is lacking on practically all fronts,"<<endl;
        cout<<"even if you tried studying, you would just fall in and out of sleep anyway. (+0)";
    }
else
    {
        cout<<"Nice! I’m proud of the perseverance you’ve shown!"<<endl;
        cout<<"Let’s hope it pays off…"<<endl;
        cout<<"[Press enter to continue]"<<endl;
        cin.get();
        cout<<endl;
        cout<<"You fall asleep after studying for ten minutes (-1)"<<endl;
        score-=1;
        cout<<score<<endl<<endl;
        
    }
//Day 2 Second Choice
cout<<"You reawaken at 12 noon. I  guess you really needed that extra shut eye."<<endl; 
cout<<"Say goodbye to your sleep schedule though. Time to hit the books."<<endl<<endl;

cout<<"Study some more? Enter [Y] or [N]"<<endl;
cin>>choice[4];

while (choice[4] != 'Y' && choice[4] != 'y' && choice[4] != 'N' && choice[4] != 'n')
{
    cout<<"Please type either Y or N."<<endl;
    cin>>choice[4];
}

if (choice[4] == 'Y' || choice[4] == 'y')
    {
     cout<<"'I shall best you psychology!', you proclaim. (+1)"<<endl;
     score+=1;
     cout<<score;
    } 
else 
    {
        cout<<"A little TikTok break won’t kill anybody."<<endl;
        cout<<"And I know you said that last time, but this time YOU’RE SERIOUS."<<endl;
        cout<<"Press [Enter] to continue"<<endl;
        cin.get(); //doesn't work for some reason. need to fix
        cout<<endl;
        cout<<"You end up scrolling on TikTok for 2 hours. (-1)"<<endl;
        score-=1;
        cout<<score<<endl<<endl;
    }
    
//Day 2 Third Choice
    cout<<"It’s 5 P.M. Your head hurts. You decide to go to the Dining Hall to get some food in you."<<endl;
    cout<<"As you’re eating a scrumptious assortment of salami, you spot another good friend of yours from one of your classes, Blake."<<endl;
    cout<<"'That bonfire was freaking crazy,' Blake remarks. 'I know, right,' you exclaim, as if you remember half of what happened last night or if"<<endl;
    cout<<"they were even there."<<endl;
    cout<<"Press [Enter] to continue";
    cin.get();
    cout<<endl;
    
    cout<<"You and Blake sit and talk for an hour,"<<endl;
    cout<<"Blake brings up the idea of hanging out later that night. Maybe just cruise around town listening to music?"<<endl<<endl;

    cout<<"Go cruising with Blake? Enter [Y] or [N]"<<endl;
    cin>>choice[5];
    
    while (choice[5] != 'Y' && choice[5] != 'y' && choice[5] != 'N' && choice[5] != 'n')
    {
        cout<<"Please type either Y or N."<<endl;
        cin>>choice[5];
    }
    
    if (choice[5] == 'y' || choice[5] == 'Y')
    {
        cout<<"You have three days to study, what could go wrong?"<<endl<<endl;
        
        cout<<"YOU’RE MOVIGN AT (what feels like) 100 MILES AN HOUR. THE SUN ROOF IS DOWN. THE WIND IS"<<endl;
        cout<<"MOVING THROUGH YOU LIKE A WEEDBLOWER TO THE FACE."<<endl;
        cout<<"YOU LOOK LIKE YOU JUST GOT PUNCHED IN SLOW MOTION IN A DISNEY MOVIE THE WAY YUOR MOUTH IS FLARING"<<endl;
        cout<<"ALL OVER THE PLACE. EVERYTHING SEEMS SO FAST. THIS IS NOT JUST A CUIRSE. HOW DID THIS END UP HAPPENING?!"<<endl;
        cout<<"IS THAT A CAT??????? OH GOD. THE CAR IS MOVING SO QUICKLY, YOU THINK YOU'RE GOING TO BE SICK."<<endl;
        cout<<"Press [Enter] to continue";
        cin.get();//not working??
        cout<<endl<<endl<<"That was still pretty awesome though.:) (-1)"<<endl;
        score -= 1;
        cout<<score;
        
    }
    else 
    {
        cout<<"I agree, studying is important, especially when it comes to the week of finals."<<endl;
        cout<<"Plus, after a bit more sleep and a meal, you're more energized and ready to hit the books."<<endl;
        cout<<"You say goodbye to Blake and head back to your dorm to begin. (+1)"<<endl;
        score += 1;
        cout<<score;
    }
	return 0;
}
   







