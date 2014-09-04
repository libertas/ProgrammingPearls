#include <stdio.h>
#include <stdlib.h>
#define BITSPERWORD 32
#define N 1000000

int *string;

int setbit(int i)
{
    int con, left;
    int *p;
    con = i / BITSPERWORD;
    left = i % BITSPERWORD;
    p = string + con;
    *p = *p | ((int)1 << left);
    return 0;
}

int printstring()
{
    for(int i = 0; i < N / BITSPERWORD; i++)
    {
        int *p;
        p = string + i;
        for(int j = 0; j < BITSPERWORD; j++)
            if((*p >> j) & 1) 
                printf("%d ", i * BITSPERWORD + j);
    }
    printf("\n");
    return 0;
}

int main()
{
    int tmp, n;
    string = malloc((N/BITSPERWORD + 1) * sizeof(int));
    for(int i = 0; i < N/BITSPERWORD + 1; i++) string[i] = 0;
    while(1)
    {
        n = scanf("%d", &tmp);
        if(n == EOF) break;
        if(n != 1)
        {
            printf("ERROR:PLEASE INPUT INTEGER\n");
            exit(1);
        }
        if(tmp >= 0)
            setbit(tmp);
        else
        {
            printf("ERROR:LESS THAN ZERO\n");
            exit(1);
        }
    }
    printstring();
    free(string);
    return 0;
}


//Don't use pointers of char
//Do use definition
//Good job~
