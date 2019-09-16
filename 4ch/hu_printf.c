/*************************************************************************
	> File Name: hu_printf.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月29日 星期一 20时45分52秒
 ************************************************************************/

#include<stdio.h>

int my_printf(const char *frm, ...) {
    int cnt = 0
    #define PUTC(a) putchar(a), ++cnt
    for (int i = 0; frm[i]; i++) {
        switch (frm[i]) {
            case '%':

        }
    }

}

int main() {

}
