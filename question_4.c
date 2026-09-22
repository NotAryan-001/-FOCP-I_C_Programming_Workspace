#include <stdio.h>
int main(){
float height;
float weight;
printf("Enter the weight in kg here : ");
scanf("%f",&weight);
printf("Enter the height in metres here :");
scanf("%f",&height);
//BMI = Weight/(height*height);
printf("BMI :%.2f",weight/(height*height));








return 0; 
}