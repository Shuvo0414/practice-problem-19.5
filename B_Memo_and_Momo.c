#include <stdio.h>

/*

               Memo and Momo

Memo and Momo are playing a game. Memo will choose a positive number 𝑎, and Momo will choose a positive number 𝑏.

Your task is to tell them who will win according to the following rules:

->If both 𝑎 and 𝑏 are divisible by 𝑘, both of them win and you should print "Both".
->If 𝑎 is divisible by 𝑘 ,but 𝑏 isn't, Memo wins and you should print "Memo".
->If 𝑏 is divisible by 𝑘 ,but 𝑎 isn't, Momo wins and you should print "Momo".
->If both 𝑎 and 𝑏 are not divisible by 𝑘 ,no one wins and you should print "No One".

Input
Only one line containing three positive numbers 𝑎, 𝑏 and 𝑘 (1≤𝑎,𝑏,𝑘≤10^18).

Output
Print the answer as described in the statement.

Examples-->
Input:
15 7 3
Output:
Memo

Input:
22 10 2
Output:
Both

*/

int main()
{
    // Use long long int because values can be up to 10^18.
    long long int a, b, k;

    scanf("%lld %lld %lld", &a, &b, &k);

    // Check if both a and b are divisible by k.
    if (a % k == 0 && b % k == 0)
    {
        printf("Both");
    }

    // Check if only a is divisible by k.
    else if (a % k == 0)
    {
        printf("Memo");
    }

    // Check if only b is divisible by k.
    else if (b % k == 0)
    {
        printf("Momo");
    }

    // If neither a nor b is divisible by k.
    else
    {
        printf("No One");
    }

    return 0;
}