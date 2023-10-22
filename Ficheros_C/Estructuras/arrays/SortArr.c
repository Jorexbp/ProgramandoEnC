#include <stdio.h>

/*
void ordenarArr(int[] arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
*/

void mostrarArr(int[] nums, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
}

int main()
{
    int nums[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);

   // ordenarArr(nums, size);
    mostrarArr(nums, size);
    return 0;
}
