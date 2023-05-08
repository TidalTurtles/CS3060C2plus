// PersonData class
#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <string>
using namespace std;
class PersonData {
private:
	string lastName; // Person's last name
	string firstName; // Person's first name
	string address; // Person's address
	string city; // Person's city
	string state; // Person's state
	string zip; // Person's ZIP code
public:
	//**********************************************
	// Constructor *
	//**********************************************
	PersonData(string ln, string fn, string addr,
		string c, string s, string z) {
		lastName = ln;
		firstName = fn;
		address = addr;
		city = c;
		state = s;
		zip = z;
	}
	//***************************************
// Default Constructor *
//***************************************
	PersonData() {
		lastName = "";
		firstName = "";
		address = "";
		city = "";
		state = "";
		zip = "";
	}
	//***************************************
	// Mutator functions *
	//***************************************
	void setLastName(string ln) {
		lastName = ln;
	}
	void setFirstName(string fn) {
		firstName = fn;
	}
	void setAddress(string addr) {
		address = addr;
	}
	void setCity(string c) {
		city = c;
	}
	void setState(string s) {
		state = s;
	}
	void setZip(string z) {
		zip = z;
	}
	//************************************
// Accessor functions *
//************************************
	string getLastName() const {
		return lastName;
	}
	string getFirstName() const {
		return firstName;
	}
	string getAddress() const {
		return address;
	}
	string getCity() const {
		return city;
	}
	string getState() const {
		return state;
	}
	string getZip() const {
		return zip;
	}
};
#endif