#include <stdio.h>

#ifdef DEBUG
#define log(frm, args...) { \
	printf("[%s : %d]", __func__, __LINE__); \
	printf(frm, ##args); \
	printf("\n");\
}
#else
#define log(frm, args...)
#endif

#define contact(a, b) a##b

int main() {
	int a = 7;
	int abcdef = 19;
	log("%d", a);
	log("hello world");
	contact(abc, def) = 21;
	log("%d", abcdef);
	return 0;
}
