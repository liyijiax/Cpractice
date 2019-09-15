#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	int a[2] = {1, 2};
	int *p = a;
	cout << *p[1].x;
	return 0;
}
