#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include "my_math.h"

int GCD(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int LCM(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a / GCD(a, b)) * b;
}
