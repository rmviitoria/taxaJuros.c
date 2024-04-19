/******************************************************************************

Exercício 6. Crie um programa que aplica uma taxa de juros em um determinado preço digitado pelo teclado. 
A taxa aplicada deve ser:
Aumento de 10% caso o valor seja menor do que 100
Aumento de 20% caso o valor esteja entre 100 (inclusive) e 300
Aumento de 50% caso o valor esteja entre 300 (inclusive) e 1000
Imprima uma mensagem de erro se o valor for negativo
Ao final, seu programa deve imprimir o novo valor, já com a taxa aplicada.


*******************************************************************************/
#include <stdio.h>
int main() {
    float preco, novo_preco;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    if (preco < 0) {
        printf("Erro: o preço não pode ser negativo.\n");
        return 1;
    }


    if (preco < 100) {
        novo_preco = preco * 1.1; // 10%
    } else if (preco >= 100 && preco < 300) {
        novo_preco = preco * 1.2; // 20%
    } else if (preco >= 300 && preco < 1000) {
        novo_preco = preco * 1.5; // 50%
    } else {
        novo_preco = preco; 
    
    
    printf("O novo preço do produto é: %.2f\n", novo_preco);
    return 0;
}
