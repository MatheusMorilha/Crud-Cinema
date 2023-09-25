#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "Cadastro.h"
#include "Consulta.h"
#include "Comprar.h"
#include "Excluir.h"
#include "struct.h"




int main() {
    struct dadosFilmes *filmes = NULL;
    struct dadosClientes *clientes = NULL;
    int numFilmes = 0;
    int numClientes = 0;
    int opcao;
    system("cls");
    do {
        
        printf("\n===============Menu=============\n");
        printf(" |1. Cadastrar Filme              |\n");
        printf(" |2. Cadastrar Cliente            |\n");
        printf(" |3. Listar Filmes                |\n");
        printf(" |4. Listar Clientes              |\n");
        printf(" |5. Vender ingresso              |\n");
        printf(" |6. Excluir Filme                |\n");
        printf(" |7. Excluir Cliente              |\n");
        printf(" |0. Sair                         |\n");
        printf("  ========Escolha uma opcao=======\n ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarFilme(&filmes, &numFilmes);
                system("cls");
                break;
            case 2:
                cadastrarCliente(&clientes, &numClientes);
                system("cls");
                break;
            case 3:
                system("cls");
                listar_filme(filmes, numFilmes);
                break;
            case 4:
                system("cls");
                listar_cliente(clientes, numClientes);
                break;
            case 5:
                system("cls");
                comprar(clientes, numClientes,filmes, numFilmes);
                break;
            case 6:
                system("cls");
                excluirFilme(&filmes, &numFilmes);
                break;
            case 7:
                system("cls");
                excluirCliente(&filmes, &numClientes);
                break;    
            case 0:
                system("cls");
                printf("Saindo do programa.\n");
                break;
            default:
            system("cls");
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);


    free(filmes);
    free(clientes);

    return 0;
}
