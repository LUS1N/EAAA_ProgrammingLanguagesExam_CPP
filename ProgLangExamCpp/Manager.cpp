#include "stdafx.h"
#include "Manager.h"


Manager::Manager(string  name, int age, float hourly, float weeklyWorkingHours, float bonus) :Employee(name, age, hourly, weeklyWorkingHours)
{
	this->bonus = bonus;
}

Manager::~Manager()
{
}

float Manager::calculateSalary()
{
	return this->calcBasicSalary() + this->bonus;
}
