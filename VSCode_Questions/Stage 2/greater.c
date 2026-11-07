#include <stdio.h>
// else if is kind of leader which checks every code individually 
int main(){
int a,b,c;
 a = 100,b=155,c=20;
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