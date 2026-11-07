#include <stdio.h>
#include <string.h>
int main()
{
char str1[10],str2[10];
int i,j;
printf("\nEnter the word");
scanf("%[^\n]s",str1);
for(i=strlen(str1)-1,j=0;j<strlen(str2),i>=0;i--,j++){
    str2[j]=str1[i];

}
str2[j]=str1[i];
printf("str1 = %s",str1);
printf("\nstr2 = %s",str2);

return 0;
}