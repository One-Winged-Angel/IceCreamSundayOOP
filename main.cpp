#include <iostream>
#include <vector>
#include <string>
#include "SundaeProject.h"
using namespace std;


int main()
{
	IceCreamSundae mySundae("Chocolate");
	mySundae.addTopping("Nuts");
	mySundae.addTopping("Chocolate sauce");
	mySundae.printSundae();

	return 0;
}