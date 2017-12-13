#pragma once
#include <vector>
#include "Crate.h"
#include "Employee.h"
class Shop
{
public:
	Shop();
	~Shop();
	float calculateTotalCostOfCrates();
	float calculateTotalSalaries();
	vector<Employee*>* getEmployees();
	vector<Crate*>* getCrates();
	void addCrate(Crate* crate);
	void addEmployee(Employee* employee);
private:
	vector<Employee*> *employees;
	vector<Crate*> *crates;
};

