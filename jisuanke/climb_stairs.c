/*************************************************************************
	> File Name: climb_stairs.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月29日 星期一 19时22分28秒
 ***********************************************************************/
#include <stdio.h>

int main() {
	int n;
    scanf("%d", &n);
    int step[n]; // 注意数组长度是变量时声明的顺序，如果变量输入值在后，可能会出现段错误
    step[1] = 0;
    step[2] = 1;
    step[3] = 1;
    for (int i = 4 ; i <= n; i++) {
        step[i] = step[i - 2] + step[i - 3];
    }
    printf("%d", step[n]);
    return 0;
}
