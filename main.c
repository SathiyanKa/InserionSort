#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter Array Size :");
    scanf("%d",&size);

    int arr[size];
    printf("Enter Elements :");
    for(int i = 0;i < size; i++)
        scanf("%d",&arr[i]);

    for(int i = 0; i < size; i++)
    {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    for(int i = 0; i < size; i++)
        printf("%d ",arr[i]);

    return 0;
}
