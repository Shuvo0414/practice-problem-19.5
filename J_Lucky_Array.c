#include <stdio.h>

/*
                 Lucky Array.

Given a number N and an array A of N numbers. Determine if the array is lucky or not.

Note: the array is lucky if the frequency (number of occurrence) of the minimum element is odd.

Input:
First line contains a number N (2 ≤ N ≤ 1000) number of elements.
Second line contains N numbers ( - 10^5 ≤ Ai ≤ 10^5).

Output:
Print "Lucky" (without quotes) if the frequency of the minimum element is odd, otherwise print "Unlucky"(without quotes).

Examples-->
Input:
5
8 8 9 5 9
Output:
Lucky

Input:
5
3 3 3 5 3
Output:
Unlucky

Note-->
First Example :
minimum element is 5 and its frequency is 1 and it's ODD so the array is lucky.

Second Example :
minimum element is 3 and its frequency is 4 and it's EVEN so the array is not lucky.

*/

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // Assume the first element is the minimum element.
    int minEelement = A[0];

    // Find the minimum element in the array.
    for (int i = 1; i < N; i++)
    {
        if (minEelement > A[i])
        {
            minEelement = A[i];
        }
    }

    // Count how many times the minimum element appears.
    int cnt = 0;

    for (int i = 0; i < N; i++)
    {
        if (A[i] == minEelement)
        {
            cnt++;
        }
    }

    // If frequency of minimum element is even, array is Unlucky.
    // Otherwise, array is Lucky.
    if (cnt % 2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }

    return 0;
}