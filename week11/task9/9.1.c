#include <stdio.h>
#include <stdlib.h>

int main()
{
   int binary,rem;
   printf("enter a binary number : ");
   scanf("%d",&binary);
   int decimal =0 , weight =1;
   while(binary!=0){
    rem = binary % 10;
    decimal = decimal + rem * weight;
    binary = binary / 10;
    weight = weight * 2;
   }
   printf("the number in decimal is %d ",decimal);


    return 0;
}