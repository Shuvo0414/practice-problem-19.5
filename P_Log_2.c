#include <stdio.h>

/*
                  Log2.

Given a number N. Print floor(log2(N)).

Note: Solve this problem using recursion.

Input:
Only one line containing a number N (1≤N≤10^18).

Output:
Print the answer required above.

Examples-->

Input:
1
Output:
0

Input:
8
Output:
3

*/

/*

Problem Understanding:

log2(N) means:

How many times can we divide N by 2
until it becomes 1.

Example:

N = 8

8 / 2 = 4  -> 1 time
4 / 2 = 2  -> 2 times
2 / 2 = 1  -> 3 times

Answer = 3


Recursion Idea:

Function parameters:

n -> current value after division

i -> counts how many times we divided by 2


Every recursive call:
- Divide n by 2
- Increase counter by 1

*/

void Log2(long long n, int i)
{
    // Base case:
    // When n becomes 1, we cannot divide anymore.
    // The counter i contains the total number of divisions.
    if (n == 1)
    {
        printf("%d", i);
        return;
    }

    /*

    Recursive call:
    n is reduced by dividing it by 2.
    i is increased because one more division happened.

    Example:
    Log2(8,0)
    Log2(4,1)
    Log2(2,2)
    Log2(1,3)

    Then base case prints 3.
    */

    // n = n / 2;
    Log2(n / 2, i + 1);
}

int main()
{
    // N can be up to 10^18,
    // long long can store this large value.
    long long N;

    scanf("%lld", &N);

    // so counter starts from 0.
    Log2(N, 0);

    return 0;
}