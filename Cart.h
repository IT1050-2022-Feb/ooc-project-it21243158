#pragma once
#include "item.h"

class Cart
{	
	private:
		
		
		int cartId;
		double amount;
		item*it;
	
	public:
		Cart();
		Cart(int c_id,double amnt);
		void addItems(item*it);
		void viewCartItems();
		void viewAmount();
		~Cart();
	
};


