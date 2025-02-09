#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int fiboNum(int n);

int main(){
    printf("%d", fiboNum(50));
    return 0;
}
int fiboNum(int n){
    int arr[99999];
    int result;
    for(int i = 0; i < sizeof(arr)/ sizeof(arr[0]); i++){
        if (n == arr[i]){
            return arr[i];
        }
    }
    if (n <= 2){
        result = 1;
    }
    else{
        result = fiboNum(n - 1) + fiboNum(n - 2);
    }
    arr[n = result];
    return result;
}