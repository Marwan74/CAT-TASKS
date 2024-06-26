#include <stdio.h>
#include <stdlib.h>


int main()
{
    int number,digit,sum=0;
    printf("enter any number to find sum of its digits : ");
    scanf("%d",&number);
    while(number>0){
        digit = number %10;
        sum += digit;
        number /= 10;
    }
     printf("Sum of digits = %d\n",sum);

    return 0;
}
