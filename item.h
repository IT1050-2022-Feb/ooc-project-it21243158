#pragma once
class item
{
	
	
	private:
		
		int itemId;
		char itemName[50];
		double price;
		char description[255];
		
	public:
		
		
		item(int id,char name[],double u_price,char desc[]);
		void displayItemdetails();
		void addItems(int item_id,char item_name[],double unit_price,char item_desc[]);
		void updateItem();
		~item();
	
};


