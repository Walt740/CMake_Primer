#include <stdio.h>
#include "calc.h"

int main()
{
    int a = 20;
    int b = 12;
#ifdef DEBUG
    printf("我是一个程序猿, 我不会爬树...\n");
#endif
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", add(a, b));
    printf("a - b = %d\n", subtract(a, b));
    printf("a * b = %d\n", multiply(a, b));
    printf("a / b = %f\n", divide(a, b));
    return 0;
}