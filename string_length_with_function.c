#include <stdio.h>
#include<string.h>
int main()
{
    char str[1000000];
    fgets(str,10000000,stdin);
    int length = strlen(str);
    printf("Length=%d\n",length);
    return 0;
}
