#include <stdio.h>
int main(){
    int a,b,c;
    float average;
printf("Enter the marks 1 here :");
scanf("%d",&a);
printf("Enter the marks 2 here :");
scanf("%d",&b);
printf("Enter the marks 3 here :");
scanf("%d",&c);
printf("Total :%d",a+b+c);
average = (a+b+c)/3.0;
printf("\nAverage :%.2f",average);
if (average>=40){
printf("\nResult : PASS");

}
else {
printf("\nResult :FAIL");

}

return 0;
}