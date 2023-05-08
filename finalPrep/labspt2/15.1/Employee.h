//specification file for the employee class
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;
// Design a class named Employee
class Employee {
private:
	string name;// Employee name
	string number;// Employee number
	string hireDate;// Hire date
    string disabled;// Disability Y/N

public:
	// Default constructor
	Employee() {
		name = ""; number = ""; hireDate = ""; disabled = "";
	}
	// Constructor
	Employee(string aName, string aNumber, string aDate, string yesNo) {
		name = aName; number = aNumber; hireDate = aDate; disabled = yesNo;
	}
	// Mutators
	void setName(string n) {
		name = n;
	}
	void setNumber(string num) {
		number = num;
	}
	void setHireDate(string date) {
		hireDate = date;
	}
    void setDisability(string yesNo) {
        disabled = yesNo;
    }

	// Accessors
	string getName() const {
		return name;
	}
	string getNumber() const {
		return number;
	}
	string getHireDate() const {
		return hireDate;
	}
    string getDisability() const {
        return disabled;
    }
};
#endif
