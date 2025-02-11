#include <stdio.h>

int main(){
    printf("%d", getFactorialOfN(5));
    return 0;
}
int getFactorialOfN(int n){
    if ( n <= 1 ){
        return 1;
    }
    return n * (getFactorialOfN(n - 1));
    
}