/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月31日 星期三 19时23分50秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int temp[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &temp[i][j]);
        }
    }
    int a, b, c, d, flag = 0;
    a = 0, b = 0, c = m - 1, d = n - 1;
    int i = 0, j = 0;
    while (1) {
        while (j <= d) {
            flag && printf(" ");
           printf("%d", temp[i][j]);
           j++; 
            flag = 1;
        }
        j--;
        i++;
        a++;
        if (i > c) {
            break;
        }
        while (i <= c) {
            printf(" ");
            printf("%d", temp[i][j]);
            i++;
        }
        i--;
        j--;
        d--;
        if (j < b) break;
        while (j >= b) {
            printf(" ");
            printf("%d", temp[i][j]);
            j--;
        }
        j++;
        c--;
        i--;
        if (i < a) break;
        while (i >= a) {
            printf(" ");
            printf("%d", temp[i][j]);
            i--;
        }
        i++;
        b++;
        j++;
        if (j > d) break;
        
    }
    return 0;
}
