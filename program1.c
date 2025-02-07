#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(){
    double nums[] = {1.0,2.2,3.22,4.42,5.76};

    for (int i = 0; i < 5; i++)
    {
        printf("%.2lf\n", nums[i]);
    }
    return 0;
}
int datatypes(){
    int age = 17;
    float o = 4.213;
    char grande = 'C';
    unsigned char nig = 250;
    char name[] = "Sanyi";
    long long l = 9999999999999999;
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
        if(input > 0){
            sum += input;
        
        }
       
    } while (input > 0);
    printf("\n Sum is: %d", sum);
}