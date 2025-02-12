#include <stdio.h>

struct User {
    char name[64];
    int age;
    char occupation[64];
};

int main(int argc, char *argv[]) {
    struct User user;

    printf("What is your name?\n");
    scanf("%63s", user.name); // Use %s to read a string and limit input to avoid buffer overflow
    printf("What is your age?\n");
    scanf("%d", &user.age);
    printf("What is your occupation?\n");
    scanf("%63s", user.occupation); // Use %s to read a string and limit input to avoid buffer overflow

    printf("Name: %s\n", user.name);
    printf("Age: %d\n", user.age);
    printf("Occupation: %s\n", user.occupation);

    return 0;
}