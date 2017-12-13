#pragma once
#include <vector>
#include "Product.h"
class Crate
{
public:
	Crate();
	~Crate();
	float calculatePrice();
	vector<Product*>* getProducts();
	void setProducts(vector<Product*>*products);
private:
	vector<Product*> *products;
	float calculateBasePrice();
	int calculateBonusPercentage();
};

