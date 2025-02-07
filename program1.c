#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(){

    printf("Hello World\n");
    countSum();
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

void findValueOfAll(){
    float item1 = 55.3;
    float item2 = 12.3234443;

    printf("Item 1's price is : $%.1f", item1);
}
void countSum(){
    int input;
    int sum = 0;  
    do
    {
         
        printf("\nWhat is your number: ");
        scanf("%d", &input);
        sum += input;
        
    } while (input > 0);
    printf("\n Sum is: %d", sum);
}