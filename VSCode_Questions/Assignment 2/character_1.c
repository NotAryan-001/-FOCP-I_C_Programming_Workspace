#include <stdio.h>
int main(){
  char ch;
   printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    else if((ch>='a'|| ch <='z') || (ch>='A' || ch<='B')){
    switch(ch){
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
        printf("\nVowel");
        break;
        default:
        printf("\nConsonant");
      }
    }
    else {

        printf("\nSpecial character");
    }



    return 0;
}