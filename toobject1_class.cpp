#include <iostream>
#include <string>
#include "toobject1.h"
namespace toobject1 {
	void commodity::Init(int p, int q, const char *n)
	{
		this->price = p;
		this->quantity = q;
		this->name = n;
	}
	int commodity::Buy(int money)
	{
		if (money < this->price)
		{
			std::cout << "Don't have enough money!" << std::endl;
			return 0;
		}
		int number = money / this->price;
		int remoney= money % this->price;
		quantity -= number;
		std::cout <<"Commodity:"<< this->name<<" Price:"<< this->price << std::endl;
		std::cout << "You have buy " << number << " " << this->name << "." << std::endl;
		std::cout << "Commodity:" << this->name << " Quantity:" << this->quantity << std::endl;
		std::cout << std::endl;
		return 1;
	}

}