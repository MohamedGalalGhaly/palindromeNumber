#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digit, temp, j, reversedNum = 0, num, i = 0, count = 0;

    scanf("%i",&num);

    temp = num;

    while (temp != 0)
    {
        digit = temp % 10;
        temp = temp / 10;
        reversedNum = reversedNum*10 + digit;
    }

    if (num == reversedNum)
        printf("palindrome Number");

    else
        printf("NOT palindrome Number");

    return 0;
}
