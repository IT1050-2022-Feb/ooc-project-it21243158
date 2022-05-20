#include "Cart.h"
#include "item.h"
#define SIZE 3


Cart::Cart(){

		cartId=001;
		amount=0;

}

Cart::Cart(int c_id,double amnt){
	
	cartId=c_id;
	amount=amnt;
}

void Cart::addItems(item*itm){
	
		
		it=itm;
			
		
}

void Cart::viewCartItems(){
	
	
		
		it->displayItemdetails();

	
	
}

void Cart::viewAmount(){
	
	
}

Cart::~Cart(){
	
	
}
