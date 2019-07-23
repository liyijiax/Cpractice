/*************************************************************************
	> File Name: int.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月23日 星期二 20时06分18秒
 ************************************************************************/

#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
int main(){
    printf("%s\n",PRId8);
    printf("%s\n",PRId16);
    printf("%s\n",PRId32);
    printf("%s\n",PRId64);
    printf("%d""\n",INT16_MIN);
    printf("%"PRId16"\n",INT16_MAX);
    printf("%"PRId32"\n",INT32_MIN);
    printf("%"PRId32"\n",INT32_MAX);
    printf("%"PRId64"\n",INT64_MIN);
    return 0;
}
