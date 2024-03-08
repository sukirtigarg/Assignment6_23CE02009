/*23CE02009_Assignment6_Qsn4*/
#include <stdio.h>
int main()
{
    int i, j, arr1[100], arr2[200], n1, n2, flag1 = 0, flag2=0 ;
    printf("Enter the number of elements in array 1 and 2: ");
    scanf("%d%d", &n1, &n2);
    printf("\nEnter the elements of first array: ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter the elements of second array: ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            if (arr1[i] == arr2[j])
                flag1 =1;
        }
    }
    if (flag1 == 1)
        printf("\nFirst array is a subset of the second array");
    else
    {
        printf("\nFirst array is not a subset of the second array");
    }
}