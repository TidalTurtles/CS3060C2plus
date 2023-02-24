/*
 * Noah Holt
 * CS 3060 C++
 * Spring 23
 * Due date: 13 feb 23
 *
 * 11.8: search function
 *
 *          Define address struct from 11.7
 *          make array of the above structs
 *
 *          make search function
 *              takes name
 *              finds ALL that match
 *              displays customers found
 *              if none then say so
 *
 */

#include <iostream>


using namespace std;

struct userAccounts
{

    string name;
    string address;
    string cityStateZip;
    int phone;
    double balance;
    string lastPayment;

};

const int numUsers = 5;

//prototype
void searching(userAccounts *,userAccounts *, string);

//from lab
void getInfo(userAccounts&);
void showInfo(userAccounts);
void showSearch(userAccounts[], string, int);


int main() {

    //define array
    userAccounts onFile[numUsers];
    userAccounts matching[numUsers];

    //define accounts with random info
    onFile[0].name = "joe";
    onFile[0].address = "main street";

    onFile[1].name = "jim";
    onFile[1].address = "rough street";

    onFile[2].name = "sally";
    onFile[2].address = "main street";

    onFile[3].name = "joe";
    onFile[3].address = "second street";

    onFile[4].name = "Jane";
    onFile[4].address = "pretty street";

    //search function
    int orderNumber = 0;

    for(int i = 0; i < numUsers; i++){

        if(onFile[i].name == "joe"){

            matching[orderNumber] = onFile[i];
            orderNumber++;

        }

    }

    //display users
    for(int i = 0; i < numUsers; i++){
        if(!matching[i].name.empty()) {
            cout << matching[i].name << " lives on " << matching[i].address << endl;
        }
    }

    return 0;

}
