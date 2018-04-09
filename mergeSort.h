#ifndef merge_sort_h
#define merge_sort_h
#include <iostream>
#include <stdexcept>
using namespace std;

template <class T>
void merge(T*, T*, int, int, int);

template <class T>
void mergePass(T*, T*, int, int);

template <class T>
void mergeSort(T a[], int n) {
	if (a==nullptr||n<=0)
		throw invalid_argument("Pay attention to the input array.");

	//使用归并排序法对a[0:n-1]排序
	T *b=new T[n];
	int segmentSize=1;//子序列的长度，最开始的时候是1，然后要把相邻的归并，就变成了2，4，8。
	while (segmentSize<n) {
		mergePass(a,b,n,segmentSize);//从a到b的归并
		segmentSize+=segmentSize;
		mergePass(b,a,n,segmentSize);//从b到a的归并
		segmentSize+=segmentSize;
	}
	delete []b;
}

template <class T>
void mergePass(T x[], T y[], int n, int segmentSize) {
	//从x到y归并相邻的数据段。
	//确定需要归并的子序列的左右边界，真正的归并工作是其中的merge函数做的。
	int i=0; //下一个数据段的起点
	while (i<=n-2*segmentSize) {
		//从x到y归并相邻的数据段
		merge(x,y,i,i+segmentSize-1,i+2*segmentSize-1);
		i=i+2*segmentSize;
	}

	//少于两个满数据段
	if (i+segmentSize<n) {
		//剩有两个数据段
		merge(x,y,i,i+segmentSize-1,n-1);
	}
	else {
		//只剩下一个数据段，复制到y
		for (int j=i; j<n; j++) {
			y[j]=x[j];
		}
	}
}

template <class T>
void merge(T c[], T d[], int startofFirst, int endofFirst, int endofSecond) {
	//把相邻的数据段从c到d归并。
	int first=startofFirst,	//第一个数据段的索引
		second=endofFirst+1, //第二个数据段的索引
		result=startofFirst; //归并数据段的索引

	//直到有一个数据段归并到归并段d。
	while ((first<=endofFirst)&&(second<=endofSecond)) {
		//按照由小到大的顺序排列。
		if (c[first]<=c[second]) d[result++]=c[first++];
		else d[result++]=c[second++];
	}

	//归并剩余元素。
	if (first>endofFirst) 
		for (int q=second; q<=endofSecond; q++) d[result++]=c[q];
	else
		for (int q=first; q<=endofFirst; q++) d[result++]=c[q];
}
#endif		 
