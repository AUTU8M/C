//lagrange interpolarion method
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    float x[n], y[n],term,sum=0,u;
     int i,j;
     printf("enter the values of x: \n");
     for(i=0;i<n;i++)
     scanf("%d",&x[i]);
     printf("enter the values of y: \n");
    for(i=0;i<n;i++)
    scanf("%d",&y[i]);
    printf("enter the value of x for whick you want y:  ");
    scanf("%f",&u);
    //applying the formula
     for(i=0;i<n;i++){
     
      term=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            term = term * ((u-x[j])/(x[i]-x[j]));
        }
        sum = sum + term * y[i];
     }
     printf("\n value at x=%g is = %f", u,sum);
}