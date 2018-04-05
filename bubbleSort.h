#ifndef bubble_sort_h
#define bubble_sort_h
#include <iostream>
using namespace std;

template <class T>
void bubbleSort(T num[], int length) {

	bool mark=true;
	int size=length-1;
	while (mark) {
		mark=false;
		for (int i=0; i!=size; i++) {
			if (num[i]>num[i+1]) {
				swap(num[i],num[i+1]);
				mark=true;
			}
		}
		size--;
		//if mark is false, the sort is over.
	}

}
#endif
