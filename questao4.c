#include <string.h>
#include <stdlib.h>
#include <string.h>

void parametro(char string1[]){
    int tam = strlen(string1);
    for(int i =0; i < tam;i++){
        if(string1[i]=='\0'){
            string1[i] = '\n';
        }
    }

}
int main(){
    int string;
    int armazenado;
    int result;

    result = string * armazenado;

    printf("O armazenamento:%d",result);

}
