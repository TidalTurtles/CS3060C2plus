//
// Created by noah holt on 2/24/23.
//

#include <iostream>
#include <string>

using namespace std;

#ifndef HW13_4_PATIENT_H
#define HW13_4_PATIENT_H


class Patient {

private:
    string firstName;
    string middleName;
    string lastName;

    string address;
    string city;
    string state;
    int zipCode;

    string phoneNumber;

    string emergencyName;
    string emergencyPhone;

public:
    Patient(string, string, string, string, string, string, int, string, string, string);

    //setters
    void setName(string, string, string);
    void setAddress(string, string, string, int);
    void setPhone(string);
    void setEmergency(string, string);

    //getters
    string getName();
    string getAddress();
    string getPhone();
    string getEmergency();

};


#endif //HW13_4_PATIENT_H
