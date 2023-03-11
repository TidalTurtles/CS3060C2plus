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
    choice = getChoice(machine);
    while (choice != 5){

        transaction(machine, choice, earnings);

        choice = getChoice(machine);

    }

    //display machine earnings
    cout << "Total Earnings: $" << earnings << endl;

    return 0;

}


int getChoice(Drink m[])
{

    int choice;

    cout << endl;

    //display choices
    for(int i = 0; i < NUM_DRINKS; i++){

        cout << (i+1) << ") " << m[i].name << "\t\t";
        cout << m[i].price << endl;

    }
    //lastly
    cout << (NUM_DRINKS + 1) << ") Leave the drink machine \n\n";

    //user part
    cout << "What is your choice? ";
    cin >> choice;

    //validate
    while (choice < 1 || choice > (NUM_DRINKS + 1)){
        cout << "Invalid Choice, Try again! ";
        cin >> choice;
    }

    return (choice - 1);

}


void transaction(Drink m[], int choice, double &earnings)
{

    double money;

    //if sold out
    if(m[choice].num == 0){
        cout << "Sorry, that option is sold out.\n";
        return;
    }

    //take the money
    cout << "Enter an amount of money: ";
    cin >> money;

    //keep to a dollar or less
    while (money < m[choice].price || money > 1.00){
        cout << "Enter at least " << m[choice].price;
        cout << " and no bills greater than $1.\n";
        cin >> money;
    }

    //having fun and returning change.
    if (money >= m[choice].price){

        cout << "\nThump, Thump, Thump, Clank!\n";
        cout << "Enjoy your beverage!\n\n";

        cout << "Change Calculated: " << (money - m[choice].price) << endl;

        if ((money - m[choice].price) > 0){
            cout << "Your change has just been dropped in the change dispenser";
        }

        //update earnings
        earnings += m[choice].price;

        //lessen num of cans
        m[choice].num--;

        //display remainder
        cout << "There are " << m[choice].num << " left of that type.\n";

    }

}
