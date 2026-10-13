#include <stdio.h>
void pattern(int a){
    for(int j=1;j<=10;j++){
       for(int i=1;i<=j;i++){
        printf("%d",i);
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

