#include <stdio.h>


struct  Person
{
    char name[64];
    int age;
};

void main(int argc, char *argv[]){
    struct Person people[100];
    struct Person *pPerson = &people;
    
    int i = 0;
    for(i = 0; i < 100; i++){
        pPerson -> age = 0;
        pPerson += 1;
    }
    return 0;
}