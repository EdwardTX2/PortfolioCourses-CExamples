#include <stdio.h>

int find_min(int array[], int length);

int main(void)
{

    int nums[] = {23, 55, 13, 8, 23, 93};
    int nums2[] = {2,5,9,2,5,3,0};
    int nums3[] = {10, 20, 30, 40, 50, 60, 70, 5, 10};

    int number = sizeof(nums) / sizeof(nums[0]);

    int min = find_min(nums, number);
    int min2 = find_min(nums2, 7);
    int min3 = find_min(nums3, 9);

    printf("The lowest number is %d\n", min);
    printf("The lowest number is %d\n", min2);
    printf("The lowest number is %d\n", min3);

    return 0;
}

int find_min(int array[], int length)
{
    int min = array[0];

    for (int i = 1; i < length; i++)
    {
        if (min > array[i])
            min = array[i];
    }
    return min;
}