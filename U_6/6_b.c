#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <memory.h>

#define MAXLENGTH 5

int isHasAlpha(char *argv);

int main(int argc, char *argv[]) {
    char *fisrt = argv[1];
    char *second = argv[2];

    if (second == NULL)
        printf("Benutzung: ./6_b <zahl> <zahl>");
    else if (isHasAlpha(fisrt));
    else if (isHasAlpha(second));
    else if (strlen(fisrt) > MAXLENGTH)
        printf("Kann '%s' nicht in Zahl umwandlen: Numerical result out of range\n", fisrt);
    else if (strlen(second) > MAXLENGTH)
        printf("Kann '%s' nicht in Zahl umwandlen: Numerical result out of range\n", second);
    else
        printf("%d\n", (atoi(fisrt) + atoi(second)));
    return 0;
}

int isHasAlpha(char *argv) {
    int a = strlen(argv);
    for (int i = 0; i < a; ++i) {
        if (isalpha(*(argv+i))) {
            printf("Kann '%s' nicht in Zahl umwandlen: Falsches Fomrat\n", argv);
            return 1;
        }
    }
    return 0;
}