#include <stdio.h>
#include <string.h>

void main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);

    int i = 0;
    int r = strlen(input) - 1;
    int isPalindrome = 1; 
    while (i < r) {
        if (input[i] != input[r]) {
            isPalindrome = 0;
            break;
        }
        i++;
        r--;
    }
    if (isPalindrome) {
        printf("%s is a palindrome.\n", input);
    } else {
        printf("%s is not a palindrome.\n", input);
    }
}

