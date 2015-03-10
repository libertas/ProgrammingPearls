#include <stdio.h>
#include <string.h>

int binarySearch(char c, char *s, int prefix, int end)
{
    int l = end - prefix + 1, mid = prefix + l / 2, first, second;
    if(l == 0)
        return -1;
    if(l == 2)
    {
        if(s[prefix] == c)
            return prefix;
        else if(s[prefix + 1] == c)
            return prefix +1;
        else
            return -1;
    }
    if(s[mid] == c)
        return mid;
    else
    {
        first = binarySearch(c, s, prefix, mid);
        if(first != -1)
            return first;
        second = binarySearch(c, s, mid, end);
        if(second != -1)
            return second;
        return -1;
    }
}

int main()
{
    char s[] = "aaaaaaabcd";
    printf("%d\n", binarySearch('a', s, 0, strlen(s) - 1));
    return 0;
}
