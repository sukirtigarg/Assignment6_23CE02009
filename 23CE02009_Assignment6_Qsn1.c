/*23CE02009_Assignment6_Qsn1*/
#include <stdio.h>
void prime(int l, int u)
{
    int i, j, flag = 0;
    for (i = l; i <= u; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
            printf("%d", i);
    }
}

int main()
{
    int u, l;
    printf("Enter the lower limit and upper limit:");
    scanf("%d %d", &l, &u);
    prime( l, u);
}
