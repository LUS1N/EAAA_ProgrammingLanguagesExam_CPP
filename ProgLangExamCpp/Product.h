#pragma once
#include <string>
using namespace std;

class Product
{
public:
	Product(string name, float price);
	~Product();
	string name;
	float price;
};

