//Password verifier

//Probably on midterm ****

#include <iostream>


using namespace std;


//global constants
const int SIZE = 80;
const int MIN = 6;

//funcs
bool hasLength(char[]);
bool hasUpper(char[]);
bool hasLower(char[]);
bool hasDigit(char[]);
bool isValid(char[]);

void displayResults(char[]);
void displayRequirements();

//other file displayRequirements

int main() {

    char cstring[SIZE];

    displayRequirements();

    //get input
    cout << "Enter Password: ";
    cin.getline(cstring, SIZE);

    //display results
    displayResults(cstring);

    return 0;

}

void displayRequirements()
{
    //BIG cout coming up.
    cout << "Password Requirements:" << endl;
    cout << "The Password should be at least " << MIN << " characters long!" << endl;
    cout << "The Password should contain at least one uppercase!" << endl;
    cout << "The Password should contain at least one lowercase!" << endl;
    cout << "The Password should contain at least one digit!" << endl;
}

bool hasLength(char str[])
{

    bool status = false;
    int count = 0;

    while(*str != '\0'){
        count++;
        *str++;
    }

    if(count >= MIN){
        status = true;
    }

    return status;

}

bool hasUpper(char str[])
{

    bool status = false;
    int count = 0;

    while(*str != '\0' && count == 0){

        if(isupper(*str)){
            count++;
        }

        *str++;

    }

    if(count > 0){
        status = true;
    }

    return status;

}

bool hasLower(char str[])
{

    bool status = false;
    int count = 0;

    while(*str != '\0' && count == 0){

        if(islower(*str)){
            count++;
        }

        *str++;

    }

    if(count > 0){
        status = true;
    }

    return status;

}

bool hasDigit(char str[])
{

    bool status = false;
    int count = 0;

    while(*str != '\0' && count == 0){

        if(isdigit(*str)){
            count++;
        }

        *str++;

    }

    if(count > 0){
        status = true;
    }

    return status;

}

//could be char* str[], char* str, char str[],
//first two are pointers
// if just array last char does not need to be \0
bool isValid(char str[])
{

    bool status = false;

    if (hasLength(str) && hasLower(str) && hasUpper(str) && hasDigit(str)){
        status = true;
    }

    return status;

}

void displayResults(char str[])
{

    if(isValid(str)){
        cout << "\nPassword is Valid!\n";
    } else {

        cout << "\nPassword is Invalid!!\n";

        //why invalid?
        if(!hasLength(str)){
            cout << "Password should be at LEAST " << MIN << " characters long!\n";
        }

        if(!hasLower(str)){
            cout << "Password should have at least ONE lowercase letter!\n";
        }

        if(!hasUpper(str)){
            cout << "Password should have at least ONE uppercase letter!\n";
        }

        if(!hasDigit(str)){
            cout << "Password should have at least ONE digit!\n";
        }

    }

}
