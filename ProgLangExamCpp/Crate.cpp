#include "stdafx.h"
#include "Crate.h"


Crate::Crate()
{
}


Crate::~Crate()
{
	for (auto const& value : *this->products) {
		delete value;
	}
}

float Crate::calculatePrice()
{
	float basePrice = calculateBasePrice();
	int bonus = calculateBonusPercentage();
	basePrice += basePrice / 100.0 * bonus;

	return basePrice;
}

vector<Product*>* Crate::getProducts()
{
	return products;
}


void Crate::setProducts(vector<Product*>*products)
{
	this->products = products;
}

float Crate::calculateBasePrice()
{
	float price = 0; 
	for (auto const& product: *this->products) {
		price += product->price;
	}
	return price;
}

int Crate::calculateBonusPercentage()
{
	int products = this->products->size();
	if (products > 15)
		return 10;
	if (products > 10)
		return 7;
	if (products > 5)
		return 5;
	return 0;
}
