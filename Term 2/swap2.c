#include <stdio.h>
void swap(int *xp,int *yp){

    *xp+=*yp;
    *yp-=*xp;
    *xp-=*yp;
}
int main()
{
    int x=30,y=45;
    printf("\n before swapping x =%d   y=%d",x,y);
    swap(&x,&y);//call by reference 
    //swap(x,y);//call by value 
    printf("\n after swapping x=%d   y=%d",x,y);

}