//drink machine

//make array of 5 structs

#include <iostream>
#include <cstdlib> //math stuffs
#include <iomanip>
#include <string>

using namespace std;

//consts
const int NUM_DRINKS = 5;

struct Drink
{
    string name;
    double price;
    int num;
};

//prototypes
int getChoice(Drink []);
void transaction(Drink [], int, double &);

int main() {

    //menu choice
    int choice;
    // machine earnings
    double earnings = 0;
    //array of drinks
    Drink machine[NUM_DRINKS] = {
            {"Cola", 0.75, 20},
            {"Root Beer", 0.75, 20},
            {"Lemon-Lime", 0.75, 20},
            {"Grape Soda", 0.80, 20},
            {"Cream Soda", 0.80, 20}
    };

    //set floating points
    cout << fixed << showpoint << setprecision(2);

    //display menu and prices
    choice = getChoice(machine;
    while (choice != 5)){

        transaction(machine, choice, earnings);

        choice = getChoice(machine);

    }

    //display machine earnings


    return 0;

}


int getChoice(Drink m[])
{

    int choice;

    cout << endl;

    for(int i = 0; i < NUM_DRINKS; i++){

        cout << (i+1) << ") " << m[i].name << "\t\t";
        cout << m[i].price << endl;

    }

    cout << (NUM_DRINKS + 1) << ") Leave the drink"

}


void transaction(Drink [], int, double &)
{



}
