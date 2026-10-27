#include <stdio.h>
int main(){
    int i;
int arr[10];
for(i=0;i<10;i++)
{
    printf("\n Enter for %d th element ",i);
    scanf("%d",&arr[i]);
}
int count=0;
for(i=0;i<10;i++)
{
if (arr[i]>=50){
    count++;
}

}

printf("\n SO the count is %d",count);



return 0;

}