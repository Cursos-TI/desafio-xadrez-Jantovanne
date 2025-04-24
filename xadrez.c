#include <stdio.h>
 
int main() {
//Declarando as variáveis.
int opcao, casa, numero;



    //Iniciando o jogo de xadrez.
   printf("Bem vindo ao jogo de xadrez!\n");
do {printf("Por favor, selecione a peça que deseja movimentar:\n");
printf("1 - Torre;\n");
printf("2 - Bispo;\n");   
printf("3 - Rainha.\n");
scanf("%d", &opcao);
if (opcao < 1 || opcao > 3)
{
printf("Opção inválida...\n");
}

} while ((opcao < 1) || (opcao > 3) );

switch (opcao)
{
case 1: do
{

printf("Digite o número de casas que deseja pular sendo no máximo 8 casas:\n");
scanf("%d", &numero);
if ((numero < 1) || (numero > 8))
{
    printf("Opção inválida...\n");
}

} while ((numero < 1) || (numero > 8));

for ( casa = 1; casa <= numero; casa++)
{
    printf("Direita\n");
}
printf("Torre pulou %d casas para a direita!!\n", numero);
    
    break;
    case 2:
    do
{

printf("Digite o número de casas que deseja pular sendo no máximo 8 casas:\n");
scanf("%d", &numero);
if ((numero < 1) || (numero > 8))
{
    printf("Opção inválida...\n");
}

} while ((numero < 1) || (numero > 8));

for ( casa = 1; casa <= numero; casa++)
{
    printf("Cima, direita\n");
}
printf("Bispo pulou %d casas para cima, direita!!\n", numero);
    
    break;
    case 3:
    do
    {
    
    printf("Digite o número de casas que deseja pular sendo no máximo 8 casas:\n");
    scanf("%d", &numero);
    if ((numero < 1) || (numero > 8))
    {
        printf("Opção inválida...\n");
    }
    
    } while ((numero < 1) || (numero > 8));
    
    for ( casa = 1; casa <= numero; casa++)
    {
        printf("Esquerda\n");
    }
    printf("Rainha pulou %d casas para a esquerda!!\n", numero);
    
    break;
default:
    break;
}




    return 0;
}