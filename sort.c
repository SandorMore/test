#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    GenRandom(12000);
}
void GenRandom(int mennyiAMax){
    srand(time(0));
    int number1 = (rand() % mennyiAMax) + 1;

    printf("%d", number1);
}
void Sort(){
    int arr[] = {3,4,7,1,6,12,8,33} ;

    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        for(int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
        {
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j +  1];
                arr[j + 1] = temp;
                
            }
        }
    }
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d\n", arr[i]);
    }
}