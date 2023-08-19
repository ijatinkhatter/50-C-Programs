// Write a program to identify if the character is a vowel or consonant
#include <stdio.h>

int main(){
    char ch;
    printf("Enter a CHaracter : ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
    {
        printf("%c is a vowal", ch);
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
    {
        printf("%c is a constant", ch);
    }
    else{
        printf("Invalid Character !!!");
    }
    return 0;
}
