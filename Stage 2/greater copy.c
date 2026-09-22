#include <stdio.h>
// && is used in if part for giving second condition
int main(){
int a,b,c;
printf("Enter three numbers here :");
scanf("%d%d%d",&a,&b,&c);
 if (a>b && a>c)
 printf("a %d is greater",a);
if (b>a && b>c)
printf("b %d is greater",b);
if (c>a && c>b);
printf("c %d is greater",c);




   return 0; 
}