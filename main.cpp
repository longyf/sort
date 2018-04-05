#include <iostream>
#include "selectionSort.h"
#include "bubbleSort.h"
#include "../rank-sort/output.h"

using namespace std;

int main() {
	const int length=10;
	int a[length]={10,9,8,7,6,5,4,3,2,1};
//	int a[length]={1,2,3,4,5,6,7,8,9,10};
//	selectionSort(a,length);
	bubbleSort(a,length);
	output(a,length);
	return 0;
}
