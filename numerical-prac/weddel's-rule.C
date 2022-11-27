//weddle's rule
#include<stdio.h>
#include <math.h>
float fun(float x){
    return log10(x);
}
// WEDDEL'S RULE::
float weddel(float lower, float upper){
float h;
   h = (upper - lower)/6;
   float result =0;
   result += (((3 * h) / 10) * (fun(lower) +5 * fun(lower + h) +fun(lower + 2 * h)  + 6 * fun(lower + 3 * h) + fun(lower + 4 * h) + 5 * fun(lower + 5 * h) + fun(lower + 6 * h)));
    return result;
}

int main(){

    float upper_limit, lower_limit;
    int n;
    printf("Enter lower limit of integration: ");
    scanf("%f", &lower_limit);
    printf("Enter upper limit of integration: ");
    scanf("%f", &upper_limit);
    printf("Enter number of sub intervals: ");
    scanf("%d", &n);
    printf("\nthe result in Weddel's rule : %.3f", weddel(lower_limit, upper_limit));
    return 0;
}
