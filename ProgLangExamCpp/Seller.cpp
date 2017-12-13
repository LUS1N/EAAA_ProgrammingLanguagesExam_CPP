#include "stdafx.h"
#include "Seller.h"


Seller::Seller(string  name, int age, float hourly, float weeklyWorkingHours) :Employee(name, age, hourly, weeklyWorkingHours)
{
}


Seller::~Seller()
{
}

float Seller::calculateSalary()
{
	float salary = this->calcBasicSalary();
	if (this->age > 60)
		salary += salary * 0.05;
	return salary;
}
