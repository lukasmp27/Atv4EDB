#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t = 'A', *s = &t, **r = &s, ***q = &r, ****p = &q;
    printf("Valor em P = %c",****p);
    return 0;
}
