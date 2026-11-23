#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], copy[100];
    int choice, result;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    do
    {
        printf("\n\n--- STRING OPERATIONS ---\n");
        printf("1. Length of string\n");
        printf("2. Copy string\n");
        printf("3. Concatenate strings\n");
        printf("4. Compare strings\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length of first string = %lu", strlen(str1));
                break;

            case 2:
                strcpy(copy, str1);
                printf("Copied string = %s", copy);
                break;

            case 3:
                strcpy(copy, str1);
                strcat(copy, str2);
                printf("Concatenated string = %s", copy);
                break;

            case 4:
                result = strcmp(str1, str2);

                if(result == 0)
                    printf("Strings are equal");
                else if(result < 0)
                    printf("First string is smaller");
                else
                    printf("First string is greater");
                break;

            case 5:
                printf("Exiting program...");
                break;

            default:
                printf("Invalid choice!");
        }

    } while(choice != 5);

    return 0;
}
