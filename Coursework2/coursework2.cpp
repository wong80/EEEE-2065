#include "coursework2.h"

//function to initialize HumanGuess mode of the program
void Guess::humanGuess(){

    cout<< "Please state the upper bound you would like: " << "";
    cin>>UPPER_LIMIT;
    setUPPER_LIMIT(UPPER_LIMIT);
    cout<< endl;
    counter=0;
    generateTarget();
    while (flag==1){

        userInput();
        compareNumberHuman(target,guessNumber);

    counter++;
    }
    cout << "Congratulations ! It took you " << counter << " attempts to get the right number" << endl;


}

//function to initialize ComputerGuess mode of the program
void Guess::computerGuess(){
    cout<< "Please state the upper bound you would like: " << "";
    cin>>UPPER_LIMIT;
    setUPPER_LIMIT(UPPER_LIMIT);
    setConstUpperLimit(UPPER_LIMIT);
    cout<< endl;
    cout<< "How many cycles would you like ?" << "";
    cin>>n;
    setN(n);

    for (int i=0;i<n;i++){
    flag=1;
    setCounter(0); //counter is set to zero after every cycle
    generateTarget(); //target is changed after every cycle
    generateGuess();

    while (flag==1){

        compareNumberComputer(target,guessNumber);
        computerDecision(guessNumber,decision);
        computerGuess(LOWER_LIMIT,UPPER_LIMIT);
        counter++;
        }
        arr[i]=counter; //the number of attempts is assigned into the array every cycle
        //the upper and lower bounds will be reset everytime the cycle refreshes
        setUPPER_LIMIT(CONST_UPPER_LIMIT);
        setLOWER_LIMIT(1);
    }


    calculateMax(arr,n);
    calculateMean(arr,n);
    calculateSigma(arr,n);
    cout << "Max : "<< maxNum << endl;
    makeHistogram(arr,n);
    cout << "Mean :" << mean << "  ";
    cout << "Sigma : "<< sigma << endl;
}

//function to make Histogram
void Guess::makeHistogram(int arr[],int n){

//Outer loop determines the number of rows to be printed
//Inner Loop determines the number of times "*" is printed based on the value of the array at that specific position
    for (int rowNum=0; rowNum < n;rowNum++){

        cout <<  rowNum << "/" << arr[rowNum] << " ";
        for (int j=0;j<arr[rowNum];j++){\

            cout<< "*";
        }
    cout << endl;


    }
}

//function to calculate mean
float Guess::calculateMean (int arr[],int n){

    for (int i=0;i<n;i++){
        total+=arr[i];
    }
    mean=total/n;
    return (mean);
}

//function to calculate max
void Guess::calculateMax(int arr[],int n){

// Initialize maximum element
    setmaxNum(arr[0]);

//each number in the array will iterated to be compared, largest number will be assigned to maxNum
    for (int i = 1; i < n; i++)
        if (arr[i] > maxNum)
            setmaxNum(arr[i]);

}

//function to calculate sigma

float Guess::calculateSigma(int arr[],int n){

    for (int i=0;i<n;i++){
        EX+=pow(arr[i],2);
    }

    sigma=(EX/n)-pow(mean,2);

    return (sigma);
}

//function to generate the target number
void Guess::generateTarget (){

        target= rand()%(UPPER_LIMIT-LOWER_LIMIT+1) + LOWER_LIMIT;

        setTarget(target);

}
//function to generate guessNumber
void Guess::generateGuess(){

    guessNumber= rand()%(UPPER_LIMIT-LOWER_LIMIT+1) + LOWER_LIMIT;

        setGuessNumber(guessNumber);

}

//function to receive user input for the guessNumber
void Guess::userInput(){

    cout<< "Guess a Number between " << LOWER_LIMIT << " to " <<UPPER_LIMIT << ":" << "";
    cin>> guessNumber;

    setGuessNumber(guessNumber);

}

//compares the value and lets the human know if the number guessed is lower of higher than the target
void Guess::compareNumberHuman(int target, int guessNumber){

    if (target == guessNumber){
        flag=0;
    }

    else if (target < guessNumber){
        cout << "The number " << guessNumber << " is higher than the real number" << endl;
        flag=1;
    }

    else if (target > guessNumber){
    cout << "The number " << guessNumber << " is lower than the real number" << endl;
        flag=1;
    }

}


//function to help computer determine its next decision
void Guess::compareNumberComputer(int target, int guessNumber){

    if (target == guessNumber){
        flag=0;
    }

    else if (target < guessNumber){
        flag=1;
        setDecision(2);
    }

    else if (target > guessNumber){
        flag=1;
        setDecision(1);
    }
}

//function for computer to make its decision by lowering its upper limit or increasing its lower limit
void Guess::computerDecision(int guessNumber,int decision){

    if (decision==0){ // number is correct

        flag=0;

    }
    else if (decision==1) {    //number is lower than target

    //if the number guessed is lower than the target, that means the numbers below the currently guessed number can be ignored
        setLOWER_LIMIT(guessNumber);

    }
    else if (decision==2) {   //number is higher than target

    //if the number guessed is higher than the target, that means the numbers above the currently guessed number can be ignored
        setUPPER_LIMIT(guessNumber);

    }

}


//function for computer to guess after the initial one
void Guess::computerGuess(int LOWER_LIMIT, int UPPER_LIMIT){

    guessNumber= rand()%(UPPER_LIMIT-LOWER_LIMIT+1) + LOWER_LIMIT;

    setGuessNumber(guessNumber);

    //to prevent computer from guessing the same number over and over again
    if (UPPER_LIMIT == guessNumber){
        setUPPER_LIMIT(UPPER_LIMIT-1);
    }
    else if (LOWER_LIMIT == guessNumber){
        setLOWER_LIMIT(LOWER_LIMIT+1);
    }

}
