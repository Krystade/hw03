//============================================================================
// Name        : hw03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "hw03.h"

int main() {
	Date* date = new Date(10, 29, 1998);

	cout << "Employees" << endl << endl;
	Employee* e1 = new Employee();
	Employee* e2 = new Employee("Joe", 78, "9491233523", 55, 'M', "Janitor", 100000, date);
	e1->print();
	cout << endl << endl;
	e2->print();
	cout << endl << endl << "Adding Data to default Employee" << endl;
	e1->setName("Kris");
	e1->setAge(25);
	e1->setGender('F');
	e1->print();
	cout << endl << endl;

	cout << "Programmers" << endl << endl;
	Programmer* p1 = new Programmer();
	Programmer* p2 = new Programmer("Carl", 45, "63444442363", 30, 'M', "Back-end Developer", 1000000, date, 20, "Riley", 5.5, true, false);
	p1->print();
	cout << endl << endl;
	p2->print();
	cout << endl << endl << "Adding Data to default Programmer" << endl;
	p1->setAge(40);
	p1->setCpp(false);
	p1->setSupervisorName("Jerry");
	p1->print();
	cout << endl << endl;

	cout << "Software Architects" << endl << endl;
	SoftwareArchitect* s1 = new SoftwareArchitect();
	SoftwareArchitect* s2 = new SoftwareArchitect("Riley", 50, "4325452352", 45, 'M', "Lead Designer", 1500000, date, 20, "Jeremiah", 5.5, 20);
	s1->print();
	cout << endl << endl;
	s2->print();
	cout << endl << endl << "Adding Data to default Software Architect" << endl;
	s1->setName("Dave");
	s1->setAge(35);
	s1->setYearsExp(10);
	s1->print();
	cout << endl << endl;

	return 0;
}
