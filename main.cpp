#include <iostream>
#include "DynamicArray.h"
#include "DynamicArray.cpp"
using namespace std;

int main() {

	DynamicArray<int> da;
	DynamicArray<double> da2;

	for (int i = 0; i < 5; i++) {
		da.add(rand() % 100);
	}

	cout << "\nenter numbers for int array..." << endl;
	for (int i = 0; i < 5; i++) {
		int num;
		cin >> num;
		da.add(num);
	}

	for (int i = 0; i < 5; i++) {
		double min = 0.0;
		double max = 1.0;
		double f = (double)rand() / RAND_MAX;
		da2.add(min + f * (max - min));
	}

	cout << "\nenter numbers for double array..." << endl;
	for (int i = 0; i < 5; i++) {
		double num;
		cin >> num;
		da2.add(num);
	}

	da.allElements();
	da2.allElements();

	return 0;
}