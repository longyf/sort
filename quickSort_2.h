#ifndef quick_sort_2_h
#define quick_sort_2_h
#include <iostream>
#include <stdexcept>
using namespace std;

//在min和max中间产生一个随机数。
int RandomInRange(int min, int max) {
	int random=rand()%(max-min+1)+min;
	return random;
}

//交换num1和num2。
void Swap(int *num1, int *num2) {
	int temp=*num1;
	*num1=*num2;
	*num2=temp;
}

//从data中随机挑选一个数，比这个数小的运动到这个数字的左边，比这个数大的移动到这个数字右边。
int Partition(int data[], int length, int start, int end) {
	if (data==nullptr||length<=0||start<0||end>=length) 
		throw invalid_argument("Pay attention to the input");

	int index=RandomInRange(start, end);
	Swap(&data[index],&data[end]);//先把随机挑出的元素扔到数组最后。

	int small=start-1;
	for (index=start; index<end; ++index) {
		if (data[index]<data[end]) {
			++small;
			if (small!=index)
				//在交换之前，index代表小于随机挑出元素的元素指标，small是0，1，2，代表这些元素应该存在的位置。
				Swap(&data[index],&data[small]);
		}
	}

	//跳出for循环后，small变成了数组中小于data[end]的元素个数-1，所以再加上1，就是data[end]应该存在的地方。
	++small;
	Swap(&data[small],&data[end]);
	cout<<small<<endl;
	return small;//之前随机挑出的元素的指标
}

void quickSort(int data[], int length, int start, int end) {
	if (start==end)
		return;
	int index=Partition(data, length, start, end);
	if (index>start)
		quickSort(data, length, start, index-1);//避免index==start
	if (index<end)
		quickSort(data, length, index+1, end);//避免index==end
}
#endif
