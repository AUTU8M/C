//newton's forward interpolaton method implementaion in c
#include<stdio.h>
#include<math.h>
int main(){
     float x,y,u,u1;
     int i,j,n,fact;
     printf("enter the no. of terms: ");
     scanf("%d",&n);
     float a[n][n+1];
     printf("enter the values of x : \n");
     for(i=0;i<n;i++)
         scanf("%f",&a[i][0]);
     printf("enter the values of y : \n");
     for(i=0;i<n;i++)
        scanf("%f",&a[i][1]);
    printf("enter the value of x for whcih you want y \n");
        scanf("%f",&x);
    //find the difference table
for(j=2;j<=n;j++){
    for(i=0;i<=n-j;i++)
    a[i][j] = a[i+1][j-1]-a[i][j-1];
}
//print the differnece table
printf("the difference tavle is as follows; \n");
for(i=0;i<n;i++){
for(i=0;j<n-i;j++)
    printf("%f",a[i][j]);
    printf("\n");

        }
//find u
u = (x - a[0][0])/(a[1][0]-a[0][0])        ;
y=a[0][1];
u1=u;
fact= 1;
for (i=2; i<=n; i++){
    y=y+(u1* a[0][i])/fact;
    fact = fact *i;
    u1= u1*(u-(i-1));
}
printf("\n \n value at X =%g is %f",x,y);

}