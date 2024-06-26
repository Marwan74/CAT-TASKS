#include <stdio.h>
#include <stdlib.h>


int main()
{
    char choice;
    double x,y,result;
    printf(" enter an operator (+,-,*,/): ");
    scanf(" %c",&choice);
    printf(" enter two operands : ");
    scanf(" %lf %lf",&x,&y);
    switch(choice){
    case '+' :
        result = x + y;
        printf("%.lf + %.lf = % .lf \n",x,y,result);
        break;
    case '-' :
        result = x - y;
        printf("%.lf - %.lf = % .lf \n",x,y,result);
        break;
    case '*' :
        result = x * y;
        printf("%.lf * %.lf = % .lf \n",x,y,result);
        break;
      case '/' :
        if(y!=0){
        result = x / y;
        printf("%.lf / %.lf = % .lf \n",x,y,result);
        }
        else{
                printf("Invalid division by zero \n");
        }
        break;
       default:
            printf("Error! Invalid operator.\n");
    }




    return 0;
}
