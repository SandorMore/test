#include <stdio.h>

int main(){

    char address[9999];
    short a[] = {'a','b','c', 'e'};
    long long b = 401010101002;
    short c = 'C';

    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(b));
    printf("%d\n", sizeof(c));
    printf("%d\n", sizeof(address));
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &address);

    printf("\n");
    r();
    PrintAge(12);
    return 0;
}
void r(){
    int age = 17;
    int *pAge = &age;

    printf("%d\n", sizeof(pAge));
    printf("%p\n", &age);

    printf("The value at the address is : %d\n", *pAge);
}
void PrintAge(int *pAge){
    printf("You are %d years old \n", *pAge);
}