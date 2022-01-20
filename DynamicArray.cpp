#include <iostream>
#include "DynamicArray.h"

using namespace std;

template<class T>
DynamicArray<T>::DynamicArray()
{
	length = 0;
	pa = new T[0];
	cnt = 0;
}

template<class T>
DynamicArray<T>::DynamicArray(const DynamicArray& paCopy)
{
	this->length = paCopy->getSize();
	this->pa = new T[length];
	this->cnt = paCopy->cnt;
}

template<class T>
DynamicArray<T>::~DynamicArray()
{
	delete[] pa;
}

template<class T>
T& DynamicArray<T>::operator[](int index)
{
	return (index);
}

template<class T>
void DynamicArray<T>::add(int val)
{
	if (cnt >= size()) {
		T* paNew = new T[size() + 1];

		for (int i = 0; i < size(); i++) {
			paNew[i] = pa[i];
		}
	
		for (int j = size() - 1; j >= 0; --j)
		{
			paNew[j + 1] = paNew[j];
		}
		paNew[0] = val;
		cnt++;
		delete[] pa;
		pa = paNew;
		length += 1;
	}	 
}

template<class T>
int DynamicArray<T>::size()
{
	return length;
}

template<class T>
void DynamicArray<T>::allElements()
{
	for (int i = 0; i < length; ++i) {
		if (i == 0) {
			cout << "[" << pa[i];
		}
		else if (i == cnt - 1) {
			cout << "," << pa[i] << "]";
		}
		else {
			cout << "," << pa[i];
		}
	}
}

template<>
inline void DynamicArray<double>::allElements()
{
	cout << "\n" << "[" << std::scientific;
	for (int i = 0; i < length; ++i) {
		if (i == 0) {
			cout << pa[i];
		}
		else if (i == cnt - 1) {
			cout << "," << pa[i] << "]";
		}
		else {
			cout << "," << pa[i];
		}
	}
}