#pragma once
#include <iostream>
#include <string>
namespace toobject1 {
	class commodity
	{
		int price;
		int quantity;
		std::string name;
	public:
		commodity() : price(-1), quantity(0), name("") {}
		void Init(int, int, const char *);
		int Buy(int);

	};
}