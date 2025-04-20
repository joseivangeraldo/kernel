#include <stdio.h> 
#include <string.h> 
 
int main(int argc, char **argv) { 
    const char *correct_password = "mypassword"; // Set your desired password here 
    char input_password[10]; // Buffer to hold user input 
 

        // Check if the entered password matches the correct password 
        if (strcmp(argv[1], correct_password) == 0) { 
            printf("Access granted!\n"); 
          
        } else { 
            printf("Access denied. Try again.\n"); 
        } 
    
 
    return 0; 
} 