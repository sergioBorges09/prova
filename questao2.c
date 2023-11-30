#include <stdio.h>
#include <stdlib.h>

int fatorial(int numero){
    int resultado = 1;
    for(int i = 1;i<=numero;i++){
        resultado *= i;
    }
    return resultado;
}
int main(){
    int numero;
    int result;

    printf("Digite um numero para saber fatorial dele:\n");
    scanf("%d", &numero);

    result = fatorial(numero);
    printf("\nO fatorial:%d\n",result);

}