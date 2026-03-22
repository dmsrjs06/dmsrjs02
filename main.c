#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "my_math.h"

int main(void) {
    int  a, b;
    char line[128];

    scanf("%d %d", &a, &b);

    printf("GCD: %d, LCM: %d\n", GCD(a, b), LCM(a, b));

    return 0;
}
