#include <stdio.h>
int main(){
float amount;//float is reccommended in all bill part 
printf("\n Enter the amount here :");
scanf("%f",&amount);
if (amount>=5000)
printf("\nCongrats you got extra off now you have to pay \n %.2f",amount - (amount/10));
else
printf("\nSorry you didnt get anything you have to pay the same %.2f",amount);

return 0;
}