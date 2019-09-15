#include <iostream>
#include <cstdio>
using namespace std;
#define MAX(a, b) ({ \
	__typeof(a) _a = (a); \
	__typeof(b) _b = (b); \
	_a > _b ? _a : _b; \
})

#define P(x) { \
	printf("%s = %d\n", #x, x); \
}


int main() {
	int a = 7;
	P(MAX(2, 3));
	P(5 + MAX(3, 4));
	P(MAX(2, MAX(3, 4)));
	P(MAX(2, 3 > 4 ? 3 : 4));
	P(MAX(a++, 6));
	P(a);
	/*
	cout << 5 + MAX(2, 3) << endl;
	cout << MAX(2, MAX(3, 4)) << endl;
	cout << MAX(2, 3 > 4 ? 3 : 4) << endl;
	cout << MAX(a++, 6) << endl;
	cout << "a = " << a << endl; */
	return 0;
}
