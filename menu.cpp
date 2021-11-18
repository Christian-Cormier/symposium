#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <conio.h>
using namespace std;


void rt1();
void rt2();
void splashScreen();
void beginGame();
void acheivementsPage();
void options();
void outFile();
void inFile();
void colorChanger();
void day(int &a);
float realStudytime(int);
void scoreboard();
void createScore(int,string);

//clears screen --- "\33[h\33[2J"
string arr[3] = {"True","True","True"};


void createScore(int score,string name){
    ofstream outFile;
    ifstream inFile;

    outFile.open("scoreboard.txt",ios::app);
    inFile.open("scoreboard.txt");
    if(inFile.is_open()){
        outFile << name << ":" << score << endl;
    }
    outFile.close();
}
void scoreboard(){
    ifstream inFile;
    inFile.open("scoreboard.txt");
    string scores;
    if(!inFile)	
	{
        cout<<"File not found!\n";
        exit(EXIT_FAILURE);
    }

    while( inFile >> scores){
        cout << scores << endl;
    }
    inFile.close();
}


//make a secret function and swap options for scoreboard



int main(){
    splashScreen();
    int option;
    do{
        for(int i = 0; i <= 10; i++){
            if(i == 1){
                cout << "| 1.start     2.achievements |" << endl;
            }
            else if(i == 8){
                cout << "| 3.scoreboard    4.exit     |" << endl;
            }
            else if( i== 0 || i == 10){
                cout << "------------------------------" << endl;
            }
            else{
                cout << "|                            |" << endl;
            }
        }

        cin >> option;

        while(option != 1 && option != 2 && option != 3 && option != 4 && option != 5){
            cout << "invalid input detected please enter another value 1-4" << endl;
            cin >> option;
        }
        switch(option){
            case 1: beginGame();
                    break;

            case 2: acheivementsPage(); //show achievements page
                    break;

            case 3: scoreboard(); //show whatever I have written for option 3;
                    break;

            case 4: cout << "Thanks for playing!!!" << endl;
                    break;
            case 5: colorChanger();
                    break;
        }
    }while(option != 4);
}


void rt1()
{
    int x,  y;
    for(x = 1; x <= 10; x++)
    {
        for(y = 1; y <= 10; y++)
        {
            if(y <= x)
                cout << '*';
            else
                cout << " ";
            }
                for(y = 10; y >= 1; y--)
                {
                    if(y <= x)
                        cout << '*';
                    else
                        cout << " ";
                    }
                cout << "\n";
                }
}

