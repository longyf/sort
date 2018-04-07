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

	for (int size=1; size!=length; ++size) {
		T temp=num[size];
		insert(num, size, temp);
	}

}
#endif
