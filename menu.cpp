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
string acheivementsPage();
void options();
void outFile();
void inFile();
void colorChanger();

//clears screen --- "\33[h\33[2J"


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

void options(){
    char option;
    cout << "What setting would you like to change?" << endl;
    cout << "(C)olor, ?, ?" << endl;
    cin >> option;
    while(option != 'C'){
        cout << "invalid option! Please enter C" << endl;
        cin >> option;
    }
    if(option == 'C'){
        colorChanger();
    }
}



int main(){
    splashScreen();
    int option;
    do{
        for(int i = 0; i <= 10; i++){
            if(i == 1){
                cout << "| 1.start     2.achievements |" << endl;
            }
            else if(i == 8){
                cout << "| 3.options    4.exit        |" << endl;
            }
            else if( i== 0 || i == 10){
                cout << "------------------------------" << endl;
            }
            else{
                cout << "|                            |" << endl;
            }
        }

        cin >> option;

        while(option != 1 && option != 2 && option != 3 && option != 4){
            cout << "invalid input detected please enter another value 1-4" << endl;
            cin >> option;
        }
        switch(option){
            case 1: beginGame();
                    break;

            case 2: acheivementsPage(); //show achievements page
                    break;

            case 3: options(); //show whatever I have written for option 3;
                    break;

            case 4: cout << "Thanks for playing!!!" << endl;
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
    cout << "This is the beginning of the game" << endl;
    // clear output on begin game
    //if(value) or else if(value2) then this ending or this ending. 
    cout << "You wake up on a bright sunny day feeling the cool winter air beginning to breathe into your room" << endl;
    ofstream outFile;
    outFile.open("acheive.txt");
    int count = 1;
    for(int i = 1; i <= 3; i++){
        if(i == 1){
        outFile << "True" << endl;
    }
    if(i == 2){
        outFile << "True" << endl;
    }
    if(i == 3){
        outFile << "True" << endl;
    }
    }
    
    outFile.close();
}


// creates and checks achievements that the player may have made throughout the game
// I will have read in and out a file in order to save the answers through multiple code runs
string acheivementsPage(){
    int count = 1;
    string data;
    ifstream inFile;
    inFile.open("acheive.txt");

    if(!inFile)	
	{
        cout<<"File not found!\n";
        exit(EXIT_FAILURE);
    }

    while( inFile >> data){
        if (count == 1 && data == "True"){
            cout << "Wonderful Student: Achieve the good ending" << endl;
        }
        else if(count == 2 && data == "True"){
            cout << "Amazing partier: Achieve the bad ending" << endl;
        }
        else if (count == 3 && data == "True"){
            cout << "In-Betweener: Achieve the best ending" << endl;
        }
        count ++;
    }
    inFile.close();
    return "hello";
}