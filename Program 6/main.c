// Write a Program to find the Quadrants in which co-ordinates lie
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the value of Point X : ");
    scanf("%d",&x);
    printf("Enter the value of Point Y : ");
    scanf("%d",&y);

    if ((x>0 && y>0))
    {
        printf("it will lie in Quadrant 1");
    }
    else if ((x<0 && y>0))
    {
        printf ("It will lie in Quadrant 2");
    }
    else if ((x<0 && y<0))
    {
        printf ("It will lie in Quadrant 3");
    }
    else{
        printf ("It will lie in Quadrant 4");
    }
    
        
}
