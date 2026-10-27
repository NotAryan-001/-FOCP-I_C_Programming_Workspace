#include <stdio.h>
void pattern(int a){
    for(int j=1;j<=a;j++){
       for(int i=1;i<=j;i++){
        printf("%d",54321);
       }
       printf("\n");
    
    }
}


int main(){
    int a;
    scanf("%d",&a);
    pattern(a);

    return 0;
}

