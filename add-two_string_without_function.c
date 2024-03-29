#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000];
    char str2[1000];
    fgets(str1,1000,stdin);
    fgets(str2,1000,stdin);
    int len = strlen(str1);
    int j=0;
    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }
    puts(str1);
    return 0;
}