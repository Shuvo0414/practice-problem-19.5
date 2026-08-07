#include <stdio.h>

/*
                Choose Elements.

You are given an array 𝑎 of 𝑛 integers, and an integer 𝑘
You can choose at most 𝑘 elements and get their summation.

What is the maximum summation you can get?

Input:
The first line contains two integers 𝑛 and 𝑘(1≤𝑘≤𝑛≤10^3) the number of elements in the array 𝑎 and the maximum elements you can choose respectively.

The second line contains 𝑛 integers 𝑎𝑖(−10^9≤𝑎𝑖≤10^9) the elements of the array 𝑎.

Output:
Output the maximum summation you can get.

Examples-->
Input:
2 2
1 2
Output:
3

Input:
2 1
1 2
Output:
2

Input:
3 3
1 2 3
Output:
6

*/

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    // Use long long because the summation can be very large.
    long long int sum = 0;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Sort the array in descending order.
    // The largest elements will come first.
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp;

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Choose the first k largest elements and calculate their sum.
    for (int i = 0; i < k; i++)
    {
        sum = a[i] + sum;
    }

    printf("%lld", sum);

    return 0;
}