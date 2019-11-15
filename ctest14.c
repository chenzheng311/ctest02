#include <stdio.h>
int main(void)
{
    char c;
    for(c='Z';c>='A';c--)
    {
        printf("%c",c+'a'-'A');

    }
    return 0;
}