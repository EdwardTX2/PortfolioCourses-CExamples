#include <stdio.h>

int occurences(int array[], int length, int to_find);
int main(void)
{
    int myarray1[] = {4,5,7,6,5,8,5,5,1,5};
    int myarray2[] = {0,0,1,1,0,2,2,3};

    int findarr1_5 = occurences(myarray1, 10, 5);
    int findarr2_0 = occurences(myarray2, 8, 0);

    printf("# of 5s found in myarray1: %d\n", findarr1_5);
    printf("# of 0s found in myarray2: %d\n", findarr2_0);

    return 0;
}

int occurences(int array[], int length, int to_find)
{
    int count = 0;

    for (int i = 0; i < length; i++)
        if (array[i] == to_find) count++;
    
    return count;
}