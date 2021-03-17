//============================================================================
// Name        : EclipseTest.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "MyClass.h"

using namespace std;

int main()
{
	MyClass obj, *p;
	p = &obj;
	cout << "!!!Hello Git World!!!" << endl; // prints !!!Hello World!!!
	cout << "Initial value: " << obj.value() << endl;

	for (int i=0; i < 5; i++)
	{
		obj.increment();
		cout << "Current value: " << obj.value() << endl;
	}
	for (int i=0; i < 5; i++)
	{
		p->increment();
		cout << "Current value: " << p->value() << endl;
	}
	return 0;
}
