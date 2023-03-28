#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include main.h
int main()
{
    int length, i;
    printf("Enter the length of the password: ");
    scanf("%d", &length);
    char password[length];
    char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    char numbers[] = "0123456789";
    char symbols[] = "!@#$%^&*()_+-={}[];\':\",./<>?\\|";
    char all[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-={}[];\':\",./<>?\\|";

    srand(time(NULL));
    printf("Generated Password: ");
    for(i=0; i<length; i++)
    {
        if(i==0)
            password[i] = uppercase[rand() % 26];
        else if(i==1)
            password[i] = lowercase[rand() % 26];
        else if(i==2)
            password[i] = symbols[rand() % 28];
        else
            password[i] = all[rand() % 72];
        printf("%c", password[i]);
    }
    printf("\n");
    return 0;
}
