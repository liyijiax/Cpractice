/*************************************************************************
	> File Name: 5.string.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月16日 星期一 22时16分56秒
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    char str[10];
    memset(str, 0, sizeof(str));
    while (~scanf("%d", &n)) {
        sprintf(str, "%x", n);
        printf("%s has %lu digits\n", str, strlen(str));
    }
    return 0;
}
