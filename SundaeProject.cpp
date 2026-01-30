#include "SundaeProject.h"
using namespace std;
#include <string>
#include <iostream>

IceCreamSundae::IceCreamSundae(string flavor)
{
	this->flavor = flavor;
}

void IceCreamSundae::addTopping(string topping)
{
	toppings.push_back(topping);
}

string IceCreamSundae::getFlavor() const
{
	return flavor;
}

vector<string> IceCreamSundae::getToppings() const
{
	return toppings;
}

void IceCreamSundae::printSundae() const
{
	cout << "The flavor of the ice cream sundae is " << flavor << " and the toppings are " << endl;
	
	if (toppings.empty())
	{
		cout << "None" << endl;
	}
	else
	{
		for (int i = 0; i < toppings.size(); i++)
		{
			cout << toppings[i] << endl;
		}
	}
}
