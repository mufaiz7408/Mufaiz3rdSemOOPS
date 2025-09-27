#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float u, v, a, t, s;

    printf("Equations of Motion Solver\n");
    printf("1. v = u + a*t\n");
    printf("2. s = u*t + 0.5*a*t^2\n");
    printf("3. v^2 = u^2 + 2*a*s\n");
    printf("Choose an equation (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: // v = u + a*t
            printf("Enter values (enter -1 for unknown):\n");
            printf("u: "); scanf("%f", &u);
            printf("v: "); scanf("%f", &v);
            printf("a: "); scanf("%f", &a);
            printf("t: "); scanf("%f", &t);

            if(v == -1) v = u + a*t;
            else if(u == -1) u = v - a*t;
            else if(a == -1) a = (v - u) / t;
            else if(t == -1) t = (v - u) / a;

            printf("\nResult -> u=%.2f, v=%.2f, a=%.2f, t=%.2f\n", u, v, a, t);
            break;

        case 2: // s = u*t + 0.5*a*t^2
            printf("Enter values (enter -1 for unknown):\n");
            printf("u: "); scanf("%f", &u);
            printf("a: "); scanf("%f", &a);
            printf("t: "); scanf("%f", &t);
            printf("s: "); scanf("%f", &s);

            if(s == -1) s = u*t + 0.5*a*t*t;
            else if(u == -1) u = (s - 0.5*a*t*t) / t;
            else if(a == -1) a = 2*(s - u*t) / (t*t);
            else if(t == -1) {
                // quadratic equation: 0.5*a*t^2 + u*t - s = 0
                float A = 0.5*a, B = u, C = -s;
                float D = B*B - 4*A*C; 
                if(D >= 0) {
                    float t1 = (-B + sqrt(D)) / (2*A);
                    float t2 = (-B - sqrt(D)) / (2*A);
                    printf("\nPossible times: t1=%.2f, t2=%.2f\n", t1, t2);
                } else {
                    printf("\nNo real solution for time.\n");
                }
                return 0;
            }

            printf("\nResult -> u=%.2f, a=%.2f, t=%.2f, s=%.2f\n", u, a, t, s);
            break;

        case 3: // v^2 = u^2 + 2*a*s
            printf("Enter values (enter -1 for unknown):\n");
            printf("u: "); scanf("%f", &u);
            printf("v: "); scanf("%f", &v);
            printf("a: "); scanf("%f", &a);
            printf("s: "); scanf("%f", &s);

            if(v == -1) v = sqrt(u*u + 2*a*s);
            else if(u == -1) u = sqrt(v*v - 2*a*s);
            else if(a == -1) a = (v*v - u*u) / (2*s);
            else if(s == -1) s = (v*v - u*u) / (2*a);

            printf("\nResult -> u=%.2f, v=%.2f, a=%.2f, s=%.2f\n", u, v, a, s);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
