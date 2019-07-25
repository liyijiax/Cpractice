/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月25日 星期四 15时40分48秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if (n == 0){
        printf("FOOLISH\n");
    }else if(n < 60){
        printf("FALL");
    }else if(n < 75){
        printf("MEDIUM");
    }else{
        printf("GOOD");
    }
}
