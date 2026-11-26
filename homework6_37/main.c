#include <stdio.h>

int recursiveMaximum(const int array[], int size);

int main(void) 
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int numbers[size];
    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; ++i) 
    {
        scanf("%d", &numbers[i]);
    }

    int maxVal = recursiveMaximum(numbers, size);
    printf("The maximum value in the array is: %d\n", maxVal);

    return 0;
}

int recursiveMaximum(const int array[], int size) 
{
    if (size == 1) 
    {
        return array[0];
    }

    int maxOfRest = recursiveMaximum(array, size - 1);

    if (array[size - 1] > maxOfRest) 
    {
        return array[size - 1];
    } 
    else 
    {
        return maxOfRest;
    }
}