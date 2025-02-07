#include <stdio.h>

int main(){

    printf("Hello World\n");
    findValueOfAll();
    return 0;
}
int datatypes(){
    int age = 17;
    float o = 4.213;
    char grande = 'C';
    unsigned char nig = 250;
    char name[] = "Sanyi";
    long long l = 9999999999999999999;
    printf("Im %s\n", name);
    printf("Im also %d", age);
    printf(" old");
    printf(" %c \n", nig);
    printf("\n");
    printf("Ez egy geci nagy szam  : %lld", l);
}

int findValueOfAll(){
    float item1 = 55.3;
    float item2 = 12.3234443;

    printf("Item 1's price is : %f.1\n", item1);
}