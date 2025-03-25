#include "Tax.h"
#include <iostream>
using namespace std;

void showTax() {
	double sales = 95000;
	double stateTax = sales * .04;
	double countyTax = sales * .02;
	cout << stateTax << " " << countyTax;
}