#pragma once
#include "Employee.h"
class Manager :
	public Employee
{
public:
	Manager(string name, int age, float hourly, float weeklyWorkingHours, float bonus);
	~Manager();
	float calculateSalary();
	float bonus;
};

