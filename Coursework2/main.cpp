#include "coursework2.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Name:Wong Zhi Yuan
//StudentID:20306454
//This is Coursework 2 for EEEE2065. Random Number Guesser
//This game contains two modes, HumanGuess & Computer Guess.
//HumanGuess lets the user input to play the guessing game.
//ComputerGuess will be played by the computer to generate a histogram and some statistics
//The user can determine the range of number from 1 to N and the number of cycles you would like to see played by the computer

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int option;
    srand(time(0));
    Guess A;

    cout<<"Welcome to the Guess My Number Game" << endl;
    cout<<"Please select a gamemode" << endl;
    cout<<"1: Computer v.s. Human" << endl;
    cout<<"2: Computer vs Computer" << endl;
    cin>>option;

    if (option==1){
        A.humanGuess();
    }
    else if (option==2){
        A.computerGuess();
    }
    else
        cout<< "Please enter a valid number! " << endl;

    return 0;
}
