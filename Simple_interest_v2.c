simple _interest.c#include <stdio.h>

float calculateSI(float p, float r, float t) {
    return (p * r * t) / 100;
}

int main() {
    float p, r, t, si;

    printf("Enter Principal: ");
    scanf("%f", &p);

    printf("Enter Rate: ");
    scanf("%f", &r);

    printf("Enter Time: ");
    scanf("%f", &t);

    si = calculateSI(p, r, t);

    printf("Simple Interest = %.2f", si);

    return 0;
}
