#include "stdafx.h"
#include "Guard.h"


Guard::Guard(string  name, int age, float hourly, float weeklyWorkingHours) :Employee(name, age, hourly, weeklyWorkingHours)
{
}


Guard::~Guard()
{
}

float Guard::calculateSalary()
{
	float salary = this->calcBasicSalary();
	if (this->weeklyWorkingHours > 40)
		salary += 500;
	return salary;
}
