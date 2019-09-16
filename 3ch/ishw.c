/*************************************************************************
	> File Name: ishw.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月25日 星期四 16时48分14秒
 ************************************************************************/

#include<stdio.h>

bool isPalindrome(int x){
    if(__builtin_expect(!!(x < 0),0)) return false;
    int y = 0, z = x;
    while (x) { 
        y = y * 10 + x % 10;
        x /= 10;
    }
}
int main(){
    int a;
    scanf("%d",&a);
    if (isPalindrome(a)){
        printf("yes\n");
    }else{
        printf("no\n");
    }
}
