#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define linha 9999

struct dados_produto
{
    char nome;
    float preco;
    int estoque;
};

void atualizarEstoque(struct dados_produto produto, int estoXiaomi, char *produtoNome)
{
    if (strcmp(produtoNome, ))
    {
    }
}

int main()
{
    int opcao, i;
    char produtoNome;

    struct dados_produto produto[linha];

    do
    {
        printf("Registre o seu produto.\n");
        printf("\n");

    } while ();


    printf("Lojinha da Xuxa\n");
    printf("1 - Realizar uma compra\n");
    printf("2 - Consultar estoque\n");
    printf("3 - Sair do programa.\n");
    printf("Resposta: ");
    scanf("%i", &opcao);

    system("cls||clear");

    fflush(stdin);

    switch (opcao)
    {
    case 1:
        printf("Insira dados do produto");
        printf("\n");

        printf("Nome do produto: \n");
        gets(produtoNome);

        if (strcmp(produto[i].nome, produtoNome) == 0)
        {
            printf("Valor do produto: %.1f \n", produto[i].preco);
            break;
        }
        printf("\nProduto não encontrado.\n");

        atualizarEstoque();

        break;

    case 2:
        printf("Produtos.\n");
        printf("Celular Xiaomi.");
        // printf("Preço: %.2f\n",xiaomiPrec);
        printf("Quantidade: ");

        printf("Celular Samsung.");
        // printf("Preço: %.2f\n",samsungPrec);
        printf("Quantidade: ");

        printf("Celular Motorola.");
        // printf("Preço: %.2f\n",motorolaPrec);
        printf("Quantidade: ");

        break;

    default:
        break;
    }

    return 0;
}
