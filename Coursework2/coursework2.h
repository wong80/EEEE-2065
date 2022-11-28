#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;


class Guess{

private:
    int flag=1; // the flag variable determines when the loop should stop after the guessNumber is equal to the target
    int target; // target is the number generated to be guessed by the human or the computer
    int guessNumber; //guessNumber is the attempted guess by human or computer
    int LOWER_LIMIT=1; //determine the lower bound of number to be generated
    int UPPER_LIMIT; // determine the upper bounder of the number to be generated
    int CONST_UPPER_LIMIT;
    int counter; //counter determines the number of attempts the human or computer uses to guess the target
    int decision; //0 means the number is correct ; 1 means the number is lower ; 2 means the number is higher
    int n; //n is a variable that controls the number of times the computer plays the guessing game by itself
    float total;// total is a variable used to calculate the total of the counter of each attempt
    float EX; // EX is a variable used to calculate the total of the counter of each cycle squared
    float sigma; //Sigma is sigma
    int maxNum; //maxNum is the variable of the max number of attempts taken to guess the number
    float mean; //mean is the mean number of times for computer to attempt to guess the number
    int arr[]; //arr is an array used to store the number of attempts from each individual cycle

public:

    //setter functions
    void setGuessNumber (int guessNumber) {this->guessNumber=guessNumber;}
    void setLOWER_LIMIT(int LOWER_LIMIT) {this->LOWER_LIMIT=LOWER_LIMIT;}
    void setUPPER_LIMIT(int UPPER_LIMIT) {this->UPPER_LIMIT=UPPER_LIMIT;}
    void setTarget(int target) {this->target=target;}
    void setDecision (int decision) {this->decision=decision;}
    void setCounter(int counter) {this->counter=counter;}
    void setmaxNum (int maxNum) {this->maxNum=maxNum;}
    void setN (int n) {this->n=n;}
    void setConstUpperLimit(int CONST_UPPER_LIMIT){this->CONST_UPPER_LIMIT=CONST_UPPER_LIMIT;}

    //calculation functions
    float calculateMean(int*,int);
    float calculateSigma(int*,int);
    void calculateMax(int*,int);

    //program functions
    void generateGuess();
    void generateTarget();
    void compareNumberHuman(int,int);
    void compareNumberComputer(int,int);
    void userInput();
    void computerDecision(int,int);
    void computerGuess(int,int);
    void makeHistogram(int*,int);
    void computerGuess();
    void humanGuess();



};





