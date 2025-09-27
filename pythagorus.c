#include <stdio.h>
#include <math.h>   // for sqrt()

int main() {
    int choice;
    float a, b, c;

    printf("Pythagoras Theorem Calculator\n");
    printf("1. Find Hypotenuse (c)\n");
    printf("2. Find Side (a)\n");
    printf("3. Find Side (b)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter side a: ");
            scanf("%f", &a);
            printf("Enter side b: ");
            scanf("%f", &b);
            c = sqrt((a * a) + (b * b));
            printf("Hypotenuse (c) = %.2f\n", c);
            break;

        case 2:
            printf("Enter side b: ");
            scanf("%f", &b);
            printf("Enter hypotenuse c: ");
            scanf("%f", &c);
            if(c > b) {
                a = sqrt((c * c) - (b * b));
                printf("Side a = %.2f\n", a);
            } else {
                printf("Invalid values! Hypotenuse must be greater than side.\n");
            }
            break;

        case 3:
            printf("Enter side a: ");
            scanf("%f", &a);
            printf("Enter hypotenuse c: ");
            scanf("%f", &c);
            if(c > a) {
                b = sqrt((c * c) - (a * a));
                printf("Side b = %.2f\n", b);
            } else {
                printf("Invalid values! Hypotenuse must be greater than side.\n");
            }
            break;
    }

    return 0;
}
