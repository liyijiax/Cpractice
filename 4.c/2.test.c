/*************************************************************************
	> File Name: 2.test.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月27日 星期六 18时48分03秒
 ************************************************************************/

#include <stdio.h>

int f(int n) {
    if (n == 0) return 1;
    return n * f(n-1);
}

int main() {
    int n, result;
    while(scanf("%d", &n) != EOF) {
       result = f(n);
       printf("%d\n", result);
    }
    return 0;
}
