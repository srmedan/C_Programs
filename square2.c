# include <stdio.h>

int main (void)
{
    int i, n;
    printf("Enter the number of entries in the table: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
        printf("%10d%10d", i, i*i);
    
    return 0;

}
