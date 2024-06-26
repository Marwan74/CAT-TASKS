#include <stdio.h>
#include <stdlib.h>
int isNthBitSet(int num, int n) {

    return (num & (1 << n)) != 0;
}

int main()
{
     int num, n;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Enter nth bit to check (0-31): ");
    scanf("%d", &n);
     if (n < 0 || n > 31) {
        printf("Invalid bit position. Please enter a value between 0 and 31.\n");
        return 1;
    }
    if (isNthBitSet(num, n)) {
        printf("The %d bit is set to 1\n", n);
    } else {
        printf("The %d bit is set to 0\n", n);
    }

    return 0;
}
