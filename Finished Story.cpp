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
        cout<<score<<endl<<endl;
        
    }
    else
    {
        cout<<"I agree, studying is important, especially when it comes to the week of finals."<<endl;
        cout<<"Plus, after a bit more sleep and a meal, you're more energized and ready to hit the books."<<endl;
        cout<<"You say goodbye to Blake and head back to your dorm to begin. (+1)"<<endl;
        score += 1;
        cout<<score<<endl<<endl;
    }
//Day 3 Intro
    cout<<"Let's start the day off right..."<<endl;
//Day 3 First Choice
cout<<"On Twitter? If not, might as well study.... Type [Y] or [N]"<<endl;
cin>>choice[6];

while (choice[6] != 'Y' && choice[6] != 'y' && choice[6] != 'N' && choice[6] != 'n')
    {
        cout<<"Please type either Y or N."<<endl;
        cin>>choice[6];
    }

if (choice[6] == 'Y' || choice[6] == 'y')
    {
        cout<<"Interesting choice… OK! It’s your life I guess. (-1)"<<endl;
        score-=1;
        cout<<score<<endl<<endl;
    }
    
else
    {
        cout<<"Wow! Look at you! All grown up. Making good life choices. Brings a tear to my eye. (+0)"<<endl;
        cout<<score;
    }
//Day 3 Second choice
//Intro
cout<<"I need to study. Finals are in 2 DAYS. Pushing yourself a little never hurt anybody..."<<endl<<endl;
cout<<"Study some more? Type [Y] or [N]";
cin>>choice[7];

while (choice[7] != 'Y' && choice[7] != 'y' && choice[7] != 'N' && choice[7] != 'n')
    {
        cout<<"Please type either Y or N."<<endl;
        cin>>choice[7];
    }
    
if (choice[7] == 'Y' || choice[7] == 'y')
    {
    cout<<"Let’s get to it! (+1)"<<endl;
    score+=1;
    cout<<score<<endl<<endl;
    }

else
    {
    cout<<"You deserve a break!" <<endl;
    cout<<"Twitter it is! (-1)"<<endl;
    score-=1;
    cout<<score<<endl<<endl;
    }
//Day 3 Third choice
//Intro
cout<<"Some time has passed. It is now 4 P.M. Bailey shoots you another text again. You’re filled with excitement."<<endl;
cout<<"A party?? Finals are in 2 DAYS. You can’t attend a party now! Type [Y] or [N]"<<endl<<endl;
cin>>choice[8];

cout<<"Attend the party with Bailey? Type [Y] or [N]"<<endl<<endl;

while (choice[8] != 'Y' && choice[8] != 'y' && choice[8] != 'N' && choice[8] != 'n')
    {
        cout<<"Please type either Y or N."<<endl;
        cin>>choice[8];
    }


if (choice[8] == 'Y' || choice[8] == 'y')
    {
        cout<<"Yes you can :)))). Press [Enter] to continue"<<endl<<endl;
        cin.get();
        cout<<"bruh. Press [Enter] to continue"<<endl;
        cin.get();
        cout<<"This party kinda bussin not gonna lie. Press [Enter] to continue"<<endl;
        cin.get();
        cout<<"Everybody is having a good time. Press [Enter] to continue"<<endl;
        cin.get();
        cout<<"The lights are just the right colors at just the right temperatures."<<endl;
        cout<<"Press [Enter] to continue"<<endl;
        cin.get();
        cout<<"The vibe is good. Press [Enter] to continue"<<endl;
        cin.get();
        cout<<"You think the kool-aid is good for the right reasons. You [get the idea]."<<endl;
        cin.get();
        cout<<"Is that drake??"<<endl;
        cout<<"Ayy bruh drake performing on da table right now no way"<<endl;
        cin.get();
        cout<<"Ay"<<endl;
        cin.get();
        cout<<"Go off"<<endl;
        cin.get();
        cout<<"Ay"<<endl;
        cin.get();
        cout<<"Aww, Bailey has a puppy. How could you have forgotten?"<<endl;
        cin.get();
        cout<<"What the"<<endl;
        cin.get();
        cout<<"The dog dancing w drake rn lol"<<endl;
        cin.get();
        cout<<"On da table"<<endl;
        cin.get();
        cout<<"It’s doing some sort of weird dance"<<endl;
        cin.get();
        cout<<"Is that from fortnite lol"<<endl;
        cin.get();
        cout<<"What da dog doin"<<endl;
        cin.get();
        cout<<endl<<endl;

cout<<"Maaan you should prolly just go to sleep at this point you feel kinda funny"<<endl;
cout<<"Thankfully there is a bed right here"<<endl<<endl;

cout<<"You fall asleep face first on the floor of Bailey’s bedroom. (-1)"<<endl;
score-=1;
cout<<score;
    }   
