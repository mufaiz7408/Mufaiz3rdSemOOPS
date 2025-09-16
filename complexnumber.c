#include <stdio.h>
#include <math.h>

int main()
{
    float real_1, img_1, real_2, img_2;
    float mag1, mag2;

    printf("enter real and imaginary parts of  complex number 1: ");
    scanf("%f %f", &real_1, &img_1);

    printf("enter real and imaginary parts of complex number 2: ");
    scanf("%f %f", &real_2, &img_2);

    mag1 = sqrt(real_1 * real_1 + img_1 * img_1);
    mag2 = sqrt(real_2 * real_2 + img_2 * img_2);

    if (mag1 > mag2)
        printf("First complex number has a higher magnitude.\n");
    else if (mag2 > mag1)
        printf("Second complex number has a higher magnitude.\n");
    else
        printf("Equal\n");

    return 0;
}

