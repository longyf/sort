#ifndef insert_sort_h
#define insert_sort_h
#include <iostream>
#include <stdexcept>
#include "insert.h"
using namespace std;

template <class T>
void insertSort(T num[], int length) {
	if (num==nullptr||length<=0)
		throw invalid_argument("Invalid array in insertSort.");

	T *temp=new T [length];
	temp[0]=num[0];

	for (int size=1; size!=length; ++size) {
		insert(temp, size, num[size]);
	}

	for (int i=0; i!=length; ++i) {
		num[i]=temp[i];
	}

	delete []temp;
}
#endif
