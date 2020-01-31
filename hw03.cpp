//============================================================================
// Name        : hw03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "hw03.h"

int main() {
	Employee* e1 = new Employee();
	Date* date = new Date(10, 29, 1998);
	Employee* e2 = new Employee("Joe", 78, "9491233523", 55, 'M', "Janitor", 100000, date);
	e1->print();
	cout << endl << endl;
	e2->print();
	cout << endl << endl;

	Programmer* p1 = new Programmer();
	Programmer* p2 = new Programmer("Carl", 45, "63444442363", 30, 'M', "Back-end Developer", 1000000, date, 20, "Riley", 5.5, true, false);
	p1->print();
	cout << endl << endl;
	p2->print();
	cout << endl << endl;

	SoftwareArchitect* s1 = new SoftwareArchitect();
	SoftwareArchitect* s2 = new SoftwareArchitect("Riley", 50, "4325452352", 45, 'M', "Lead Designer", 1500000, date, 20, "Jeremiah", 5.5, 20);
	s1->print();
	cout << endl << endl;
	s2->print();
	cout << endl << endl;
	return 0;
}
