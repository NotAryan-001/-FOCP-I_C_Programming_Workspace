#include <stdio.h>
// else if is kind of ladder which checks every code individually 
int main(){
int a,b,c;
 printf("Enter the number here :");
 scanf("%d %d %d",&a,&b,&c);
 if (a>b){
   if(a>c)
   printf("a is greater");
   else
   printf("c is greater");

 }
 else if (b>c)
 printf("b is greater ");
else 
printf("c is greater");




   return 0; 
}