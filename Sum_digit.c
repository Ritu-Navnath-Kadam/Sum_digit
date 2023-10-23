#include<stdio.h>
void main(){

int n,m,sum=0;
printf("enter a number");
scanf("%d",&n);
while(n>0)    

{    

m=n%10;    
n=n/10;
sum=sum+m;    


}    

printf("Sum is=%d",sum);    }