else 
    {
    cout<<"Right! I completely agree. You seem like such a fun person to be around! (+1)"<<endl;
    score+=1;
    cout<<score;
    }

if (choice[8] == 'Y' || choice[8] == 'y')
{
    cout << "Your head hurts and you're in Bailey's room.";
    cout << "You quickly leave";
    cout << "Press <enter> to continue";
    cin.get();
    cout << "You get a text from Bailey";
    cout << "Bailey: Yesterday was amazing, we should do it again tonight!";
    cout << "Blake also shoots you a text.";
    cout << "When are we going to hang out? it's already been TWO DAYS!";
    cout << "Press <enter> to continue";
    cin.get();
}
else
{
    cout << "You didn't do much yesterday besdies study, at least you'll be on track for school!";
}

cout << "Day 4";
cout << "Press <enter> to continue";
cin.get();
cout << "It's really early you can snack on some cereal and watch Netflix,";
cout << "or you have better things to do other than eating and get your good nap";
cout << "will you nap or snack and watch Netflix?";
cin >> choice[9];
while (choice[9] != 'Y' && choice[9] != 'y' && choice[9] != 'N' && choice[9] != 'n')
    {
        cout<<"Please type either Y or N."<<endl;
        cin>>choice[9];
    }
if (choice[9] == 'Y' || choice[9] == 'y')
{
    cout << "You grab some cereal.. MMM!! Captain Crunch for today with extra milk.";
    cout << "*turns on the tv*";
    cout << "*kick up your feet";
    cout << "*CRONCH*";
}
else
{
    cout << "You take your nap and this is very healthy for your brain";
    score += 1;
}

cout << "Tomorrow is the big day, you have so many questions about Philosphy. *ding*";
cout << "Blake: Yo, so are we gonna hang out or what?";
cin >> choice[10];
while (choice[10] != 'Y' && choice[10] != 'y' && choice[10] != 'N' && choice[10] != 'n')
    {
        cout<<"Please type either Y or N."<<endl;
        cin>>choice[10];
    }
if (choice[10] == 'Y' || choice[10] == 'y')
{
    cout << "*You shoot a text*";
    cout << "Yea let's go get some food from the new restaurant that just opened";
    cout << "You go out to hang with Blake and the food is amazing";
}
else
{
    cout << "*You shoot a text*";
    cout << "Sorry bro, I have to study for the finals";
    cout << "You send your professors a email asking questions";
    cout << "Can you really know everything";
    cout << "...";
    cin.get();
    cout << "...";
    cin.get();
    cout << "...";
    cin.get();
    cout << "The professor is always asking these philosophical question.. Very unhelpful";
}

cout << "*ding*";
cout << "*ding*";
cout << "*ding ding ding*";
cout << "Messages from Bailey";
cout << "You open the messages and Bailey wants to hang out again, but tomorrow is the important day!!";
cout << "Do you hang out with Hailey or study some more?";
cin >> choice[11];

while (choice[11] != 'Y' && choice[11] != 'y' && choice[11] != 'N' && choice[11] != 'n')
    {
        cout<<"Please type either Y or N."<<endl;
        cin>>choice[11];
    }
if (choice[11] == 'Y' || choice[11] == 'y')
{
    cout << "Of course we can hang out!";
    cout << "Hailey comes over with 4 others and you go to the beach!";
    cout << "You plan on staying for two hours no biggie";
    cout << "2hrs go by and it starts to rain";
    cout << "Yall try to start the car and its stuck for another 2 hrs but it was fun either way, but";
    cout << "you left yourself no time to study";
    score -=1;
}
else
{
    cout << "Sorry I have exams tomorrow, maybe another day?";
    cout << "Of course im free anytime";
    cout << "You hit the books and your knowledge grows";
    score += 1;
}

cout << "DAY OF EXAM";
if(score < 0)
{
    cout << "You went the party route! You only had a good time and won at life, but you bombed the test\n";
    cout << "really badly. Really really badly. I don't think you got a single question right. Maybe study a bit more next time";
}
else if(score >= 0 && score <= 0)
{
    cout << "You went the boring route...";
    cout << "You did absolutely nothing with your week..";
    cout << "You didn't study enough, you failed";
}
else
{
    cout << "You went the smart route. All you did was study, but you could've at least had a little fun";
    cout << "You got the best grade, but it comes with a major headache.";
}

return 0;

}