#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];

    char correctUsername[] = "narmathadevi24mcs@vetias.ac.in";
    char correctPassword[] = "1234narmathadevi";

    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);

    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Login failed.\n");
    }

    return 0;
}