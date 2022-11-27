#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define f(x) (x * x) - (5 * x) + 2
#define g(x) (2 * x - 5)
int main()
{
    float f0, f1, f2, e, g0, g1, g2, x0, x1, x2;
    int N;
    int step = 1;
    printf("\nEnter initial guess:");
    scanf("%f", &x0);
    printf("Enter tolerable error: ");
    scanf("%f", &e);
    printf("Enter maximum iteration: ");
    scanf("%d", &N);
    /* Implementing Newton Raphson Method */
    printf("\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
    do
    {
        g0 = g(x0);
        f0 = f(x0);
        if (g0 == 0.0)
        {
            printf("Mathematical Error.");
            exit(0);
        }

        x1 = x0 - f0 / g0;

        printf("%d\t\t%f\t%f\t%f\t%f\n", step, x0, f0, x1, f1);
        x0 = x1;
        step++;
        if (step > N)
        {
            printf("Not Convergent.");
            exit(0);
        }

        f1 = f(x1);

    } while (fabs(f1) > e);

    printf("\nRoot is: %f", x1);
    getch();
}