/*
 * Noah Holt
 * CS 3060 C++
 * Spring 23
 * Due date: 27 feb 23
 *
 * 13.4: Car Class
 *
 *          write patient class with given vars and funcs
 *          write procedure class with given vars and funcs
 *
 *
 *
 */

#include <iostream>
#include <iomanip>
#include "Patient.h"
#include "Patient.cpp"
#include "Procedure.h"
#include "Procedure.cpp"

using namespace std;

int main() {

    //vars
    double totalCharge;

    //create patient
    Patient jd("John", "infamous", "Doe", "121 Baker St.", "London", "England",
               7661, "867-5309", "Jane Doe", "867-5310");

    //print info of patient
    cout << "\nPatient Name: " << setw(23) << jd.getName() << endl;
    cout << "Patient Address: " << setw(39) << jd.getAddress() << endl;
    cout << "Patient Contact: " << setw(11) << jd.getPhone() << endl;
    cout << "Emergency Contact: " << setw(19) << jd.getEmergency() << endl;

    //create 3 procedures
    Procedure p1("Physical Exam", "25/3/23", "Dr. Irvine", 250.00);
    Procedure p2("X-Ray", "26/3/23", "Dr. Jamison", 500.00);
    Procedure p3("Blood Test", "30/3/23", "Dr. Smith", 200.00);

    //print info of procedures
    cout << "\n--------------------------------------------------------------------------------------------" << endl;
    cout << "Procedure #1:" << setw(40) << "Procedure #2:" << setw(40) << "Procedure #3:" << endl;
    cout << "--------------------------------------------------------------------------------------------" << endl;
    cout << "Procedure Name: " << p1.getProcedureName() << setw(27);
    cout << "Procedure Name: " << p2.getProcedureName() << setw(35);
    cout << "Procedure Name: " << p3.getProcedureName() << endl;
    cout << "Date: " << p1.getDate() << setw(33);
    cout << "Date: " << p2.getDate() << setw(33);
    cout << "Date: " << p3.getDate() << endl;
    cout << "Practitioner: " << p1.getDoctorName() << setw(30);
    cout << "Practitioner: " << p2.getDoctorName() << setw(29);
    cout << "Practitioner: " << p3.getDoctorName() << endl;
    cout << "Charge: " << p1.getCharge() << setw(37);
    cout << "Charge: " << p2.getCharge() << setw(37);
    cout << "Charge: " << p3.getCharge() << endl;
    cout << "---------------------------------------------------------------------------------------------" << endl;

    //update and print total for all procedures
    totalCharge = p1.getCharge() + p2.getCharge() + p3.getCharge();
    cout << "\nTotal Charges for the above procedures is: $" << totalCharge << endl;


    return 0;

}
