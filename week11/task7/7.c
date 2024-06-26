#include <stdio.h>
#include <stdlib.h>
void copyString(char *dest, const char *src){
    while (*src != '\0'){
        *dest = *src;
         src++;
        dest++;
    }
     *dest = '\0';
}



int main()
{
   char source[100], destination[100];

    printf("Enter a string to copy: ");
    scanf("%s", source);
    copyString(destination, source);
    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);
    return 0;
}