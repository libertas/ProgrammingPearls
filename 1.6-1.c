#include <stdio.h>
#define N 1000000

int num[N + 1];
int cmp ( const void *a , const void *b )
{
return *(int *)a - *(int *)b;
}

int main()
{
    int n = 0;
    while(scanf("%d", &num[n]) != EOF)
        n++;
    qsort(num, n, sizeof(int), cmp);
    for(int i = 0; i < n; i++)
        printf("%d\n", num[i]);
    return 0;
}
