/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月29日 星期一 18时45分16秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    int n, k, m, i, j, differ, start, end, mid;
    int numbers[1000001]; // 注意题目要求不要少写位数，题目要求10**6，数组要到七位
    // 反复读入数字和查找数字的数量
    while (scanf("%d%d", &n, &k) != EOF)  {
        // 读入给定的数字
        for (i = 0; i < n; i++)  {
            scanf("%d", &numbers[i]);
        }
        for (j = 0; j < k; j++) {
            // 读入待查找的数字，
            scanf("%d", &m);
            // 请在下面完成查找读入数字的功能
            start = 0;
            end = n - 1;
            mid = (start + end) / 2;
            while (start <= end) {
                differ = numbers[mid] - m;
                if (differ == 0) {
                    j && printf(" ");
                    printf("%d", mid + 1);
                    break;
                } else if (differ < 0) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
                mid = (start + end) / 2;
            }
            if (start > end) {
              j && printf(" ");
              printf("0");
            }
        }
    }
    return 0;
}
