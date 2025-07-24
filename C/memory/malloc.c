#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char s[100];

    printf("s: ");
    if (fgets(s, sizeof(s), stdin) == NULL) return 1;

    // remove trailing newline
    s[strcspn(s, "\n")] = '\0';

    char *t = malloc(strlen(s) + 1);
    if (t == NULL) return 1;

    for (int i = 0, n = strlen(s) + 1; i < n; i++)
    {
        t[i] = s[i];
    }

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
    return 0;
}
