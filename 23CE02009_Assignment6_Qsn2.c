/*23CE02009_Assignment6_Qsn2*/
#include <stdio.h>
int main()
{
    int i, n, arr[100], sum = 0, arr2[100];
    float avg;
    printf("Enter the number of elements in array");
    scanf("%d", &n);
    printf("\nEnter the array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    avg = (float) sum/n ;
    int j=0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > avg)
     {       arr2[j] = arr[i]; 
            j++;
    }
    }
    for(i=0; i<n; i++)
    {
        printf("%d", arr2[i]);
    }
    
}

