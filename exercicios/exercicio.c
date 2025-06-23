#include <stdio.h>

int main(){

    int nFilhos, nInteiros, soma = 0;

    scanf("%d", &nFilhos);

    for (int i = 0; i < nFilhos; i++){
        scanf("%d", &nInteiros);
        soma = soma + nInteiros;
    }

    printf("%d", soma);

    return 0;
}
