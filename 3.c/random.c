/*************************************************************************
	> File Name: random.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月25日 星期四 19时19分57秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(0));
    printf("%d\n",rand());
    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        int val = rand() % 100;
        cnt += val % 2;
        cnt += val & 1;
        cnt += val % 4;
        cnt == val & 3;
    }
    printf("%d",val);

 
}
