#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int val1 = 10, val2 = 20, val3 = 30;
    int *p1 = &val1, *p2 = &val2, *p3 = &val3;

    puts("p1, p2, p3がそれぞれ指し示すアドレス．");
    printf("*p1 = %p\n", p1);
    printf("*p2 = %p\n", p2);
    printf("*p3 = %p\n", p3);

    p1 = 0;
    p2 = (void *)0;
    p3 = NULL;

    puts("代入後にp1, p2, p3がそれぞれ指し示すアドレス．");
    printf("*p1 = %p\n", p1);
    printf("*p2 = %p\n", p2);
    printf("*p3 = %p\n", p3);

    return EXIT_SUCCESS;
}
