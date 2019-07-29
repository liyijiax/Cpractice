/*************************************************************************
	> File Name: mypritnf.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月29日 星期一 19时34分22秒
 ************************************************************************/

// putchar 除了printf之外的输出函数

#include<stdio.h>
#include <stdlib.h>

int my_printf(const chr *str, ...) { // 如果不用const不可以，因为不应该被修改，字面量的值是不能改变的，C语言也是吧字面量相同的值放在一个地址
    for (int i = 0; str[i]; i++) // 等价与 i < len 
}

int main() {
    
    return 0;
}
// 负数极小值再取负值等于本身
