#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale (LC_ALL, "Portuguese");

    double valor_venda;
    double valor_comissao;

    printf("Difite o valor da venda:\n");
    scanf ("%lf", &valor_venda);

    printf("O valor da venda foi: %.2lf \n", valor_venda);

    if (valor_venda <= 2500) {
       valor_comissao = 30+0.017*valor_venda;
        if (valor_comissao < 39.00)
                valor_comissao = 39.00;
    } else if (valor_venda >= 2500.01 && valor_venda <= 6250.00)
    {
        valor_comissao = 56+0.0066*valor_venda;

    } else if (valor_venda >= 6250.01 && valor_venda <= 20000.00) {
        valor_comissao = 76+0.0034*valor_venda;
    } else if (valor_venda >= 20000.01 && valor_venda <= 50000.00) {
        valor_comissao = 100+0.0022*valor_venda;
    } else if (valor_venda >= 50000.01 && valor_venda <= 500000.00) {
        valor_comissao = 155+00011*valor_venda;
    } else {
        valor_comissao = 255+0.0009*valor_venda;
    }

    printf("O valor da comissão é: %.2lf", valor_comissao);

    return 0;
}
