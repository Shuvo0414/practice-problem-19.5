#include <stdio.h>
#include <string.h>

/*

                The Brothers.

Given two person names.

Each person has {"the first name" + "the second name"}.

Determine whether they are brothers or not.

Note: The two persons are brothers if they share the same second name.

Input:
First line will contain two Strings F1, S1 which donates the first and second name of the 1st person.

Second line will contain two Strings F2, S2 which donates the first and second name of the 2nd person.

Output:
Print "ARE Brothers" if they are brothers otherwise print "NOT".

Examples-->
InputCopy:
bassam ramadan
ahmed ramadan

Output:
ARE Brothers

Input:
ali salah
ayman salah

Output:
ARE Brothers

Input:
ali kamel
ali salah

Output:
NOT

*/

int main()
{
    // Four character arrays to store:
    // F1 -> First name of person 1
    // S1 -> Second name of person 1
    // F2 -> First name of person 2
    // S2 -> Second name of person 2
    char F1[100], S1[100];
    char F2[100], S2[100];

    scanf("%s %s", F1, S1);
    scanf("%s %s", F2, S2);

    /*
        We only need to compare second names.

        According to the problem:
        Two persons are brothers if their
        second names are the same.

        strcmp() compares two strings.

        Return value:
        0 -> strings are equal
        non-zero -> strings are different
    */

    int ans = strcmp(S1, S2);

    if (ans == 0)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }

    return 0;
}