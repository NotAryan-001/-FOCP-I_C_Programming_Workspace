#include <stdio.h>
void pattern(int a){
    for(int j=1;j<=a;j++){
       for(int i=1;i<=a;i++){
        printf("*");
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

