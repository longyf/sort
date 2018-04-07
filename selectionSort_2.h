#ifndef selection_sort_2_h
#define selection_sort_2_h
#include <iostream>
using namespace std;

template <class T>
void selectionSort_2(T a[], int n) {
	bool sorted=false;
	for (int size=n; !sorted&&(size>1); size--) {
		int indexofMax=0;
		sorted=true;
		for (int i=1; i<size; i++) {
			if (a[indexofMax]<=a[i]) indexofMax=i;
			else sorted=false;
		}
		swap(a[indexofMax],a[size-1]);
	}
}
#endif
