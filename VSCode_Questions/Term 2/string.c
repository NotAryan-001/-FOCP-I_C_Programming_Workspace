#include <stdio.h>
#include <string.h>
int main(){
    char str1[20];
    int a;
    printf("Enter the score");
    scanf("%d",&a);
    getchar();       //getchar is used to kill \n
    printf("\n Enter the string");
    scanf("%19[^\n]s",str1);   //[*\n]s is used to enter input in one go 


    printf("\n Score =%d \n string is =%s",a,str1);


    return 0;
}