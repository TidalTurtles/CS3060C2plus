#pragma once
#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string.h>

using namespace std;

class Shape
{
private:
	string shapeType;
public:
	Shape(string s) : shapeType(s)
	{
		cout << "SHAPE: Inside the 1-argument constructor" << endl;

	}
	Shape(const Shape& rhs) //copy constructors initialize members of a newly created object by copying members of an already exsting object
	{// it takes a reference to an object of the same class as an argument
		//when an argument is passed to a function a copy of the argument must be created
		cout << "SHAPE: Inside the copy constructor" << endl;
		shapeType = rhs.shapeType;
	}


	~Shape()
	{
		cout << "SHAPE: Inside the destructor" << endl;
	}

	Shape& operator=(const Shape& rhs)
	{ //this one is not complete mostly just a copy from circle overload
		cout << "SHAPE: Inside the assignment opperator" << endl;
		//check for self assignment
		if (this != &rhs)
		{
			operator=(rhs);
			//radius = rhs.radius;
		}
		return *this;
	}
};

#endif
