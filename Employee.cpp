/*
 * Employee.cpp
 *
 *  Created on: Jan 28, 2020
 *      Author: jschmid20
 */

#include "Employee.h"

//Default Employee constructor
Employee::Employee(){
	name = "";
	id = 0;
	phone = "0";
	age = 0;
	gender = 'M';
	title = "";
	salary = 0;
	hireDate = new Date(0, 0, 0);
}
//Overloaded Employee constructor
Employee::Employee(string name, int id, string phone, int age, char gender, string title, int salary, Date* hireDate){
	this->name = name;
	this->id = id;
	this->phone = phone;
	this->age = age;
	this->gender = gender;
	this->title = title;
	this->salary = salary;
	this->hireDate = hireDate;
}

//Fuction that prints out an Employee object's data using cout
void Employee::print(){
	cout << "Name: " << name << "\nID: " << id << "\nPhone: " << phone << "\nAge: " << age;
	cout << "\nGender: " << gender << "\nJob Title: " << title << "\nSalary: $" << salary;
	cout << "\nDate Hired: ";
	hireDate->print();
}
