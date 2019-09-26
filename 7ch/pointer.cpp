#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <iostream>
#define offset(T, a) (long long)(&(((T *)(NULL))->a))
#define pchar char *
typedef char * ppchar;
using namespace std;

struct Data {
	int a;
	double b;
	char c;
};

int main(int argc, char *argv[], char *env[]) {
	int num = 0x616263;
	int num2 = 0x61626364;
	printf("%s", (char *)(&num2));
	printf("%s", (char *)(&num2 + 1));
	cout << endl;
	printf("%lld\n", offset(struct Data, b));
	pchar p1, p2;
	ppchar p3, p4;
	printf("sizeof(p1) = %lld sizeof(p2) = %lld\n", sizeof(p1), sizeof(p2));
	printf("sizeof(p1) = %lld sizeof(p2) = %lld\n", sizeof(p3), sizeof(p4));
	for (int i = 0; env[i]; i++) {
		if (strncmp(env[i], "USER=", 5) == 0) {
			printf("don't run me!");
			if (strcmp(env[i] + 5, "CaptainHu")) exit(0);
			cout << "oh" << endl;
		}
	}
	return 0;
}
