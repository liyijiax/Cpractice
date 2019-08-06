/*************************************************************************
	> File Name: test2.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月31日 星期三 20时14分20秒
 ************************************************************************/

#include<stdio.h>
#include <stdio.h>

int main() {
    int matrix[100][100];
    int m;
    int n;
    int flag = 0;
    int temp = 1;
    int a = 0, b = 0,  c = m - 1, d = n - 1;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    /*
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", matrix[i][j]);
        }
    }
    */
    
    
    int i = 0, j = 0;
    while (1) {
            do {
               printf("%d", matrix[i][j]);
                j++;
            } while (j <= d);
            j--;
            b++;
            i++;
            while (i <= c) {
               printf("%d", matrix[i][j]);
                i++;
            } 
            i--;
            d--;
            j--;
            while (j >= b) {
               printf("%d", matrix[i][j]);
                j--;
            }
            j++;
            i--;
            c--;
            while (i >= a) {
               printf("%d", matrix[i][j]);
                i--;
            }
            i++;
            j++;
            a++;
        if (a == c && b == d) {
            break;
        }  
    }

    return 0;
}
