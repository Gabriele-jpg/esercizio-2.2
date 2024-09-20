#include <stdio.h>

int main() {
    float base,altezza,area;
    printf("area triangolo: \n base:");
    scanf("%f",&base);
    printf("altezza: ");
    scanf("%f", &altezza);
    area = base*altezza/2;
    printf("area triangolo: %f \n",area);
    return 0;
}