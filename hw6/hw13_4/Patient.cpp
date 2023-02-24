//
// Created by noah holt on 2/24/23.
//

#include <iostream>
#include <string>

#include "Patient.h"

using namespace std;

Patient::Patient(string first, string middle, string last, string street, string c, string s, int zip, string phone,
                 string ename, string ephone){

    firstName = first;
    middleName = middle;
    lastName = last;
    address = street;
    city = c;
    state = s;
    zipCode = zip;
    phoneNumber = phone;
    emergencyName = ename;
    emergencyPhone = ephone;

}

//setters
void Patient::setName(string first, string middle, string last)
{
    firstName = first;
    middleName = middle;
    lastName = last;
}

void Patient::setAddress(string street, string c, string s, int zip)
{
    address = street;
    city = c;
    state = s;
    zipCode = zip;
}

void Patient::setPhone(string phone)
{
    phoneNumber = phone;
}

void Patient::setEmergency(string ename, string ephone)
{
    emergencyName = ename;
    emergencyPhone = ephone;
}


//getters
string Patient::getName()
{
    string fullName = firstName + " " + middleName + " " + lastName;
    return fullName;
}

string Patient::getAddress()
{
    string fullAddress = address + ", " + city + ", " + state + ", " + to_string(zipCode);
    return fullAddress;
}

string Patient::getPhone()
{
    return phoneNumber;
}

string Patient::getEmergency()
{
    string emergencyContact = emergencyName + ": " + emergencyPhone;
    return emergencyContact;
}
