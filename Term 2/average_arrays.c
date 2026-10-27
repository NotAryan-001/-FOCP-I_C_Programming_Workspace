#include <stdio.h>
int main(){
    int i;
int arr[5];
for(i=0;i<5;i++)
{
    printf("\n Enter for %d th element",i);
    scanf("%d",&arr[i]);
}
int sum=0;

for(i=0;i<5;i++){
    printf("\ni is %d and arr is %d",i,arr[i]);
    sum=sum+arr[i];
}
int average=sum/5;
printf("\n SO the average is %d",average);



return 0;

}
