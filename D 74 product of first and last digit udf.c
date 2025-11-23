#include <stdio.h>
long long fact(int a){
    long long f=1;
for(int i=a;i>0;i--){
    f*=i;
    }
    return f;
}


float series(int n){
float sum=0.0;
for(int i=1;i<=n;i++){
    int den=(i*i)+1;
    sum=sum+(float)i/fact(den);
}
return sum;
}i

int main(){
int n;
printf("Enter the number of term    : ");
scanf("%d",&n);
printf("The sum of the series upto %d terms is: %f",n,series(n));
return 0;
}