void rt2(){
    int x, y;
    for (x = 10; x >= 1; x--){
        for(y = 1; y <= 10; y++){
            if (y <= x){
                cout << '*';
            }
            else{
                cout << " ";
            }
        }
        for(y = 10; y >= 1; y--){
            if(y <= x){
                cout << '*';
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

void splashScreen(){
    string str;
    rt1();
    cout << "COLLEGE: FRIEND OR FOE" << endl;
    rt2();
    cout << "Press the ENTER key to play!" << endl;
    while (1) {
    getline(cin, str);
    if (str == "") {
      break;
    }
  }
}

void outFile(){
    ofstream outFile;
    outFile.open("acheive.txt");
    for(int i = 1; i <= 100; i++){
        outFile << i << endl;
    }
    outFile.close();
}

// the goal of this function is to begin the game and run each arc in order
// break the story into arcs in order to make the game more readable and fixeable if bugs occur
// put into do while to replay or go back
void beginGame(){
//     char choice[9];
     int score = 0;
     string name;

//     //menu is displayed here
//     //Starting game intro:
//     cout<<"It is Monday. Thank God you don't have school this week."<<endl;
//     cout<<"Wait, why is that again? Oh yeah. Finals week. It's 10 A.M. Up early today,\nyou guess."<<endl;
//     cout<<"It's finally time to start studying (because, for some reason, you haven't\nalready)."<<endl;
//     cout<<"Press [Enter] to continue"<<endl<<endl;
//     cin.get();

//     //Start of Day 1 (Intro)
//     cout<<"Despite wishing to be productive, you still find yourself mindlessly\nscrolling through social media on your phone. You receive a phone call from your grandma who asks if you want to go\nsee a movie. You love your grandma… how could you possibly say no to her?\nBut she wants to see some film about some weird massaging place."<<endl;
//     cout<<endl;

//     //Day 1 First Choice
//     cout<<"Go to the movies with grandma? Type [Y] or [N]"<<endl;
//     cin>>choice[0];//I understand we could just have 1 "choice" variable to be
//     //overwritten but just incase we want to do something separately with the individual
//     //choices I will assign them each choice varibles.

//     //Test output: cout<<"The user chose: "<<choice[0];
//     //Validate Input:
//     while (choice[0] != 'Y' && choice[0] != 'y' && choice[0] != 'N' && choice[0] != 'n')
//         {
//             cout<<"Please type either Y or N."<<endl;
//             cin>>choice[0];
//         }
//     cout<<endl;
//     if (choice[0] == 'Y' || choice[0] == 'y')
//         {
//             cout<<"That movie sucked… you feel you honestly would have been better off staying home studying."<<endl;
//             cout<<"At least you got to spend time with Grandma though. uh... right? (+0)"<<endl<<endl;
//         }
//     else
//         {
//             cout<<"'Sorry Grandma, I have to study,' you attempt to say in a regretful tone."<<endl;
//             cout<<"'Alright sweet cheeks, let’s go on an adventure on the weekend then ok?\n After your exams.";
//             cout<<" I hear the new massage parlor has the best masseuses!'\n(+1)"<<endl;
//             score += 1;
//             cout<<score;
//             cout<<endl<<endl;

//         }

//     //Day 1 Second Choice
//     //Intro
//     cout<<"It’s currently noon. The fear of failure is still creeping up on you."<<endl;
//     cout<<"You feel you should push yourself."<<endl;
//     cout<<endl;
//     cout<<"Study? Type [Y] or [N]"<<endl;
//     cin>>choice[1];
//     cout<<endl;

//     while (choice[1] != 'Y' && choice[1] != 'y' && choice[1] != 'N' && choice[1] != 'n')
//         {
//             cout<<"Please type either Y or N."<<endl;
//             cin>>choice[1];
//         }
        
//     if (choice[1] == 'Y' || choice[1] == 'y')
//         {
//             cout<<"Nice job! You hit the books again. (+1)"<<endl;
//             score += 1;
//             cout<<score<<endl<<endl;
//         }

//     else
//         {
//             cout<<"No thanks. Exams are on Friday.";
//             cout<<" You have plenty of time to slack off on your\nphone! Plus, it'll only be an hour! (+0)"<<endl<<endl;
//         }
    
        
//     //Day 1 Third Choice
//     cout<<"It is now around 2:30 P.M. You see a text message from your friend, Bailey."<<endl;
//     cout<<"“Wanna hang?”, it reads. Hang? And do what?"<<endl;
//     cout<<"Who cares? Sounds kind of fun anyway. You’ve already worked so hard today too."<<endl;
//     cout<<"Some more study time wouldn't kill you though..." <<endl<<endl;

//     cout<<"Hangout with Bailey? Type [Y] or [N]"<<endl;
//     cin>>choice[2];

// while (choice[2] != 'Y' && choice[2] != 'y' && choice[2] != 'N' && choice[2] != 'n')
//     {
//         cout<<"Please type either Y or N."<<endl;
//         cin>>choice[2];
//     }
	
//     if (choice[2] == 'Y' || choice[2] ==  'y')
//         {
//             cout<<"'What time?' you respond. 'Now lol', they reply 5 minutes later."<<endl;
//             cout<<"You read the message and begin getting ready."<<endl<<endl;
            
//             cout<<"You return home. At 2 A.M. Turns out "<<endl;
//             cout<<"your friend hadn't disclosed 100% of the plans for the day, or any really."<<endl;
//             cout<<"What began as a simple trip to Whataburger turned into a SICK beach move with your friends."<<endl;
//             cout<<"There was a bonfire, plenty of CRAZY STUFF ;) and WAY TOO MANY PEOPLE,\n";
//             cout<<"Bailey is way too popular for their own good. You’re absurdly tired, but manage to"<<endl;
//             cout<<"faintly remember some people testing out who was willing to jump over the firepit the most."<<endl;
//             cout<<"Everybody made it over, at least you think they did. (-1)"<<endl;
//             score-=1;

//         }
//     else
//         {
//             cout<<"Good idea, right? You need to get some studying in. It's the week OF finals."<<endl;
//             cout<<"You have to take 4 and you literally haven’t even begun studying AT ALL."<<endl;
//             cout<<"Might as well get the worst study session of the day out of the way first:\nCalculus. (+1)"<<endl;
//             score+=1;


//         }
//         cout<<score<<endl<<endl;
//     //Day 2 Intro
//     cout<<"So shut eye was a bust, for the most part. You were up studying,"<<endl;
//     cout<<"(at least you tried studying) and got little to no sleep."<<endl;
//     //Day 2 First Choice
//     cout<<"You check your disgusting alarm clock, it's 8 A.M. Jesus, 8 A.M???????"<<endl;
//     cout<<"You could go back to sleep, but you could also study more. Finals are in 3 days…"<<endl<<endl;

//     cout<<"Fall back asleep? Type [Y] or [N]"<<endl;
//     cin>>choice[3];

//     while (choice[3] != 'Y' && choice[3] != 'y' && choice[3] != 'N' && choice[3] != 'n')
//     {
//         cout<<"Please type either Y or N."<<endl;
//         cin>>choice[3];
//     }
//     cout<<endl<<endl;

//     if (choice[3] == 'Y' || choice[3] == 'y')
//         {
//             cout<<"Your brain is lacking on practically all fronts,"<<endl;
//             cout<<"even if you tried studying, you would just fall in and out of sleep anyway. (+0)";
//         }
//     else
//         {
//             cout<<"Nice! I'm proud of the perseverance you've shown!"<<endl;
//             cout<<"Let's hope it pays off…"<<endl;
//             cout<<"[Press enter to continue]"<<endl;
//             cin.get();
//             cout<<endl;
//             cout<<"You fall asleep after studying for ten minutes (-1)"<<endl;
//             score-=1;
//             cout<<score<<endl<<endl;
            
//         }
//     //Day 2 Second Choice
//     cout<<"You reawaken at 12 noon. I  guess you really needed that extra shut eye."<<endl; 
//     cout<<"Say goodbye to your sleep schedule though. Time to hit the books."<<endl<<endl;

//     cout<<"Study some more? Enter [Y] or [N]"<<endl;
//     cin>>choice[4];

//     while (choice[4] != 'Y' && choice[4] != 'y' && choice[4] != 'N' && choice[4] != 'n')
//     {
//         cout<<"Please type either Y or N."<<endl;
//         cin>>choice[4];
//     }

//     if (choice[4] == 'Y' || choice[4] == 'y')
//         {
//         cout<<"'I shall best you psychology!', you proclaim. (+1)"<<endl;
//         score+=1;
//         cout<<score;
//         } 
//     else 
//         {
//             cout<<"A little TikTok break won't kill anybody."<<endl;
//             cout<<"And I know you said that last time, but this time YOU'RE SERIOUS."<<endl;
//             cout<<"Press [Enter] to continue"<<endl;
//             cin.get(); //doesn't work for some reason. need to fix
//             cout<<endl;
//             cout<<"You end up scrolling on TikTok for 2 hours. (-1)"<<endl;
//             score-=1;
//             cout<<score<<endl<<endl;
//         }
        
//     //Day 2 Third Choice
//     cout<<"It's 5 P.M. Your head hurts. You decide to go to the Dining Hall to get some food in you."<<endl;
//     cout<<"As you're eating a scrumptious assortment of salami, you spot another good friend of yours from one of your classes, Blake."<<endl;
//     cout<<"'That bonfire was freaking crazy,' Blake remarks. 'I know, right,' you exclaim, as if you remember half of what happened last night or if"<<endl;
//     cout<<"they were even there."<<endl;
//     cout<<"Press [Enter] to continue";
//     cin.get();
//     cout<<endl;
    
//     cout<<"You and Blake sit and talk for an hour,"<<endl;
//     cout<<"Blake brings up the idea of hanging out later that night. Maybe just cruise around town listening to music?"<<endl<<endl;

//     cout<<"Go cruising with Blake? Enter [Y] or [N]"<<endl;
//     cin>>choice[5];
    
//     while (choice[5] != 'Y' && choice[5] != 'y' && choice[5] != 'N' && choice[5] != 'n')
//     {
//         cout<<"Please type either Y or N."<<endl;
//         cin>>choice[5];
//     }
    
//     if (choice[5] == 'y' || choice[5] == 'Y')
//     {
//         cout<<"You have three days to study, what could go wrong?"<<endl<<endl;
        
//         cout<<"YOU'RE MOVIGN AT (what feels like) 100 MILES AN HOUR. THE SUN ROOF IS DOWN. THE WIND IS"<<endl;
//         cout<<"MOVING THROUGH YOU LIKE A WEEDBLOWER TO THE FACE."<<endl;
//         cout<<"YOU LOOK LIKE YOU JUST GOT PUNCHED IN SLOW MOTION IN A DISNEY MOVIE THE WAY YUOR MOUTH IS FLARING"<<endl;
//         cout<<"ALL OVER THE PLACE. EVERYTHING SEEMS SO FAST. THIS IS NOT JUST A CUIRSE. HOW DID THIS END UP HAPPENING?!"<<endl;
//         cout<<"IS THAT A CAT??????? OH GOD. THE CAR IS MOVING SO QUICKLY, YOU THINK YOU'RE GOING TO BE SICK."<<endl;
//         cout<<"Press [Enter] to continue";
//         cin.get();//not working??
//         cout<<endl<<endl<<"That was still pretty awesome though.:) (-1)"<<endl;
//         score -= 1;
//         cout<<score<<endl<<endl;
        
//     }
//     else
//     {
//         cout<<"I agree, studying is important, especially when it comes to the week of finals."<<endl;
//         cout<<"Plus, after a bit more sleep and a meal, you're more energized and ready to hit the books."<<endl;
//         cout<<"You say goodbye to Blake and head back to your dorm to begin. (+1)"<<endl;
//         score += 1;
//         cout<<score<<endl<<endl;
//     }
//     //Day 3 Intro
//         cout<<"Let's start the day off right..."<<endl;
//     //Day 3 First Choice
//     cout<<"On Twitter? If not, might as well study.... Type [Y] or [N]"<<endl;
//     cin>>choice[6];

//     while (choice[6] != 'Y' && choice[6] != 'y' && choice[6] != 'N' && choice[6] != 'n')
//         {
//             cout<<"Please type either Y or N."<<endl;
//             cin>>choice[6];
//         }

//     if (choice[6] == 'Y' || choice[6] == 'y')
//         {
//             cout<<"Interesting choice… OK! It’s your life I guess. (-1)"<<endl;
//             score-=1;
//             cout<<score<<endl<<endl;
//         }
        
//     else
//         {
//             cout<<"Wow! Look at you! All grown up. Making good life choices. Brings a tear to my eye. (+0)"<<endl;
//             cout<<score;
//         }
//     //Day 3 Second choice
//     //Intro
//     cout<<"I need to study. Finals are in 2 DAYS. Pushing yourself a little never hurt anybody..."<<endl<<endl;
//     cout<<"Study some more? Type [Y] or [N]";
//     cin>>choice[7];

//     while (choice[7] != 'Y' && choice[7] != 'y' && choice[7] != 'N' && choice[7] != 'n')
//         {
//             cout<<"Please type either Y or N."<<endl;
//             cin>>choice[7];
//         }
        
//     if (choice[7] == 'Y' || choice[7] == 'y')
//         {
//         cout<<"Let’s get to it! (+1)"<<endl;
//         score+=1;
//         cout<<score<<endl<<endl;
//         }

//     else
//         {
//         cout<<"You deserve a break!" <<endl;
//         cout<<"Twitter it is! (-1)"<<endl;
//         score-=1;
//         cout<<score<<endl<<endl;
//         }
//     //Day 3 Third choice
//     //Intro
//     cout<<"Some time has passed. It is now 4 P.M. Bailey shoots you another text again. You’re filled with excitement."<<endl;
//     cout<<"A party?? Finals are in 2 DAYS. You can't attend a party now! Type [Y] or [N]"<<endl<<endl;
//     cin>>choice[8];

//     cout<<"Attend the party with Bailey? Type [Y] or [N]"<<endl<<endl;

//     while (choice[8] != 'Y' && choice[8] != 'y' && choice[8] != 'N' && choice[8] != 'n')
//         {
//             cout<<"Please type either Y or N."<<endl;
//             cin>>choice[8];
//         }


//     if (choice[8] == 'Y' || choice[8] == 'y')
//         {
//             cout<<"Yes you can :)))). Press [Enter] to continue"<<endl<<endl;
//             cin.get();
//             cout<<"bruh. Press [Enter] to continue"<<endl;
//             cin.get();
//             cout<<"This party kinda bussin not gonna lie. Press [Enter] to continue"<<endl;
//             cin.get();
//             cout<<"Everybody is having a good time. Press [Enter] to continue"<<endl;
//             cin.get();
//             cout<<"The lights are just the right colors at just the right temperatures."<<endl;
//             cout<<"Press [Enter] to continue"<<endl;
//             cin.get();
//             cout<<"The vibe is good. Press [Enter] to continue"<<endl;
//             cin.get();
//             cout<<"You think the kool-aid is good for the right reasons. You [get the idea]."<<endl;
//             cin.get();
//             cout<<"Is that drake??"<<endl;
//             cout<<"Ayy bruh drake performing on da table right now no way"<<endl;
//             cin.get();
//             cout<<"Ay"<<endl;
//             cin.get();
//             cout<<"Go off"<<endl;
//             cin.get();
//             cout<<"Ay"<<endl;
//             cin.get();
//             cout<<"Aww, Bailey has a puppy. How could you have forgotten?"<<endl;
//             cin.get();
//             cout<<"What the"<<endl;
//             cin.get();
//             cout<<"The dog dancing w drake rn lol"<<endl;
//             cin.get();
//             cout<<"On da table"<<endl;
//             cin.get();
//             cout<<"It's doing some sort of weird dance"<<endl;
//             cin.get();
//             cout<<"Is that from fortnite lol"<<endl;
//             cin.get();
//             cout<<"What da dog doin"<<endl;
//             cin.get();
//             cout<<endl<<endl;
//         cout<<"Maaan you should prolly just go to sleep at this point you feel kinda funny"<<endl;
//         cout<<"Thankfully there is a bed right here"<<endl<<endl;

//         cout<<"You fall asleep face first on the floor of Bailey's bedroom. (-1)"<<endl;
//         score-=1;
//         cout<<score;
//     }   
//     else 
//         {
//         cout<<"Right! I completely agree. You seem like such a fun person to be around! (+1)"<<endl;
//         score+=1;
//         cout<<score;
//         }

//     cout << endl;
//     cout << "Day 4\n";
//     cout << "Press [enter] to continue\n";
//     cin.get();
//     //day 4 intro
//     //if he went to the party
//     if (choice[8] == 'Y' || choice[8] == 'y')
//     {
//         cout << "Your head hurts and you're in Bailey's room.\n";
//         cout << "You quickly leave\n";
//         cout << "Press <enter> to continue\n";
//         cin.get();
//         cout << "You get a text from Bailey\n";
//         cout << "Bailey: Yesterday was amazing, we should do it again tonight!\n";
//         cout << "Blake also shoots you a text.\n";
//         cout << "When are we going to hang out? it's already been TWO DAYS!\n";
//         cout << "Press [enter] to continue\n\n";
//         cin.get();
//     }
//     //if he didn't go to the party
//     else
//     {
//         cout << "You didn't do much yesterday besdies study, at least you'll be on track for school!\n\n";
//         cout << "Press [enter] to continue" <<endl<<endl;
//         cin.get();
//     }
//     //end of day 4 intro

//     cout << "It's really early you can snack on some cereal and watch Netflix,\n";
//     cout << "or you have better things to do other than eating and get your good nap\n";
//     cout << "will you nap or snack and watch Netflix?\n Type y for nap or n for netflix\n\n";
//     cin >> choice[9];
//     while (choice[9] != 'Y' && choice[9] != 'y' && choice[9] != 'N' && choice[9] != 'n')
//         {
//             cout<<"Please type either Y or N."<<endl;
//             cin>>choice[9];
//         }
//     if (choice[9] == 'Y' || choice[9] == 'y')
//     {
//         cout << "You grab some cereal.. MMM!! Captain Crunch for today with extra milk.\n";
//         cout << "*turns on the tv*\n";
//         cout << "*kick up your feet\n";
//         cout << "*CRONCH* (+0)\n";
//         cout << score << endl;
//     }
//     else
//     {
//         cout << "You take your nap and this is very healthy for your brain (+1)\n";
//         score += 1;
//         cout << score << endl;
//     }


//     cout << "Tomorrow is the big day, you have so many questions about Philosphy.\n *ding*\n";
//     cout << "Blake: Yo, so are we gonna hang out or what?\n y or n?\n\n";
//     cin >> choice[10];
//     while (choice[10] != 'Y' && choice[10] != 'y' && choice[10] != 'N' && choice[10] != 'n')
//         {
//             cout<<"Please type either Y or N."<<endl;
//             cin>>choice[10];
//         }
//     if (choice[10] == 'Y' || choice[10] == 'y')
//     {
//         cout << "*You shoot a text*\n";
//         cout << "Yea let's go get some food from the new restaurant that just opened\n";
//         cout << "You go out to hang with Blake and the food is amazing (-1)\n";
//         score -= 1;
//         cout << score << endl;
//     }
//     else
//     {
//         cout << "*You shoot a text*\n";
//         cout << "Sorry bro, I have to study for the finals\n";
//         cout << "You send your professors a email asking questions\n";
//         cout << "Can you really know everything\n";
//         cout << "...\n";
//         cin.get();
//         cout << "...\n";
//         cin.get();
//         cout << "...\n";
//         cin.get();
//         cout << "The professor is always asking these philosophical question.. Very unhelpful(+0)\n\n";
//         cout << score << endl;
//     }

//     cout << "*ding*\n";
//     cout << "*ding*\n";
//     cout << "*ding ding ding*\n";
//     cout << "Messages from Bailey\n";
//     cout << "You open the messages and Bailey wants to hang out again, but tomorrow is the important day!!\n";
//     cout << "Do you hang out with Hailey or study some more? y to hang out and n to study \n\n";
//     cin >> choice[11];

//     while (choice[11] != 'Y' && choice[11] != 'y' && choice[11] != 'N' && choice[11] != 'n')
//         {
//             cout<<"Please type either Y or N."<<endl;
//             cin>>choice[11];
//         }
//     if (choice[11] == 'Y' || choice[11] == 'y')
//     {
//         cout << "Of course we can hang out!\n";
//         cout << "Hailey comes over with 4 others and you go to the beach!\n";
//         cout << "You plan on staying for two hours no biggie\n";
//         cout << "2hrs go by and it starts to rain\n";
//         cout << "Yall try to start the car and its stuck for another 2 hrs but it was fun either way, but\n";
//         cout << "you left yourself no time to study(-1)\n";
//         score -=1;
//         cout << score << endl;
//     }
//     else
//     {
//         cout << "Sorry I have exams tomorrow, maybe another day?\n";
//         cout << "Of course im free anytime\n";
//         cout << "You hit the books and your knowledge grows (+1)\n";
//         score += 1;
//         cout << score << endl;
//     }

//     cout << "DAY OF EXAM" << endl;
//     if(score < 0)
//     {
//         cout << "You went the party route! You only had a good time and won at life, but you bombed the test\n";
//         cout << "really badly.\n Really really badly.\n I don't think you got a single question right.\n Maybe study a bit more next time...\n";
//     }
//     else if(score >= 0 && score <= 0)
//     {
//         cout << "You went the boring route...\n";
//         cout << "You did absolutely nothing with your week..\n";
//         cout << "You didn't study enough, you failed\n";
//     }
//     else
//     {
//         cout << "You went the smart route. All you did was study, but you could've at least had a little fun\n";
//         cout << "You got the best grade, but it comes with a major headache.\n";
//     }


    cout << "your total score was " << score << endl;
    cout << "Submit a name for your score: " << endl;
    cin >> name;
    createScore(score,name);

    // int a =0;
    // int dayCounter = 0;
    // day(a);
    // cout<<"Here will be present the opportunties (if-statements) the player is presented with throughout day 1. We are still working on the finer details "<<endl;
    // cout<<"of the story."<<endl<<endl;
    // day(a);
    // cout<<"Here will be present the opportunties (if-statements) the player is presented with throughout day 2. We are still working on the finer details "<<endl;
    // cout<<"of the story."<<endl;

    // char answer;
    // cout<<"Will you attend your friends house? If so, enter Y. If not, enter N."<<endl;
    // cin>>answer;
    
    // //input validation
    // while (answer != 'Y' && answer != 'y' && answer != 'N' && answer != 'n')
    // {
    //     cout<<"Invalid input. Please type either Y or N. Y for yes, N for no."<<endl;
    //     cin>>answer;
    // }
    
    // if(answer ==  'Y' || answer == 'y')
    // {
    //     cout<<"You decide to attend your friends place at Momentum Village. Turns out she invited TONS of people."<<endl;
	// 	cout<<"There are up to 40 people in this little, now jam packed apartment."<<endl;
	// 	cout<<"There are lights flashing everywhere and music is ABSOLUTELY BLARING. You dance all night without a care in the world, "<<endl;
    //     cout<<"you had a great time, you think. You also wake up the next morning with an awful migraine.";
    //          //update points
    // }
    
    // if(answer == 'N' || answer == 'n')
    // {
    //     cout<<"As originally intended, you decide to study versus going to your friend's house. You feel slightly proud of yourself for not giving into "
    //     "the temptation of that apparent party. Now's a good time to get some quality study time in.";
    //     //update points?
    // }

    // int choice = 0;
    
    // cout<<"You decide you are going to study for either 1, 2, or 3 hours when you get home in preparation for finals."<<endl;
    // cout<<"How many hours will you study for (1-3)?"<<endl;
    // cin>>choice;
    
    // //input validation
    // while (choice != 1 && choice != 2 && choice != 3)
    // {
    //     cout<<"Invalid input. You can only study either 1, 2, or 3 hours. Any longer (or shorter) is not ideal, don't you think?"<<endl;
    //     cout<<"Please input either 1, 2 or 3."<<endl;
    //     cin>>choice;
    // }
    
    // //if-statement in form of switch statement
    // switch (choice)
    // {
    //     case 1: cout<<"You end up only studying for "<< realStudytime(choice) << " minutes due to how distracting TikTok is!"<<endl;
    //         break;
    //     case 2: cout<<"You end up only studying for "<< realStudytime(choice) << " hour due to how distracting TikTok is!"<<endl;
    //         break;
    //     case 3: cout<<"You end up only studying for "<< realStudytime(choice) << " hours due to how distracting TikTok is!"<<endl;
    //     //no default needed due to input validation previously
    // }
}


// creates and checks achievements that the player may have made throughout the game
// I will have read in and out a file in order to save the answers through multiple code runs


void acheivementsPage(){
    if(arr[0] == "True"){
        cout << "Wonderful Student: Achieve the good ending" << endl;
    }
    if(arr[1] == "True"){
        cout << "Amazing partier: Achieve the bad ending" << endl;
    }
    if(arr[2] == "True"){
        cout << "In-Betweener: Achieve the best ending" << endl;
    }
}

void day(int &a)
{
    a+=1;
    cout<<"It is now day "<<a<<"."<<endl;
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

//changes color of text
void colorChanger(){
    char color;
    cout << "To change color choose (R)ed, (B)lue, (G)reen or (N) to leave normal" << endl;
    cin >> color;
    while(color != 'R' && color != 'B' && color != 'G' && color != 'N'){
        cout << "Invalid color! Please enter R, B, G, or N" << endl;
        cin >> color;
    }
    if(color == 'R'){
        system("color 0C");
    }
    else if(color == 'B'){
        system("color 09");
    }
    else if(color == 'G'){
        system("color 0A");
    }
    else if(color == 'N'){
        system("color 07");
    }
}