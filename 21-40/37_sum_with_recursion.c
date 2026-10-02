#include <stdio.h>

int sum(int n);

int main(void)
{
    // 1, 2, 3, 4, 5, 6, ... are natural numbers
    // 1 + 2 = 3
    // 1 + 2 + 3 = 6
    // 1 + 2 + 3 + 4 = 10
    // notice its n + sum(n-1)

    printf("%d\n", sum(4));

    return 0;
}

int sum(int n)
{
    if (n > 0) return n + sum(n - 1);
    else return 0;
}