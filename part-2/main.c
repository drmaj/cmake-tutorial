#include <stdio.h>
#include "palindrome.h"

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // palindrome if orignalInteger and reversedInteger are equal
    if (isPalindrome(n))
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);
    
    return 0;
}
