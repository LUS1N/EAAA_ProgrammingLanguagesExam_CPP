#include "stdafx.h"
#include "Employee.h"


Employee::Employee(string name, int age, float hourly, float weeklyWorkingHours)
{
	this->name = name;
	this->age = age;
	this->hourlySalary = hourly;
	this->weeklyWorkingHours = weeklyWorkingHours;
}


Employee::~Employee()
{
}

float Employee::calculateSalary()
{
	return this->calcBasicSalary();
}

float Employee::calcBasicSalary()
{
	return this->weeklyWorkingHours * this->hourlySalary;
}
