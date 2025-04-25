#include <stdio.h>
//Adicionando recursividade na lógica de escolha do número de casas das peças(torre, bispo e rainha).
int QuantidadeDeCasas() {
    int n;
    do {
        printf("Digite o número de casas que deseja pular (1 a 8):\n");
        scanf("%d", &n);
        if ((n < 1) || (n > 8)) {
            printf("Opção inválida...\n");
        }
    } while ((n < 1) || (n > 8));
    return n;
}


int main() {
//Declarando as variáveis.

int opcao, casa, opcaoCavalo, casaHor, casaVer;
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
    //Declarando a váriavel que chama a recursividade para dentro do main
    int numero;
    //Movimentando a torre.
case 1:
 numero = QuantidadeDeCasas();
for ( casa = 1; casa <= numero; casa++)
{
    printf("Direita\n");
}
printf("Torre pulou %d casas para a direita!!\n", numero);
    
    break;
        //Movimentando o bispo.
    case 2:
    numero = QuantidadeDeCasas();
    for ( casaVer = 1; casaVer <= numero; casaVer++)
    {
for ( casaHor = 1; casaHor == 1; casaHor++)
{
    printf("Direita - ");
}  printf("Cima\n");
    }
printf("Bispo pulou %d casas para cima, direita!!\n", numero);
    
    break;
        //Movimentando a rainha.
    case 3:
     numero = QuantidadeDeCasas();
    for ( casa = 1; casa <= numero; casa++)
    {
        printf("Esquerda\n");
    }
    printf("Rainha pulou %d casas para a esquerda!!\n", numero);
    
    break;

    //Movimentando o cavalo.
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
    for (int i = 0; i < 2 && i >= 0; i++)
    {
        printf("Cima - ");
    }
    printf("Esquerda\n");
}

    break;
    case 2:
    while (cavalo--)
    {
        for (int i = 0; i < 2 && i >=0; i++)
        {
            printf("Cima - ");
        }
        printf("Direita\n");
    }
    break;
    case 3:
    while (cavalo--)
{
    for (int i = 0; i < 2 && i >=0; i++)
    {
        printf("Baixo - ");
    }
    printf("Esquerda\n");
}
    break;
    case 4:
    while (cavalo--)
{
    for (int i = 0; i < 2 && i >=0; i++)
    {
        printf("Baixo - ");
    }
    printf("Direita\n");
}
    break;
    case 5:
    while (cavalo--)
{
    for (int i = 0; i < 2 && i >=0; i++)
    {
        printf("Direita - ");
    }
    printf("Baixo\n");
}
    break;
    case 6:
    while (cavalo--)
{
    for (int i = 0; i < 2 && i >=0; i++)
    {
        printf("Direita - ");
    }
    printf("Cima\n");
}
    break;
    case 7:
    while (cavalo--)
{
    for (int i = 0; i < 2 && i >= 0; i++)
    {
        printf("Esquerda - ");
    }
    printf("Baixo\n");
}
    break;
    case 8:
    while (cavalo--)
{
    for (int i = 0; i < 2 && i >= 0; i++)
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
