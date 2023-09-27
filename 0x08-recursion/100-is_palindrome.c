#include "main.h"
#include <stdio.h>
#include <string.h>


int is_alphanumeric(char c) {
    return (c >= a && c <= z) || (c >= A && c <= Z) || (c >= 0 && c <= 9);
}

char to_lowercase(char c) {
    if (c >= A && c <= Z) {
        return c + (a - A);
    }
    return c;
}

int is_palindrome(char *s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        while (left < right && !is_alphanumeric(s[left])) {
            left++;
        }

        while (left < right && !is_alphanumeric(s[right])) {
            right--;
        }

        if (to_lowercase(s[left]) != to_lowercase(s[right])) {
            return 0; // Not a palindrome
        }

        left++;
        right--;
    }

    return 1;
}
