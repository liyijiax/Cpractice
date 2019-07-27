/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月27日 星期六 18时26分00秒
 ************************************************************************/

#include <stdio.h>

int f(int k, int b, int x) {
    return k * x + b;
}

int main() {
    int k, b;
    scanf("%d%d", &k, &b);
    for (int i = 1; i <= 100; i++){
        printf("%d\n",f(k, b, i));
    }

    return 0;
}
