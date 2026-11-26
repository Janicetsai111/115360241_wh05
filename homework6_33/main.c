#include <stdio.h>

int binarySearch(const int b[], int low, int high, int searchKey);

int main(void) {
    int size, key;

    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size];
    printf("Enter %d integers in ascending order: ", size);
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter search key: ");
    scanf("%d", &key);

    int result = binarySearch(a, 0, size - 1, key);

    if (result != -1)
    {
        printf("%d found at subscript %d\n", key, result);
    } else
    {
        printf("%d not found\n", key);
    }

    return 0;
}

int binarySearch(const int b[], int low, int high, int searchKey) {
    if (low > high)
    {
        return -1;
    }

    int middle = (low + high) / 2;

    if (searchKey == b[middle])
    {
        return middle;
    } 
    else if (searchKey < b[middle]) 
    {
        return binarySearch(b, low, middle - 1, searchKey);
    } 
    else 
    {
        return binarySearch(b, middle + 1, high, searchKey);
    }
}