#include <iostream>
#include "item.h"
#include <cstring>
using namespace std;

item::item(int id,char name[],double u_price,char desc[]){
	
		itemId=id;
		strcpy(itemName,name);
		price=u_price;
		strcpy(description,desc);
		
}

void item::displayItemdetails(){
	
	
}

void addItems(int item_id,char item_name[],double unit_price,char item_desc[]){
	
	
}

void item::updateItem(){
	
	
}

item::~item()
{
	cout<<"Item deleted"<<endl;
}

