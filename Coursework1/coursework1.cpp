/* Header File Declarations*/
#include "coursework1.h"
#include "mapping.h"

/* Function Declarations*/
void processArray(string value, int strlength);
int printLine (const char* [6], int rowNum);\
void printSpaces();



//The input functions is used to take user input from the command line and pass it to the processArray Function
int input(int argc, char** argv){

    string value;

    // argc will be used to control how many strings are made and how many strings are processed
    for (int i=0 ; i+1<argc ; i++){

    //the argument is passed through via the array argv into a string called value

        cout << "String = "<<argv[i+1] << endl;
        value = argv[i+1];
        cout << endl;

        int strlength = value.length();
        processArray (value,strlength);
        cout << endl;
    }

    return 0;

}

//This functions will process the input string and print out the big text based on each character in the string

void processArray (string value, int strlength){

// Nested Loops is to control the number of rows and times to print a certain line
// This function works by printing line by line of each Big Text, after printing the first line for the first row of every string then it will move on to next row
// rowNum controls which row the function printLine is printing on
// strLength knows how many characters in a string to print

    for (int rowNum =0; rowNum < 5 ; rowNum++){

        cout << " ";

//A for loop is used to check the character of every string, each character will also pass through a switch case, where the individual arrays of the character mapping will be printed
        for (int i =0;  i < strlength; i++){

        switch (value[i]){

        case 'A':
            printLine(A,rowNum);
            break;

        case 'B':
            printLine(B,rowNum);
            break;

        case 'C':
            printLine(C,rowNum);
            break;

        case 'D':
            printLine(D,rowNum);
            break;

        case 'E':
            printLine(E,rowNum);
            break;

        case 'F':
            printLine(F,rowNum);
            break;

        case 'G':
            printLine(G,rowNum);
            break;

        case 'H':
            printLine(H,rowNum);
            break;

        case 'I':
            printLine(I,rowNum);
            break;

        case 'J':
            printLine(J,rowNum);
            break;

        case 'K':
            printLine(K,rowNum);
            break;

        case 'L':
            printLine(L,rowNum);
            break;

        case 'M':
            printLine(M,rowNum);
            break;

        case 'N':
            printLine(N,rowNum);
            break;

        case 'O':
            printLine(O,rowNum);
            break;

        case 'P':
            printLine(P,rowNum);
            break;

        case 'Q':
            printLine(Q,rowNum);
            break;

        case 'R':
            printLine(R,rowNum);
            break;

        case 'S':
            printLine(S,rowNum);
            break;

        case 'T':
            printLine(T,rowNum);
            break;

        case 'U':
            printLine(U,rowNum);
            break;

        case 'V':
            printLine(V,rowNum);
            break;

        case 'W':
            printLine(W,rowNum);
            break;

        case 'X':
            printLine(X,rowNum);
            break;

        case 'Y':
            printLine(Y,rowNum);
            break;

        case 'Z':
            printLine(Z,rowNum);
            break;

        case '1':
            printLine(one,rowNum);
            break;

        case '2':
            printLine(two,rowNum);
            break;

        case '3':
            printLine(three,rowNum);
            break;

        case '4':
            printLine(four,rowNum);
            break;

        case '5':
            printLine(five,rowNum);
            break;

        case '6':
            printLine(six,rowNum);
            break;

        case '7':
            printLine(seven,rowNum);
            break;

        case '8':
            printLine(eight,rowNum);
            break;

        case '9':
            printLine(nine,rowNum);
            break;

        case '0':
            printLine(zero,rowNum);
            break;

        case '!':
            printLine(exclamation,rowNum);
            break;

        case '?':
            printLine(question,rowNum);
            break;

        case '(':
            printLine(openBracket,rowNum);
            break;

        case ')':
            printLine(closeBracket,rowNum);
            break;

        case '[':
            printLine(openSquare,rowNum);
            break;

        case ']':
            printLine(closeSquare,rowNum);
            break;

        case '.':
            printLine(dot,rowNum);
            break;

        case ',':
            printLine(punctuation,rowNum);
            break;


//when none of these cases are fulfilled, a blank space will be printed because it indicates the characters is not recognised
        case ' ':
            printSpaces();
            break;

        default:
            printSpaces();

        }
        cout << " ";
    }
    cout << endl;
  }
}

// This functions prints lines based on the assigned row of that array
int printLine (const char* test[6],int rowNum){


        for (int a =0; a <6 ; a++)
        {
        cout << test [rowNum][a] << "";
        }

        return 0;
}


//function used to print blank space when there is a space between strings or unrecognized characters

void printSpaces ()
    {
    cout <<  "    ";
    }









