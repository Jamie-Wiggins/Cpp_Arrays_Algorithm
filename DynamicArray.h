#pragma once
template<typename T>
class DynamicArray
{
private:
	T *pa;
	int length;
	int cnt;
public:
	DynamicArray();
	DynamicArray(const DynamicArray& dynArr);
	~DynamicArray();
	T& operator[](int index);
	void add(int val);
	void allElements();
	int size();
};