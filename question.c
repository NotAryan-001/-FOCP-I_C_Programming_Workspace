#include <stdio.h>
int main (){
int a;
char c,b;
float f;
printf("Enter the Name here:");
scanf("%s",&b);
printf("\nEnter the Age here :");
scanf("%d",&a);
printf("\nEnter the height here :");
scanf("%f",&f);
printf("\nEnter the grade here :");
scanf("%s",&c);

printf("\n ---Student Profile---");
printf("\n Name:%s",c);
printf("\n Age:%d",a);
printf("\n Height:%f",f);
printf("\n Grade:%c",c);






return 0;    
}