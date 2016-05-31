#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Item_base
{
public:
	Item_base() {
		isbn = "";
		price = 0.0;
	}
	string book() const
	{
		return isbn;
	}
	virtual double net_price(size_t n)const
	{
		return price *n;
	}
	virtual ~Item_base() {};
private:
	string isbn;
protected:
	double price;
};