#include <stdio.h>
#include <string.h>

void substring(char *orig, char *substr, int index, int length);

int main()
{
    // How to create a substring function

    char product_code[] = "100-440-0.750-3434-A";

    char part_number[4];
    char manu_id[4];
    char supp_id[5];

    substring(product_code, part_number, 0, 3);
    substring(product_code, manu_id, 4, 3);
    substring(product_code, supp_id, 14, 4);

    printf("Part: %s\n", part_number);
    printf("Manu: %s\n", manu_id);
    printf("Supp: %s\n", supp_id);

    return 0;
}

void substring(char *orig, char *substr, int index, int length)
{
    if (index >= strlen(orig))
    {
        substr[0] = '\0';
        return ;
    }

    int i = 0;
    while (i < length && orig[index + i] != '\0')
    {
        substr[i] = orig[index + i];

        i++;
    }
    substr[length] = '\0';
}