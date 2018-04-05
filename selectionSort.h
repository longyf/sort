#ifndef selection_sort_h
#define selection_sort_h
#include <iostream>
using namespace std;

template <class T>
int largestElement(T num[], int length) {

	int begin=0;
	int end=length-1;

	if (begin>end) 
		throw invalid_argument("Pay attention to the input in largestElement.");
	if (begin==end) {
		return begin;
	}

	T temp=num[0];
	int index=0;
	for (int i=1; i!=end+1; ++i) {
		if (temp<num[i]) {
			temp=num[i];
			index=i;
		}
	}

	return index;
}

template <class T>
void selectionSort(T num[], int length) {

	if (num==nullptr||length<=0)
		throw invalid_argument("Pay attention to the input in selectionSort.");

	for (int length2=length; length2!=0; length2--) {
		int index=largestElement(num, length2);
		swap(num[index],num[length2-1]);
	}
}
#endif
