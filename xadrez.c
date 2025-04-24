#include <stdio.h>
 
int main() {
//Declarando as variáveis.
int opcao, casa, numero, opcaoCavalo;
int cavalo = 1;


    //Iniciando o jogo de xadrez.
   printf("Bem vindo ao jogo de xadrez!\n");
do {printf("Por favor, selecione a peça que deseja movimentar:\n");
printf("1 - Torre;\n");
printf("2 - Bispo;\n");   
printf("3 - Rainha;\n");
printf("4 - Cavalo.\n");
scanf("%d", &opcao);



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
    case 4:
    do
    {
    
    
printf("Escolha a direção que deseja mover o cavalo:\n");
printf("1 - Cima/Esquerda\n");
printf("2 - Cima/Direita\n");
printf("3 - Baixo/Esquerda\n");
printf("4 - Baixo/Direita\n");
printf("5 - Direita/Baixo\n");
printf("6 - Direita/Cima\n");
printf("7 - Esquerda/Baixo\n");
printf("8 - Esquerda/Cima\n");
scanf("%d", &opcaoCavalo);

switch (opcaoCavalo)
{
case 1:
while (cavalo--)
{
    for (int i = 0; i < 2; i++)
    {
        printf("Cima - ");
    }
    printf("Esquerda\n");
}

    break;
    case 2:
    while (cavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cima - ");
        }
        printf("Direita\n");
    }
    break;
    case 3:
    while (cavalo--)
{
    for (int i = 0; i < 2; i++)
    {
        printf("Baixo - ");
    }
    printf("Esquerda\n");
}
    break;
    case 4:
    while (cavalo--)
{
    for (int i = 0; i < 2; i++)
    {
        printf("Baixo - ");
    }
    printf("Direita\n");
}
    break;
    case 5:
    while (cavalo--)
{
    for (int i = 0; i < 2; i++)
    {
        printf("Direita - ");
    }
    printf("Baixo\n");
}
    break;
    case 6:
    while (cavalo--)
{
    for (int i = 0; i < 2; i++)
    {
        printf("Direita - ");
    }
    printf("Cima\n");
}
    break;
    case 7:
    while (cavalo--)
{
    for (int i = 0; i < 2; i++)
    {
        printf("Esquerda - ");
    }
    printf("Baixo\n");
}
    break;
    case 8:
    while (cavalo--)
{
    for (int i = 0; i < 2; i++)
    {
        printf("Esquerda - ");
    }
    printf("Cima\n");
}
    break;
default:
printf("Opção inválida...\n");
    break;
}
} while ((opcaoCavalo < 1) || (opcaoCavalo > 8));



    break;
default:
printf("Opção inválida...\n");
    break;
}
} while ((opcao < 1) || (opcao > 4) );




    return 0;
}