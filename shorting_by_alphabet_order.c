#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int min = INT_MAX;
    char str[1000];
    fgets(str, 1000, stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);
    int array[len];
    for (int i = 0; str[i] != '\0'; i++)
    {
        array[i] = str[i];
    }
    int index = 0, temp;
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            if (array[j] < min)
            {
                min = array[j];
                index = j;
            }
        }
        temp = array[i];
        array[i] = min;
        array[index] = temp;
        min = INT_MAX;
        index = 0;
    }    
    int index1;
    if (array[0] != ' ')
    {
        index1 = -1;
    }
    else
    {
        index1 = 0;
    }
    for (int i = 0; i < len; i++)
    {
        if (array[i] == ' ')
        {
            index1 = i;
        }
    }
    char str1[1000];
    int j;
    for (int i = index1 + 1, j = 0; i < len; i++, j++)
    {
        str1[j] = array[i];
    }
    for (int i = 0; i < len - (index1 + 1); i++)
    {
        printf("%c", str1[i]);
    }
    printf("\n");
    return 0;
}