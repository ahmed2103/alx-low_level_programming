#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
    char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int num_chars = sizeof(valid_chars) - 1; // Number of valid characters
    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
    
    // Seed the random number generator with the current time
    srand(time(NULL));
    
    // Generate random characters and form the password
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int random_index = rand() % num_chars;
        password[i] = valid_chars[random_index];
    }
    
    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the password
    
    printf("%s\n", password);
    
    return 0;
}

