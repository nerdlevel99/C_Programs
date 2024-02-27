#include <stdio.h>
#include <string.h>

void change_word(char str[], char old[], char new[])
{
    int size = strlen(str);
    int i, j, k;
    int size_of_old = strlen(old);

    for (i = 0; i < size; i++)
    {
        if (str[i] == old[0])
        {
            k = i;
            for (j = 0; old[j] != 0; j++)
            {
                if (str[k] == old[j])
                {
                    k++;
                }
                else
                {
                    break;
                }
            }
            if (j == size_of_old)
            {
                for (j = 0; new[j] != 0; j++)
                {
                    str[i+j] = new[j]; 
                }
                i += j - 1;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    char str[40];
    char old[20];
    char new[20];

    printf("Enter the string: ");
    scanf("%[^\n]s", str);

    printf("Enter the word you want to change in: ");
    scanf("%s", old);

    printf("Enter the word you want to change it with: ");
    scanf("%s", new);

    change_word(str, old, new);

    printf("New string: %s", str);

    return 0;
}
