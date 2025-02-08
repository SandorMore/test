#include <stdio.h>

int main(){

    FILE *pF = fopen("test.txt", "a");
    fprintf(pF, "shoot him ahh\n");
    fclose(pF);
    if(remove("test.txt") == 0){
        printf("file removed sucessfully");
    }
    else{
        printf("No good");
    }


    return 0;
}