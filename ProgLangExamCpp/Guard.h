#pragma once
#include "Employee.h"
class Guard :
	public Employee
{
public:
	Guard(string name, int age, float hourly, float weeklyWorkingHours);
	~Guard();
	float calculateSalary();
};

