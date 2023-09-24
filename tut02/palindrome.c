#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char *s);

int main(void) {
    
    char *s = "daniel";
    if (isPalindrome(s)) {
        printf("PALINDROME!\n");
    } else {
        printf("not :(\n");
    }
    return 0;
}


bool isPalindrome(char *s) {
    int l = 0;              // O(1)
    int r = strlen(s) - 1;  // O(n)
    for (; l < r; l++, r--) {   // n / 2 === O(n)
        if (s[l] != s[r]) {     // O(1)
            return false;
        }
    }
    return true;                // O(1)
}

// O(1 + n + n/2 + 1 + 1) = O(3 + 3n/2) = O(n)