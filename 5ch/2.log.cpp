#include <stdio.h>

#define COLOR(a, b) "\033[40;" #b "m" a "\033[0m"

#define GREEN(a) COLOR(a, 32)
#define BLUE(a) COLOR(a, 33)

#ifdef DEBUG
#define log(frm, args...) { \
	printf("\033[46;31m[%s : %d]\033[0m", __func__, __LINE__); \
	printf(frm, ##args); \
	printf("\n");\
}
#else
#define log(frm, args...)
#endif

//#define contact(a, b) a##b

#define __contact(a, b) a##b
#define contact(a, b) __contact(a, b)

int main() {
	int a = 7;
	int abcdef = 19;
	log(GREEN("%d"), a);
	log("hello world");
	contact(abc, def) = 21;
	log("%d", abcdef);
	//contact(GREEN("hello"), BLUE("world"));
	contact(contact(a, contact(b, c)), contact(d, ef)) = 33;
	log("%d", abcdef);
	return 0;
}
