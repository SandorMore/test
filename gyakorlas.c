#include <stdio.h>


struct  User
{
    char name[64];
    int age;
    char occupation[64];

};

void main(int argc, char *argv[]){
    struct User user;

    printf("What is your name?\n");
    scanf("%c", &user.name);
    printf("What is your age?\n");
    scanf("%d", &user.age);
    printf("What is your occupation?\n");
    scanf("%c", &user.occupation);
    
}