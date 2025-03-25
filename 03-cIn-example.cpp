#include <iostream>
#include "CinExample.h"

using namespace std;

void cInExample() {
	int val;
	float val2;
	cout << "Enter an int value";
	cin >> val;
	cout << "You entered " << val << std::endl;
	cout << "Enter a floating point number";
	cin >> val2;
	cout << "you entered " << val2 << std::endl;
}