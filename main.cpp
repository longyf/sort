#include <iostream>
#include "selectionSort.h"
#include "selectionSort_2.h"
#include "bubbleSort.h"
#include "insertSort.h"
#include "mergeSort.h"
//#include "quickSort.h"
#include "quickSort_2.h"
//#include "myQuickSort.h"
#include "../rank-sort/output.h"

using namespace std;

int main() {
	const int length=10;
//	int a[length]={0,1,2,4,3,5,6,7,8,9};
	int a[length]={9,8,7,6,5,4,3,2,1,0};
//	int a[length]={1,0,2,3,4,5,6,7,8,9};
//	int a[length]={1};
//	selectionSort_2(a,length);//example.
//	selectionSortv2(a,length);//my version.
//	bubbleSort(a,length);
//	insertSort_2(a,length);
//	mergeSort(a,length);
	quickSort(a,length,0,length-1);
//	quickSort(a,length);
	output(a,length);
	
	return 0;
}
