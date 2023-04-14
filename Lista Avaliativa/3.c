#include <stdio.h>

#define PI 3.14159

int main() {
    double R, VOLUME, AREA;

    scanf("%lf", &R);

    VOLUME = (4.0/3) * PI * R * R * R;
    AREA = 4 * PI * R * R;

    printf("VOLUME = %.3lf\n", VOLUME);
    printf("AREA = %.3lf\n", AREA);

    return 0;
}
