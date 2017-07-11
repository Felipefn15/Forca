#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main(void)
{
    setlocale(LC_ALL,"");
    srand((int) time(NULL));
    FILE *arq;
    arq = fopen("escola.txt", "r");
    int j, linha, d;
    linha = 1+(rand()%5);
    char letra,dica;
    char nome[20];
    char palavra[20];
    int total = 0, i;
    char resposta[]="                      ";
    int decisao, fim = 7, erro = 0, acerto = 0, num=0;

    printf("                     ##############################\n");
    printf("                     # BEM VINDO AO JOGO DA FORCA #\n");
    printf("                     ##############################");

    printf("\nPara jogar digite 1.\nPara sair digite 2.\n");
    scanf("%i", &decisao);

    while(decisao == 1){

    if (decisao == 1){
    system("cls");

    printf("                     ###############################\n");
    printf("                     #        JOGO DA FORCA        #\n");
    printf("                     ###############################");

    printf("\nDigite seu nome:");
    scanf("%s", &nome);

    for (d=0; d<linha; d++)
    {
        fscanf(arq," %s", palavra);
    }

    total = strlen(palavra);

    printf("\nDeseja receber uma dica? Digite S para sim e N para não:");
    scanf("%s", &dica);

    if (dica == 's')
    {
        switch(linha)
       {

        case 1:
            printf("\nDICA: fruta, %i letras.", total);
            break;
        case 2:
            printf("\nDICA: país, %i letras.", total);
            break;
        case 3:
            printf("\nDICA: esporte, %i letras.", total);
            break;
        case 4:
            printf("\nDICA: cor, %i letras.", total);
            break;
        case 5:
            printf("\nDICA: ferramenta, %i letras.", total);
            break;
       }
    }
int valor=0;
    for(i=0; i<15; i++)
    {
        printf("\n\nDigite uma letra: ");
        scanf(" %c",&letra);
        valor=strchr(palavra,letra);
    for (i = 0; palavra[i] !='\0'; i++)
        if (palavra[i] == letra)
        {
            resposta[i] = palavra[i];
            acerto++;

        }
        if(valor==0){
            erro++;
            printf("Erro:%d",erro);}
        puts(resposta);


    if(acerto == total)
        break;
    if(erro == 7)
        break;

    }
        system("cls");
 if(acerto == total)
    {
    printf("Parabéns %s, você ganhou!!!\n\n",nome);
    }
    else if(erro == fim)
    {

    printf("Você morreu!!!\n");
    }
}
    printf("                     ##############################\n");
    printf("                     # BEM VINDO AO JOGO DA FORCA #\n");
    printf("                     ##############################");

    printf("\nPara jogar digite 1.\nPara sair digite 2.\n");
    scanf("%i", &decisao);
    }
}

