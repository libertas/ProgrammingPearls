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
    char input[LENGTH], word[LENGTH], tmp[LENGTH];
    FILE *dict;
    dict = fopen("2.6-1.dict", "r");
    scanf("%s", input);
    sort(input);
    for(; fscanf(dict, "%s", word) != EOF; )
    {
        strcpy(tmp, word);
        sort(tmp);
        if(strcmp(input, tmp) == 0) printf("%s\n", word);
    }
    return 0;
}
