#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char password[100];
    int i, length;
    int upper = 0, lower = 0;
    int digit = 0, special = 0, score = 0;

    printf("\n");
    printf("************************************\n");
    printf("       SMART PASSWORD CHECKER\n");
    printf("************************************\n");

    printf("\nEnter your password: ");
    scanf("%99s", password);

    length = strlen(password);

    for(i = 0; i < length; i++)
    {
        if(isupper(password[i]))
            upper = 1;

        else if(islower(password[i]))
            lower = 1;

        else if(isdigit(password[i]))
            digit = 1;

        else
            special = 1;
    }

    printf("\n========== SECURITY REPORT ==========\n");

    if(length >= 8)
    {
        printf("[OK] Password length is good\n");
        score++;
    }
    else
        printf("[X] Password should have 8 characters\n");

    if(upper)
    {
        printf("[OK] Uppercase letter found\n");
        score++;
    }
    else
        printf("[X] Add an uppercase letter\n");

    if(lower)
    {
        printf("[OK] Lowercase letter found\n");
        score++;
    }
    else
        printf("[X] Add a lowercase letter\n");

    if(digit)
    {
        printf("[OK] Number found\n");
        score++;
    }
    else
        printf("[X] Add a number\n");

    if(special)
    {
        printf("[OK] Special character found\n");
        score++;
    }
    else
        printf("[X] Add a special character\n");

    printf("\n-------------------------------------\n");
    printf("Security Score: %d/5\n", score);

    if(score == 5)
        printf("Password Level: STRONG\n");

    else if(score >= 3)
        printf("Password Level: MEDIUM\n");

    else
        printf("Password Level: WEAK\n");

    printf("-------------------------------------\n");
    printf("       THANK YOU FOR USING US!\n");
    printf("*************************************\n");

    return 0;
}
