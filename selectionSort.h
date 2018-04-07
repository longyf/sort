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

template <class T>
void selectionSortv2(T num[], int length) {

	if (num==nullptr||length<=0)
		throw invalid_argument("Pay attention to the input in selectionSortv2.");

	bool sorted=false;
	int indexofMax=0;
	for (int size=length; (!sorted)&&(size!=1); --size) {
		sorted=true;
		//the index of the largest element
		for (int i=0; i!=size; ++i) {
			if (num[indexofMax]<=num[i]) indexofMax=i;
			else sorted=false;//意思是前边的元素并不都是按照从小到大的顺序排列的。
		}
		swap(num[indexofMax],num[size-1]);
	}
}
#endif
