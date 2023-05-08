// 15.7
// PersonData and CustomerData classes
// lab 6?

#include <iostream>
#include "PersonData.h"
#include "CustomerData.h"
using namespace std;

//Function prototype
void displayCustomer(CustomerData);

int main() {
	//Create a CustomerData object and pass arguments
	//to the constructor.
	CustomerData customer1("Smith", "Joan", "123 Main Strett",
		"Smithvillage", "NC", "12345", 54321, true);
	//Display the object's data.
	cout << "Customer #1\n" << "---------- - \n";
		displayCustomer(customer1);
	//Create another CustomerData object using the default
	//constructor and mutator functions.
	CustomerData customer2;
	customer2.setLastName("Jones");
	customer2.setFirstName("Jenny");
	customer2.setAddress("555 East Street");
	customer2.setCity("Jonesville");
	customer2.setState("VA");
	customer2.setZip("88888");
	customer2.setCustomerNumber(77777);
	customer2.setMailingList(false);
	// Display the object's data.
	cout << "Customer #2\n" << "---------- - \n";
	displayCustomer(customer2);
}

//******************************************************
// The displayCustomer function accepts a CustomerData *
// object as its argument and displays the object's *
// data. *
//******************************************************
void displayCustomer(CustomerData c) {
	// Display all the data but mailing list...
	cout << "Last Name: " << c.getLastName() << endl;
	cout << "First Name: " << c.getFirstName() << endl;
	cout << "Address: " << c.getAddress() << endl;
	cout << "City: " << c.getCity() << endl;
	cout << "State: " << c.getState() << endl;
	cout << "ZIP: " << c.getZip() << endl;
	cout << "Customer Number: " << c.getCustomerNumber() << endl;
	// Display Yes or No for mailing list.
	if (c.getMailingList())
	{
		cout << "Mailing List? " << "Yes" << endl;
	}
	else
	{
		cout << "Mailing List? " << "No" << endl;
	}
	
}