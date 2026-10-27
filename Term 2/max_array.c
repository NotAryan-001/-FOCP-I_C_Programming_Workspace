#include <stdio.h>
int main(){
    int arr[5]={55,34,53,76,32};
    int n=5;
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
         if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("The maximum number is %d and the minimum number is %d",max,min);

    return 0;

}