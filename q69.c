//Q69: Find the second largest element in an array.
#include <stdio.h>

int main()
{
    int arr[7] = {10,20,5,40,30,15,25};
    int max1, max2;

    if(arr[0] > arr[1])
    {
        max1 = arr[0];
        max2 = arr[1];
    }
    else
    {
        max1 = arr[1];
        max2 = arr[0];
    }

    for(int k=2; k<7; k++)
    {
        if(arr[k] > max1)
        {
            max2 = max1;
            max1 = arr[k];
        }
        else if(arr[k] > max2 && arr[k] != max1)
        {
            max2 = arr[k];
        }
    }

    printf("Second largest no is %d\n", max2);

    return 0;
}
