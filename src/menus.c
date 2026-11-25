#include "../include/menus.h"
#include <stdio.h>

int menu_principal()
{

    int opcao;    

    printf("peixonautaSystem Versao 00.113b0\n");
    printf("--------------------------------\n");
    printf("1.Estoque\n");
    printf("2.clientes\n");
    printf("3.Vendas\n");
    printf("0.sair do programa\n");
    printf("--------------------------------\n");
    printf("::::");
    scanf("%i", &opcao);

    return opcao;

}
int menu_estoque()
{   
    int opcao;

    printf("menu >>> ESTOQUE\n");
    printf("--------------------------------\n");
    printf("1.Incluir iten\n");
    printf("2.Excluir iten\n");
    printf("3.Consultar iten por especie\n");
    printf("4.Listar itens em estoque\n");
    printf("5.listar itens com estoque abaixo de tal valor\n");
    printf("0.retornar ao menu principal\n");
    printf("--------------------------------\n");
    printf("::::");
    scanf("%i", &opcao);

    return opcao;

}
int menu_clientes()
{
    int opcao;

    printf("menu >>> CLIENTES\n");
    printf("--------------------------------\n");
    printf("1.Incluir novo cliente\n");
    printf("2.Excluir cliente\n");
    printf("3.listar clientes cadastrados\n");
    printf("4.consultar cliente por nome\n");
    printf("5.listar clientes ativos\n");
    printf("0.retornar ao menu principal\n");
    printf("--------------------------------\n");
    printf("::::");
    scanf("%i", &opcao);

    return opcao;


}
int menu_vendas()
{
    int opcao;

    printf("menu >>> VENDAS\n");
    printf("--------------------------------\n");
    printf("1.Incluir nova venda\n");
    printf("2.listar vendas por cliente\n");
    printf("3.listar todas as vendas\n");
    printf("4.listar vendas por especie\n");
    printf("0.retornar ao menu principal\n");
    printf("--------------------------------\n");
    printf("::::");
    scanf("%i", &opcao);

    return opcao;


}