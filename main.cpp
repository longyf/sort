#include <iostream>
#include "selectionSort.h"
#include "selectionSort_2.h"
#include "bubbleSort.h"
#include "insertSort.h"
#include "mergeSort.h"
//#include "quickSort.h"
//#include "quickSort_2.h"
#include "myQuickSort.h"
#include "../rank-sort/output.h"

using namespace std;

void test1() {
    const int length=10;
    int a[length]={9,8,7,6,5,4,3,2,1,0};
	cout<<"The input is: "<<endl;
    output(a,length);
    quickSort(a,length,0,length-1);
	cout<<"The output is: "<<endl;
    output(a,length);
}

void test2() {
    const int length=10;
    int a[length]={0,1,2,3,4,5,6,7,8,9};
    cout<<"The input is: "<<endl;
    output(a,length);
    quickSort(a,length,0,length-1);
    cout<<"The output is: "<<endl;
    output(a,length);
}

void test3() {
    const int length=1;
    int a[length]={9};
    cout<<"The input is: "<<endl;
    output(a,length);
    quickSort(a,length,0,length-1);
    cout<<"The output is: "<<endl;
    output(a,length);
}

void test4() {
    const int length=3;
    int a[length]={9,9,9};
    cout<<"The input is: "<<endl;
    output(a,length);
    quickSort(a,length,0,length-1);
    cout<<"The output is: "<<endl;
    output(a,length);
}

void test5() {
    const int length=10;
    int a[length]={0,3,1,2,9,8,7,6,5,4};
    cout<<"The input is: "<<endl;
    output(a,length);
    quickSort(a,length,0,length-1);
    cout<<"The output is: "<<endl;
    output(a,length);
}

void test6() {
    const int length=10;
    int a[length]={9,9,7,6,5,5,5,2,0,0};
    cout<<"The input is: "<<endl;
    output(a,length);
    quickSort(a,length,0,length-1);
    cout<<"The output is: "<<endl;
    output(a,length);
}

void test7() {
    const int length=10;
    int *a=NULL;
    cout<<"The input is: "<<endl;
    output(a,length);
    quickSort(a,length,0,length-1);
    cout<<"The output is: "<<endl;
    output(a,length);
}

int main() {
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	
	return 0;
}
