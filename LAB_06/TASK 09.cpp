#include <stdio.h>
#include <ctype.h>

int main() {
    char word[100], rev[100];
    int len = 0, i, isPal = 1, vowels = 0, consonants = 0;

    printf("Enter a word: ");
    scanf("%99s", word);

    printf("Original word: %s\n", word);

    while (word[len] != '\0') len++;        /* length without strlen() */
    printf("Length: %d\n", len);

    for (i = 0; i < len; i++) rev[i] = word[len - 1 - i];
    rev[len] = '\0';
    printf("Reversed: %s\n", rev);

    for (i = 0; i < len; i++)
        if (tolower(word[i]) != tolower(rev[i])) { isPal = 0; break; }
    printf(isPal ? "The word is a palindrome.\n" : "The word is not a palindrome.\n");

    for (i = 0; i < len; i++) {
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') vowels++;
        else if (isalpha(c)) consonants++;
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
