#include <stdio.h>
#include <stdlib.h>
#define TAM 20
struct livro
{
 int codigo;
 char titulo[50];
 char autor[30];
 char area[30];
 int ano;
 char editora[30];
};
int main()
{
 struct livro ficha[TAM];
 struct livro troca;
 int busca, i, j, acha, op;

 op = 0;
 while (op !=5)
 {
 printf(�1 - Cadastrar os livros\n�);
 printf(�2 - Imprimir os livros
 cadastrados\n�);
 printf(�3 - Pesquisar livros por c�digo\n�);
 printf(�4 - Ordenar os livros por ano\n�);
 printf(�5 - Sair\n�);
 printf(�Digite a op��o desejada: �);
 scanf(�%d�, &op);
 fflush(stdin);
 if (op == 1)
 {
 system(�cls�);
 for (i=0; i<TAM; i++)
 {
 printf(�Digite o c�digo do livro da
 posi��o %d:�, i+1 );
 scanf(�%d�, &ficha[i].codigo);
 fflush(stdin);
 printf(�Digite o t�tulo do livro: �);
 scanf(�%50[^\n]s�, &ficha[i].titulo);
 fflush(stdin);
 printf(�Digite o nome do autor: �);
 scanf(�%30[^\n]s�, &ficha[i].autor);
 fflush(stdin);
 printf(�Digite a �rea do livro: �);
 scanf(�%30[^\n]s�, &ficha[i].area);
 fflush(stdin);
 printf(�Digite o ano: �);
 scanf(�%d�, &ficha[i].ano);
 fflush(stdin);
 printf(�Digite o nome da editora: �);
 scanf(�%30[^\n]s�, &ficha[i].editora);
 fflush(stdin);
 }
 }
 else
 {
 if (op == 2)
 {
 system(�cls�);
 for (i=0; i<TAM; i++)
 {
 printf(�\nC�DIGO: %d\n�,
 ficha[i].codigo );
 printf(�T�TULO: %s\n�,
 ficha[i].titulo);
 printf(�AUTOR: %s\n�,
 ficha[i].autor);
 printf(��REA: %s\n�, ficha[i].area);
 printf(�ANO: %d\n�, ficha[i].ano);
 printf(�EDITORA: %s\n\n�,
 ficha[i].editora);
 }
 else
 {
 if (op == 3)
 {
 system(�cls�);
 printf(�Digite o c�digo que deseja
 buscar: �);
 scanf (�%d�, &busca);
 i = 0;
 acha = 0;
 while ((i < TAM) && (acha == 0))
 {
 if (ficha[i].codigo == busca)
 acha = 1;
 elseUNICESUMA
  i++;
 }
 if (acha == 1)
 {
 printf(�\nC�DIGO: %d\n�,
 ficha[i].codigo );
 printf(�T�TULO: %s\n�,
 ficha[i].titulo);
 printf(�AUTOR: %s\n�,
 ficha[i].autor);
 printf(��REA: %s\n�,
 ficha[i].area);
 printf(�ANO: %d\n�, ficha[i].ano);
 printf(�EDITORA: %s\n\n�,
 ficha[i].editora);
 }
 else
 printf(�\n Registro n�o
 encontrado�);
 }
 else
 {
 if (op ==4)
 {
 system(�cls�);
 for (i=0;i<TAM-1;i++)
 {
 for (j=i+1;j<TAM;j++)
 {
 if (ficha[i].ano >
 ficha[j].ano)
 {
 troca = ficha[i];
 ficha[i] = ficha[j];
 ficha[j] = troca;
 }
 }
 }
 for (i=0;i<TAM;i++)
 {
 printf(�\n C�DIGO: %d, T�TULO:
 %s, ANO: %d\n\n�,
 ficha[i].codigo,
 ficha[i].titulo, ficha[i].ano);
