#include <iostream>
#include "insert.h"
#include "../rank-sort/output.h"
using namespace std;

int main() {
	int a[10]={1,2,4,5};
	int x=3;
	insert(a, 4, x);

	output(a, 5);
	return 0;
}
