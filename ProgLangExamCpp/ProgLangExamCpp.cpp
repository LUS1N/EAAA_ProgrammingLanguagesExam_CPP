// ProgLangExamCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>  
#include "Employee.h"
#include "Guard.h"
#include "Seller.h"
#include "Manager.h"
#include "Crate.h"
#include "Product.h"
#include "Shop.h"


using namespace std;

int main()
{
	// Testing crate and products
	Crate* crate = new Crate;
	vector<Product*>* prods = new vector<Product*>;
	crate->setProducts(prods);

	cout << "Calculating crate price for 0 products. Expected: 0, actual: " << crate->calculatePrice() << endl;
	prods->push_back(new Product("a", 1));
	prods->push_back(new Product("b", 2));
	prods->push_back(new Product("c", 3));
	prods->push_back(new Product("d", 4));
	prods->push_back(new Product("e", 5));
	prods->push_back(new Product("f", 6));
	prods->push_back(new Product("g", 7)); // total 28 + 28 * 0.05 = 29.4
	cout << "Calculating crate price for 7 products. Expected: 29.4, actual: " << crate->calculatePrice() << endl;
	prods->push_back(new Product("h", 8));
	prods->push_back(new Product("j", 9));
	prods->push_back(new Product("k", 10));
	prods->push_back(new Product("l", 11)); // 66 + 66 * 0.07 = 70.62
	cout << "Calculating crate price for 11 products. Expected: 70.62, actual: " << crate->calculatePrice() << endl;
	prods->push_back(new Product("m", 12));
	prods->push_back(new Product("n", 13));
	prods->push_back(new Product("o", 14));
	prods->push_back(new Product("p", 15));
	prods->push_back(new Product("q", 16)); // 136 + 136 * 0.1 = 149.6
	cout << "Calculating crate price for 16 products. Expected: 149.6, actual: " << crate->calculatePrice() << endl;

	// Testing shop and crates
	Shop* shop = new Shop;
	shop->addCrate(crate);
	cout << "Total cost of shop crates. Expected 149.6, actual: " << shop->calculateTotalCostOfCrates() << endl;
	shop->addCrate(crate);
	cout << "Total cost of shop crates. Expected 299.2, actual: " << shop->calculateTotalCostOfCrates() << endl;

	// Testing employees

	Employee* a = new Employee("Employee", 24, 100, 40);
	cout << "Calculating salary for " << a->name << ". Expected 100 * 40 = 4000, actual: " << a->calculateSalary() << endl;

	Employee* b = new Guard("Guard", 59, 150, 40);
	cout << "Calculating salary for " << b->name << ". Expected 150 * 40 = 6000, actual: " << b->calculateSalary() << endl;

	Employee* b2 = new Guard("Overworked Guard", 59, 150, 41);
	cout << "Calculating salary for " << b2->name << ". Expected 150 * 41 + 500 bonus = 6650, actual: " << b2->calculateSalary() << endl;

	Employee* c = new Seller("Seller", 60, 170, 40);
	cout << "Calculating salary for " << c->name << ". Expected 170 * 40 = 6800, actual: " << c->calculateSalary() << endl;

	Employee* c2 = new Seller("Old Seller", 61, 170, 40);
	cout << "Calculating salary for " << c2->name << ". Expected 170 * 40 = 6800 + 6800 * 0.05 = 7140, actual: " << c2->calculateSalary() << endl;

	Employee* d = new Manager("Manager", 61, 170, 40, 1000);
	cout << "Calculating salary for " << d->name << ". Expected 170 * 40 = 6800 + 1000 bonus = 7800, actual: " << d->calculateSalary() << endl;

	// Testing shop employees

	shop->addEmployee(a);
	shop->addEmployee(b);
	shop->addEmployee(b2);
	shop->addEmployee(c);
	shop->addEmployee(c2);
	shop->addEmployee(d);
	cout << "Calculating salaries for all employees, expected: 4000 + 6000 + 6650 + 6800 + 7140 + 7800 = 38390, actual: " << shop->calculateTotalSalaries() << endl;

	return 0;
}

