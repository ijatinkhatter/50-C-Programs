//  Write a Program to find the Number of Days in a given month of a given Year
#include <stdio.h>
int main(){
    int year,month;
    printf("Enter Year : ");
    scanf("%d", &year);
    printf("Enter month : ");
    scanf("%d", &month);

    if (month == 1)
    {
        printf("No. of days is 31");
    }
    else if (month == 2)        
    {
        if (year%4 == 0)
        {
            printf("No of days are 29");
        }
        else{
            printf("No Of Days Are 28");
        }
    }
    else if (month == 3)
    {
        printf("No.of Days Is 31");
    }
    else if (month == 4)
    {
        printf("No.of Days Is 30");
    }
    else if (month == 5)
    {
        printf("No.of Days Is 31");
    }
    else if (month == 6)
    {
        printf("No.of Days Is 30");
    }
    else if (month == 7)
    {
        printf("No.of Days Is 31");
    }
    else if (month == 8)
    {
        printf("No.of Days Is 31");
    }
    else if (month == 9)
    {
        printf("No.of Days Is 30");
    }
    else if (month == 10)
    {
        printf("No.of Days Is 31");
    }
    else if (month == 11)
    {
        printf("No.of Days Is 30");
    }
    else if (month == 12)
    {
        printf("No.of Days Is 31");
    }
    return 0;
}
