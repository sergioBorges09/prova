#include <stdio.h>
#include <stdlib.h>

float calcula(float num1,float num2){
    if(num1 < num2){
        return num1 + num2;
    }
    else{
        if(num1 == num2){
            return num1 * num2;
        }
    }if(num1 > num2){
            return num1 - num2;
        }
    }    

int main(){
    float num1,num2;
    float resultado;
    printf("Digite um numero:\n");
    scanf("%f",&num1);
    printf("Digite outro numero:\n");
    scanf("%f",&num2);

    resultado = calcula(num1,num2);
    printf("O resultado:%.2f",resultado);
    




    
}
