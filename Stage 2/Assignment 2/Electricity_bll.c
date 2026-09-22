#include <stdio.h>
int main (){
float unit,bill;
printf("Enter the unit here:");
scanf("%f",&unit);
if (unit<=100){
    bill=unit*2;
    printf("Your amount is :%f",bill);
}
else if (unit<=200)
    {
     bill=200 +(unit-100)*3;
     printf("Your amount is :%f",bill);
    }            
    else {
     bill= 500 +(unit-200)*5;
     printf("Your amount is :%f",bill);
    }
    

    return 0;
}