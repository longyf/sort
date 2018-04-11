#include <iostream>
using namespace std;

int main() {
	int begin=1;
	int end=10;
	for (int i=0; i!=100; ++i) {
		cout<<rand()%(end-begin+1)+begin<<endl;
	}

	return 0;
}
