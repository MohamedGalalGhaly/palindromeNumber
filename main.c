#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr [20], temp, j, reversedNum = 0, num, i = 0, count = 0;

    scanf("%i",&num);

    temp = num;

    while (temp != 0)
    {
        arr[i] = temp % 10;
        temp = temp / 10;
        i++;
    }

    for (j=i-1; j>=0; j--)
    {
        reversedNum += arr[j] * pow (10,count);
        count ++;
    }

    if (num == reversedNum)
        printf("palindrome Number");

    else
        printf("NOT palindrome Number");

    return 0;
}
