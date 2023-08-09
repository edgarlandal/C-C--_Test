#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct main
{
    char* username;
    char* password;
    int day; 
    int month;
    int year;
} login_t;


int main(int argc, char const *argv[])
{
    login_t login;

    login.username = malloc(sizeof(argv[1]));
    strcpy(login.username, argv[1]);

    printf("User: %s, Size: %d", login.username, strlen(login.username));

    return 0;
}
