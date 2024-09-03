#include <stdio.h>

int main(){

    int numero, a = 0, b = 1, proximo;
    proximo = a + b;

    printf ("digite o seu numero: \n");
    scanf ("%d", &numero);

    if (numero == 0 || numero == 1){
        printf ("%d pertence a sequencia de fibonacci", numero);
    } 
    else{
    
        while (proximo <= numero){
            if (proximo == numero){
                printf ("%d pertence a sequencia de fibonacci", numero);
                return 0;
            }
            a = b;
            b = proximo;
            proximo = a + b;
    }
    
    printf ("%d nao pertence a sequencia de fibonacci", numero);
    }
    return 0;
}