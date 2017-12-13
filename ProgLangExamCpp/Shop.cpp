#include "stdafx.h"
#include "Shop.h"


Shop::Shop()
{
	this->crates = new vector<Crate*>;
	this->employees = new vector<Employee*>;
}

Shop::~Shop()
{
	for (auto const& value : *this->crates) {
		delete value;
	}
	for (auto const& value : *this->employees) {
		delete value;
	}
}

float Shop::calculateTotalCostOfCrates()
{
	float price = 0;
	for (auto const& crate: *this->crates) {
		price += crate->calculatePrice();
	}
	return price;
}

float Shop::calculateTotalSalaries()
{
	float salaries = 0;
	for (auto const& employee : *this->employees) {
		salaries += employee->calculateSalary();
	}
	return salaries;
}

vector<Employee*>* Shop::getEmployees()
{
	return this->employees;
}

vector<Crate*>* Shop::getCrates()
{
	return this->crates;
}

void Shop::addCrate(Crate * crate)
{
	this->crates->push_back(crate);
}

void Shop::addEmployee(Employee * employee)
{
	this->employees->push_back(employee);
}
