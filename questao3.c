#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tam_string(char string1[],char string2[]){
    int tam1 = strlen(string1);
    int tam2 = strten(string2);
    for(int i =0; i < tam1;i++){
        if(string1[i]=='\0'){
            string1[i] = '\n';
        }
    }

}
int main(){
    char string1[10];
    char string2[10];
    int media1,media2;
    int result;

    printf("Media da string1:\n");
    scanf("%d",&media1);
    printf("Media da string2:\n");
    scanf("%d",&media2);

    result = media1 + media2;
    printf("A media sera:%d",result);

}
