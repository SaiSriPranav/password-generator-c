#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    int length;
    char password[100];
    char all[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";

    printf("Enter password length (minimum 8): ");
    scanf("%d", &length);

    if (length < 8) {
        printf("Password should be at least 8 characters long.\n");
        return 1;
    }

    srand(time(0)); // Seed random number generator

    for (int i = 0; i < length; i++) {
        int index = rand() % strlen(all);
        password[i] = all[index];
    }

    password[length] = '\0'; // End the string

    printf("Generated Password: %s\n", password);

    return 0;
}
