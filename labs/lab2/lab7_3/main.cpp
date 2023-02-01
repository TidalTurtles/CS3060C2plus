//lab: day 2 part 7.3
// Chips and salsa

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//prototypes
int getTotal(int[], int);
int posOfLargest(int[], int);
int posOfSmallest(int[], int);

//constants
const int NUM_TYPES = 5;

int main() {

    //arrays
    string types[NUM_TYPES] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int numSold[NUM_TYPES];

    //vars
    int totalJarsSold;
    int hiSalesProduct;
    int loSalesProduct;

    //each type
    for(int i = 0; i < NUM_TYPES; i++){

        //get num sold
        cout << "Jars sold last month of " << types[i] << ": ";
        cin >> numSold[i];

        //validate input
        while(numSold[i] < 0){

            cout << "Jars sold must be 0 or more. " << "Please enter 0 or greater: ";
            cin >> numSold[i];

        } //while

    } // for

    //call functions

    //Display
    cout << endl << endl;
    cout << "Sales Report \n\n";
    cout << "Name\t Jars Sold\n";
    cout << "-------------------------\n";
    for(int i = 0; i < NUM_TYPES; i++){
        cout << types[i] <<setw(21) << numSold[i] << endl;
    }

    cout << "\nTotal Sales:" << setw(15) << totalJarsSold << endl;
    cout << "High Seller:" << types[hiSalesProduct] << endl;
    cout << "Low Seller" << types[loSalesProduct] << endl;

    return 0;

}
