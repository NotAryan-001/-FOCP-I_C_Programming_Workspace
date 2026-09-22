#include <stdio.h>
int main(){
    int num;
    printf("Enter the number here :");
    scanf("%d",&num);
    if (num <10 || num>50)
    printf("The number is not in the range ");
else 
printf("The number is in the range");

return 0;
}