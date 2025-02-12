#include <stdio.h>

int main()
{
    float unit , bill;
    scanf("%f",&unit);
     int flag=1;    
    if(unit>=0)
    { 
        if(unit<=100)
        {
            bill=unit*5;
        }
        else if(unit>100 && unit<=300)
        {
            bill=100*5 + (unit-100)*7;
        }
        else
        {
            bill=100*5 + 200*7 + (unit-300)*10;
        }   
    }
    else
    {
        flag=0;
        printf("Invalid Input!");
    }
    if(flag==1)
    {
        if(bill<=1200)
        {
         float final;
            final= bill-(bill*0.1);
            printf("The electricity bill is: %.2f.",final);
        }
        else
        {
            printf("The electricity bill is: %.2f.", bill);
        }
    }
    
    return 0;
}
