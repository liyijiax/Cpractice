/*************************************************************************
	> File Name: 3.单调函数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月14日 星期六 15时50分45秒
 ************************************************************************/

#include<iostream>
using namespace std;

int arr(int x) {
    return x * x;
}

int binary_search(int (*arr)(int), int x, int n) {
    int l = 0, r = n - 1, mid;
    while (l <= r) {
        mid = (l + r) >> 1;
        if (arr(mid) == x) return mid;
        if (arr(mid) < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main() {
    int y;
    while (~scanf("%d", &y)) {
        int x = binary_search(arr, y, 100);
        printf("%d * %d = %d\n", x, x, y);
    }
    return 0;
}
