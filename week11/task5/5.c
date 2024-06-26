#include <stdio.h>
#include <stdlib.h>
int Find_MAX(int a,int b,int c,int d){
    if (a>=b && a>=c && a>=d){
        printf("maximum number is %d\n",a);
    }
    else if (b>=a && b>=c && b>=d){
        printf("maximum number is %d\n",b);
    }
    else if(c>=a && c>=b && c>=d){
        printf("maximum number is %d\n",c);
    }
    else {
        printf("maximum number is %d\n",d);
    }
}
int Find_MIN(int a,int b,int c,int d){
    if (a<=b && a<=c && a<=d){
        printf("minimum number is %d\n",a);
    }
    else if(b<=a && b<=c && b<=d){
        printf("minimum number is %d\n",b);
    }
     else if(c<=a && c<=b && c<=d){
        printf("minimum number is %d\n",c);
    }
    else {
        printf("minimum number is %d\n",d);
    }
}

int main()
{
   int a,b,c,d ;
    printf("enter the four numbers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    Find_MAX(a,b,c,d);
    Find_MIN(a,b,c,d);
    return 0;
}
