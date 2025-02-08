#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool IsEven(int num);

int main(){

    GoThroughAList();
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
bool IsEven(int num)
{
    if (num % 2 != 0){
        
        printf("Its odd");
    }
    else{
        printf("Its even");
    }
    
}
void Func(){
    char input;
    printf("\nWhat to print?");

    scanf("%c", &input);

    switch (input)
    {
    case 'X':
        printf("XXXXX\n");
        break;
    case 'C':
        printf("CCCCC\n");
        break;
    default:
        printf("\nYou did not print anything or no valid input was given!");
        break;
    }
}
void GoThroughAList(){
    float prices[] = {10.5, 10.55, 30.5};
    
    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    {
        printf("$%.2f\n", prices[i]);
    }
}