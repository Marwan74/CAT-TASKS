#include <stdio.h>
#include <stdlib.h>


int main()
{
    int number,power;
    long long answer=1;
    printf("enter the number : ");
    scanf("%d",&number);
    printf("enter a power : ");
    scanf("%d",&power);
   for(int i =1;i<=power;i++){
    answer *= number;
   }
     printf("Answer = %lld\n",answer);

    return 0;
}