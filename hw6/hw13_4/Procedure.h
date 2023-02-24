//
// Created by noah holt on 2/24/23.
//

#include <iostream>
#include <string>

using namespace std;

#ifndef HW13_4_PROCEDURE_H
#define HW13_4_PROCEDURE_H


class Procedure {

private:
    string procedureName;
    string date;
    string doctorName;
    double charge;

public:
    Procedure(string, string, string, double );

    //setters
    void setProcedureName(string);
    void setDate(string);
    void setDoctorName(string);
    void setCharge(double);

    //getters
    string getProcedureName();
    string getDate();
    string getDoctorName();
    double getCharge();

};


#endif //HW13_4_PROCEDURE_H
