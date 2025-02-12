#include <stdio.h>

struct User {
    char name[64];
    int age;
    char occupation[64];
};

int main(int argc, char *argv[]) {
    struct User user;

    return 0;
}
void AskForName(struct User user){
    printf("What is your name?\n");
    scanf("%63s", user.name);
    printf("What is your age?\n");
    scanf("%d", &user.age);
    printf("What is your occupation?\n");
    scanf("%63s", user.occupation);

    printf("Name: %s\n", user.name);
    printf("Age: %d\n", user.age);
    printf("Occupation: %s\n", user.occupation);
}