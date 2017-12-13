#include "stdafx.h"
#include "Product.h"


Product::Product(string name, float price)
{
	this->name = name;
	this->price = price;
}

Product::~Product()
{
}
