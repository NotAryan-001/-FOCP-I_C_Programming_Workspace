#include <stdio.h>
int main(){
    int i;
int arr[5];
//arr[]={3,4,4,5,554,34,3}; //elements in array will be 7
//arr[5]={0} //intialise to zero 
//arr[5]={44,55,6,6,4,45};
for(i=0;i<5;i++)
{
    printf("\n Enter for %d th element",i);
    scanf("%d",&arr[i]);
}

for(i=4;i>0;i--){
    printf("\ni is %d and arr is %d",i,arr[i]);
}


return 0;

}
