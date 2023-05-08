//said he'd post all of this code

#pragma once
#ifndef CIRCLE_H
#define CIRLCE_H

#include <iostream>
#include <string>
#include "shape.h"


using namespace std;

class Circle : public Shape //single colon indicates inheritance
{
private:
	float radius;
public:
	Circle() : radius(0, 0)
	{
		cout << "CIRCLE: Inside the default constructor" << endl;
	}
	Circle(string s, float r): Shape(s), radius(r) //initialization list
	{ //call to the base class //paramaterized constructor
		cout << "CIRCLE: Inside the 1 argument constructor" << endl;
		radius = rhs.radius;
	}

	~Circle()
	{
		cout << "CIRCLE: Inside the destructor" << endl;
	}

	Circle& operator=(const Circle& rhs)
	{
		cout << "CIRCLE: Inside the assignment opperator" << endl;
		//check for self assignment
		if (this != &rhs)
		{
			Shape::operator=(rhs);
			radius = rhs.radius;
		}
		return *this;
	}

	
};

#endif
//Explicit  gallons g = gallons g(20);
//Implicit gallons g(20); //explicit

//asking my compiler to go and initialize the default base class
//elements with

//use shape constructor as a type of argument

//photo take yellow is default paramaterliess constructor
//			green paramaterized constructors initialize an argument

//example x= example x(0,50); //way to do explicit

//the shapetype mebmber variable lives in the shape object
//whic in turn is governed by the shape constructor

//we want to use the shape constructor to initialize the circle object

//  '::'- scope resolution operator qualifies with an overloaded name

// Overload: same name with different argument types

/*
int main(){
cout << endl << "End of program" << endl;
Circle c1("Some shape",3.5); 
cout << endl << "Instantiate object c1\n";
Circle c2("Some shape",10.2);

cout<< "\nassign c1=c2\n";
c1=c2;
cout << endl << "Instantiate object c3 (copy constructor)\n";
Circle c3=c1;
cout << endl << "End of program" << endl;
}

*/

//circle constructor was called after the shape
//shape called first

//does not terminate at the end of main has to go back to the class


///virtual functions 
/*
dynamically resolved
only at runtime do we know what function exactly will be called

looks at the input and if the firest bit of information coming in is 16 or anything >12 then
it is probably not from the U.S. 
declared by placing the virtual keyword before the retun type
virtual char getLetterGrade()
this declaration tells the compiler to expect getLetterGrade( to be redefined in a derived class.
It doesnt bind calls to function to the actual function. Instead, it allows the program to bind calls, at runtime,
to the version og the fuction that belongs to the same class as the object responsible for the call.

plurality of potential inherited classes, once chosen our program will decide which to choose

traditional:

base       derived
shape<-----Circle
      bind

Virtual:

base               Virtual             (dont call it all possible derived classes but it is ) 
shape<-----Circle||Rectangle||Triangle
	  bind
virtual chooses where to bind

	Shape *sPtr2 = new Circle();
	sPtr2->print(); ///. would mean member function -> does same thing but uses a pointer


class Shape
{
public:
	virtual void print()
	{
	cout << "I am a shape, but i dont know what kind yet\n";


};


class Circle: public Shape
{

};

the method that has been marked virtual does... (skipped over slide)


statically bound function calls are resolved at compile time

dynamically bound functions calls are resolved at runtime

next topic is polymorphism


*/