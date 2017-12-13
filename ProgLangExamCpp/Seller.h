#pragma once
#include "Employee.h"
class Seller :
	public Employee
{
public:
	Seller(string name, int age, float hourly, float weeklyWorkingHours);
	~Seller();
	float calculateSalary();
};

