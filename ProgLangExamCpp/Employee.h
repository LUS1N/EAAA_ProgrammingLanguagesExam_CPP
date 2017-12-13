#pragma once
#include <string>
using namespace std;

class Employee
{
public:
	Employee(string  name, int age, float hourly, float weeklyWorkingHours);
	~Employee();
	float weeklyWorkingHours;
	float hourlySalary;
	int age;
	string name;
	virtual float calculateSalary();
protected:
	float calcBasicSalary();
};

