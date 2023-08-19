// Write a Program To Check Entered Number is Positive Or Negative number
#include <stdio.h>
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("%d is a Positive Number", num);
    }
    else{
        printf("%d is a negative number", num);
    }
    return 0;
}
