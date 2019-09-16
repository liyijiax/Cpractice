/*************************************************************************
	> File Name: 3.二分查找.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月14日 星期六 15时29分28秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;

int binary_search(int *num, int x, int l, int r) {
    
}

int main() {
    int a[15] = {2, 9, 1, 5, 6, 1, 12, 13, 16, 18};
    sort(a, a + 10);
    int x;
    cin >> x;
    printf("%s", binary_search(a, x, 0, 9) ? "YES" : "NO");
    return 0;
}
