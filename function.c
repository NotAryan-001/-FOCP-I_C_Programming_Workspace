#include <stdio.h>
int add(int a, int b){
return a+b;    //declaration is nesseccary
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int result=add(a,b);
    printf("%d",result);
    

}