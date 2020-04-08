#include <stdio.h>
int main()
{
    char alphabet;                                              //program to check alphabet is vowel or consonant//
    printf("Enter The Alphabet You Want To Check:\n");
    scanf("%c", &alphabet);
    switch (alphabet)
    {
    case 'a':
        printf("%c is a vowel", alphabet);
        break;
    case 'e':
        printf("%c is a vowel", alphabet);
        break;
    case 'i':
        printf("%c is a vowel", alphabet);
        break;
    case 'o':
        printf("%c is a vowel", alphabet);
        break;
    case 'u':
        printf("%c is a vowel", alphabet);
        break;
    default:
        printf("%c is a consonant", alphabet);
        break;
    }
    return 0;
}