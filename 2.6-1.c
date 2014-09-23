#include <stdio.h>
#include <string.h>
#define LENGTH 20
int sort(char *str)
{
    char tmp[strlen(str)];
    int count = 0;
    strcpy(tmp, str);
    for(char i = '!'; i <= 'z'; i++)
    {
        for(int j = 0; j < strlen(tmp); j++)
        {
            if(tmp[j] == i)
            {
                str[count] = i;
                count++;
            }
        }
    }
    return 0;
}

int main()
{
    char trial[] = "acdefgab";
    sort(trial);
    printf("%s\n",trial);
    return 0;
}
