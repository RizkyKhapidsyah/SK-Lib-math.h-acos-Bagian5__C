#pragma warning(disable:4996)
// crt_asincos.c
// arguments: 0

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <conio.h>

int main(int ac, char* av[]) {
    double  x, y;
    errno_t err;

    // argument checking
    if (ac != 2) {
        fprintf_s(stderr, "Usage: %s <number between -1 and 1>\n", av[0]);
        return 1;
    }

    // Convert argument into a double value
    if ((err = sscanf_s(av[1], "%lf", &x)) != 1) {
        fprintf_s(stderr, "Error converting argument into ", "double value.\n");
        return 1;
    }

    // Arcsine of X
    y = asin(x);

    printf_s("Arcsine of %f = %f\n", x, y);

    // Arccosine of X
    y = acos(x);
    printf_s("Arccosine of %f = %f\n", x, y);

    _getch();
    return 0;
}