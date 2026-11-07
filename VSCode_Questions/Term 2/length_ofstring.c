#include <stdio.h>
#include <string.h>
int main()
{
char str1[10];
char str2[]="hello";
char str3[5]="Hello";
char str4p[] = {'\0','H','E','L','L','O','\0'};
printf("\nStr1size=%d str1 len=%d str1=%s,sizeof(str1),strlen(str1),str1");
printf("\nStr1size=%d str2 len=%d str2=%s,sizeof(str2),strlen(str2),str2");
printf("\nStr1size=%d str3 len=%d str3=%s,sizeof(str3),strlen(str3),str3");
printf("\nStr1size=%d str4 len=%d str4=%s,sizeof(str4),strlen(str4),str4");

}