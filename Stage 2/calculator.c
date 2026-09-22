#include <stdio.h>
// You can use math.h for using modulus or things in float function
//please you integer only value for now 
int main() {
    int a,b,choice;
    printf("Enter the three numbers here :");
    scanf("%d%d",&a,&b);
    printf("Choose the operation :\n1 Addition \n2 Subtraction \n3 MUltiplication \n4 Divide \n5 Remainder\n");
    scanf("%d",&choice);
if (choice == 1){
                                 printf("Now the outcome becomes : %d",a+b);

                }
else if (choice == 2){
                                 printf("Now the outcome becomes : %d",a-b);

                     }
else if (choice == 3){
                                 printf("Now the outcome becomes : %d",a*b);

                     }
else if (choice == 4){
                                 printf("Now the outcome becomes : %d",a/b);

                     }
else if (choice == 5){
                                 printf("Now the outcome becomes : %d",remainder);

                     }
else
     printf("You have choose the invalid option");





 return 0;   
}