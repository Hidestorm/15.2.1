#pragma once
#include "Item_base.h"

class Bulk_item :public Item_base
{
public:
	double net_price(size_t cnt)const;
private:
	size_t min_qty;
	double discount;
};
class Ltd_item :public Item_base
{

};