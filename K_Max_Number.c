#include <stdio.h>

/*
Max Number

Given a number N and an array A of N numbers. Print the maximum value in this array.

Note: Solve this problem using recursion.

Input:
First line contains a number N (1 ≤ N ≤ 10^3) number of elements.

Second line contains N numbers ( - 10^9 ≤ Ai ≤ 10^9).

Output:
Print the maximum value in this array.

Example-->
Input:
5
1 -3 5 4 -6
Output:
5
*/

void MaxFun(int n, int a[], int maxvalue, int i)
{
    // Base case:
    // When all elements are checked, print the maximum value.
    if (i == n)
    {
        printf("%d", maxvalue);
        return;
    }

    // Compare current array element with current maximum value.
    // If current element is bigger, update maxvalue.
    if (a[i] > maxvalue)
    {
        maxvalue = a[i];
    }

    // Recursive call:
    // Move to the next index and continue checking.
    MaxFun(n, a, maxvalue, i + 1);
}

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int maxValue = A[0];

    // Call recursive function starting from index 0.
    MaxFun(N, A, maxValue, 0);

    return 0;
}