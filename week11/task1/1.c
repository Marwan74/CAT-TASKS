#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    unsigned int num;
    int count_0 =0 , count_1 =0;
    int totalBits = sizeof(unsigned int)*CHAR_BIT;
    printf("enter any number : ");
    if(scanf("%u",&num)!=1){
        printf("invalid input");
        return 1;
    }
    for(int i =0; i < totalBits;i++){
        if((num >> i) & 1){
            count_1++;
        }else {
            count_0++;
        }
    }
    printf("total zero bit is  %d\n ",count_0);
    printf("total one bit is  %d\n ",count_1);
    return 0;
}


