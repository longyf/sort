#ifndef quick_sort_h
#define quick_sort_h
#include <iostream>
#include "../rank-sort/output.h"
using namespace std;

template <class T>
int indexofMax(T a[], int n) {
	if (a==nullptr||n<=0)
		throw invalid_argument("Pay attention to the input array in indexofMax");

	if (n==1) return 0;

	int index=0;
	for (int i=1; i!=n; ++i) {
		if (a[i]>a[index])
			index=i;
	}
	return index;
}

template <class T>
void quickSort(T*, int, int);

template <class T>
void quickSort(T a[], int n) {
	if (a==nullptr||n<=0)
		throw invalid_argument("Pay attention to the input array");

	if (n==1) return;

	int max=indexofMax(a,n);
	swap(a[n-1],a[max]);
	quickSort(a,0,n-2);
}

template <class T>
void quickSort(T a[], int leftEnd, int rightEnd) {
	if (leftEnd>=rightEnd) return;

	cout<<leftEnd<<" "<<rightEnd<<endl;
//	output(a,rightEnd-leftEnd+1);

	int leftCursor=leftEnd,
		rightCursor=rightEnd+1;

	T pivot=a[leftEnd];
	while (true) {
		do {
			leftCursor++;
		} while (a[leftCursor]<pivot);

		do {
			rightCursor--;
		} while (a[rightCursor]>pivot);

		if (leftCursor>=rightCursor) break;
		swap(a[leftCursor],a[rightCursor]);
	}

	a[leftEnd]=a[rightCursor];
	a[rightCursor]=pivot;
	
	quickSort(a,leftEnd,rightCursor-1);
	quickSort(a,rightCursor+1,rightEnd);
}
#endif
