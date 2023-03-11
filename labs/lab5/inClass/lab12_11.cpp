//
// Created by noah holt on 3/1/23.
//


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//const
const int SIZE = 12;

//struct
struct Division{

    char divName[SIZE];
    int quarter;
    double sales;

};

//funcs


int main() {

    //files stream from corp.dat
    fstream file("corp.dat", ios::out | ios::binary); // binary avoids \n from source

    //div struct for each
    Division east, west, north, south

    //lop each quarter
    int qtr;

    //assign div names to divs
    //struct vars
    strcpy(east.divName, "East"); //    He wants strcpy_s
    strcpy(west.divName, "West"); //    gives error on my machine
    strcpy(north.divName, "North"); //  error not found
    strcpy(south.divName, "South"); //  red words (how fix?)

    //get east sales (could do as func passing the structs)
    cout << "Enter the quarterly sales for the East Division: \n";
    for (qtr = 1;  qtr <= 4; qtr++) {

        east.quarter = qtr;
        cout << "\tQuarter " << qtr <<": ";
        cin >> east.sales;
        file.write(reinterpret_cast<char *>(&east), sizeof(east));

    } //same for all

    //West sales
    cout << "Enter the quarterly sales for the West Division: \n";
    for (qtr = 1;  qtr <= 4; qtr++) {

        west.quarter = qtr;
        cout << "\tQuarter " << qtr <<": ";
        cin >> west.sales;
        file.write(reinterpret_cast<char *>(&west), sizeof(west));

    }

    //north
    cout << "Enter the quarterly sales for the North Division: \n";
    for (qtr = 1;  qtr <= 4; qtr++) {

        north.quarter = qtr;
        cout << "\tQuarter " << qtr <<": ";
        cin >> north.sales;
        file.write(reinterpret_cast<char *>(&north), sizeof(north));

    }

    //south
    cout << "Enter the quarterly sales for the South Division: \n";
    for (qtr = 1;  qtr <= 4; qtr++) {

        south.quarter = qtr;
        cout << "\tQuarter " << qtr <<": ";
        cin >> south.sales;
        file.write(reinterpret_cast<char *>(&south), sizeof(south));

    }

    file.close();

    return 0;

}
