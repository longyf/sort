#ifndef insert_h
#define insert_h
#include <iostream>
#include <stdexcept>
using namespace std;

template <class T>
void insert(T num[], int length, const T &x) {
	if (num==nullptr||length<=0)
		throw invalid_argument("Invalid array in insert.");

	int i=length-1;
	for (; i!=-1&&num[i]>x; --i) {
		num[i+1]=num[i];
	}

	num[i+1]=x;
}
	
#endif
