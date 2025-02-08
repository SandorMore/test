#include <stdio.h>

int main(){

    writeFile();
    return 0;
}
void writeFile(){
    FILE *pF = fopen("test.txt", "r");
    char buffer[255];
    if(pF == NULL){
        printf("Unable to locate file");
    }
    else{
        while(fgets(buffer, 255, pF) != NULL)
        {
            
            printf("%s", buffer);
        }
        fclose(pF);
    }

}