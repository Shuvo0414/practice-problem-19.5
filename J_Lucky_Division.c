#include <stdio.h>

/*
                     Lucky Division.

Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given number n is almost lucky.

Input:
The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.

Output:
In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO" (without the quotes).

Examples-->
Input:
47
Output:
YES

Input:
16
Output:
YES

Input:
78
Output:
NO

Note-->
Note that all lucky numbers are almost lucky as any number is evenly divisible by itself.

In the first sample 47 is a lucky number. In the second sample 16 is divisible by 4.

*/

int main()
{
    int n;
    scanf("%d", &n);

    // Store all lucky numbers possible for n <= 1000
    int luckyNumber[] = {
        4, 7,
        44, 47, 74, 77,
        444, 447, 474, 477,
        744, 747, 774, 777};

    // Calculate the total number of lucky numbers in the array
    int length = sizeof(luckyNumber) / sizeof(luckyNumber[0]);
    // printf("%d", length);

    // flag = 0 means no lucky divisor found yet
    int flag = 0;

    // Check if n is divisible by any lucky number
    for (int i = 0; i < length; i++)
    {
        if (n % luckyNumber[i] == 0)
        {
            flag = 1; // n is almost lucky
            break;    // Stop checking because answer is already found
        }
    }

    // Print the final result
    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}