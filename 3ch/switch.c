/*************************************************************************
	> File Name: switch.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月25日 星期四 15时56分12秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    switch (a) {
        case 1: printf("one\n");
        case 2: printf("two\n");
        case 3: printf("three\n");break;
        default: printf("not all");
    }
}
