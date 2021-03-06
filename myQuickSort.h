#ifndef my_quick_sort_h
#define my_quick_sort_h
#include <iostream>
#include <stdexcept>
using namespace std;

int indexofMiddle(int begin, int end) {
	if (begin>end) 
        throw invalid_argument("Pay attention to the inputs.");

	//产生随机数，在[begin,end]范围内。
	return rand()%(end-begin+1)+begin;
}

template <class T>
int quickSort_bf(T a[], int length, int begin, int end) {
	if (a==nullptr||length<=0||begin<0||end>=length)
		throw invalid_argument("Pay attention to the inputs.");

	if (length==1) 
		return 0;

	int index=indexofMiddle(begin,end);

	swap(a[index],a[end]);
	int small=begin-1;
	for (int i=begin; i!=end; ++i) {
		if (a[i]<a[end]) {
			small++;
			if(small!=i)
				swap(a[small],a[i]);
		}
	}
	small++;
	swap(a[small],a[end]);
	return small;

}

template <class T>
void quickSort(T num[], int length, int begin, int end) {
	if (num==nullptr||length<=0||begin<0||end>=length)
		throw invalid_argument("Pay attention to the inputs.");

	if (begin==end)
		return;

	int middle=quickSort_bf(num,length,begin,end);
	if (middle>begin)
		quickSort(num,length,begin,middle-1);
	if (middle<end)
		quickSort(num,length,middle+1,end);
}
#endif
