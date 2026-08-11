#include <stdio.h>

/*
                     Shift Zeros.

Given an array A of size N.Print the array elements after shifting all zeroes in array A to the right.

Note: Solve this problem using function.

Input:
First line will contain a number N (1≤N≤10^3) number of elements.

Second line will contain N numbers (0≤Ai≤10^3).

Output:
Print the array after shifting right all its zeros.

Examples--->

Input:
4
2 0 0 5
Output:
2 5 0 0

Input:
5
1 5 0 7 4
Output:
1 5 7 4 0

*/

void ShiftZeros(int n, int a[])
{
    // This index keeps track of where the next non-zero element should go
    int nonZero = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[nonZero] = a[i];
            nonZero++;
        }
    }

    // After placing non-zero elements,
    // fill the remaining positions with zero
    for (int i = nonZero; i < n; i++)
    {
        a[i] = 0;
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];

    // Taking array input
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // Calling function to shift zeros
    ShiftZeros(N, A);

    // Printing updated array
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}