//Password verifier

//Probably on midterm ****

#include <iostream>
using namespace std;

//global constants
const int SIZE = 80;
const int MIN = 6;

//funcs
bool hasLength(char[], int minimum);
bool hasUpper(char[]);
bool hasLower(char[]);
bool hasDigit(char[]);
bool isValid(char[]);

void displayResults(char[]);
void displayRequirements(char[]);

//other file displayRequirements

int main() {

    char cstring[SIZE];

    //display requirements
        //output requirements for password
        //min length
        //one uppeer
        //one lower
        //one digit

    //get input
    cout << "Enter Password: ";
    cin.getline(cstring, SIZE);

    //display results
    displayResults(cstring);
        //make if valid
            //good
        //else
            //check wrong
            //print all

    return 0;

}
