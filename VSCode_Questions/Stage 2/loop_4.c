#include<stdio.h>
int main (){
    int a;
    printf("Enter the number which table you want");
    scanf("%d",&a);
 int count=1;
 while (count<11)
 {
 
  printf("%d *%d =%d\n",a,count,a*count);
  count++;

 }
 

    return 0;
}