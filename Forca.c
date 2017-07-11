#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include <time.h>

void main(void)
{
  setlocale(LC_ALL,"");
   srand((int)time(NULL));
   FILE *file;
    char letra,jo;
    char nome[20];
    char palavra[20];
    char dica [20];
    int total = 0, i,num,teste;
    char resposta[]="                      ";
   int  d, linhas, k ,t = 0;


while(jo!='s')

 {
          linhas = 1+(rand()%7);
     int s=9;
     s = s+linhas;
     file= fopen("palavras.txt","r");

    for(d = 0;d <linhas;d++)
    {
        fscanf(file," %s\n",palavra);

    }

    for(d = 7;d < 14 ;d++)
    {
        fscanf(file," %s\n",dica);
    }


 system("cls");
 puts("___________   \n|         |   \n|        _|_\n|         O   Jogo da Forca \n|        /|\\   \n|        / \\ \n| \n| \n| \n");
 printf("                     |---------------------------------|\n");
 printf("                     |Este boneco aqui em cima é o Jim |\n                     |     Você precisa salva-lo       |\n");
 printf("                     |---------------------------------|\n");
 printf("                      ################################\n");
 printf("                      #!!Bem vindo ao Jogo da Forca!!#\n");
 printf("                      ################################\n");
 printf("                      Digite seu nome jogador->");
 scanf(" %s",&nome);
 printf("\n");
 printf("                     |---------------------------------|\n");
 printf("                     |           Avisos:               |\n");
 printf("                     |1:Você só poderá errar 7 vezes   |\n");
 printf("                     |2:Você só poderá ver a dica 1 vez|\n");
 printf("                     |---------------------------------|\n");
 printf("\nVocê deseja Jogar Sr(a) %s?\n(Digite s para sim ou n para não)\n",nome);
 scanf(" %c",&jo);
   char r[]="             ";

int erro=0,acerto=0,ace=0,dic=0,valor=0;

if(jo== 's')
{
    system("cls");

  total=strlen(palavra);
printf("Número de letras:%d\n",total);

    for(i=0;i<strlen(palavra); i++) {if
                    (palavra[i]=='_'){printf(" ");}else{
                    printf("_ ");}}
printf("\n");

   for(i=0;i<16;i++)
    {   printf("///////////////////////////\n");
        printf("/Você deseja ver sua dica?/\n");
        printf("///////////////////////////\n");
         printf("|-------------------------------|\n");
        printf("|se sim digite 1 se nao digite 2|\n");
         printf("|-------------------------------|\n");
        scanf(" %d",&dic);

    if(dic==1){

       if(ace==0){
        printf("Sua dica é: %s\n",dica);
        ace++;
       }

       else
        printf("Você não pode mais ver a dica\n");
        continue;
    }

    else if(dic==2){
             system("cls");
             printf("Número de letras:%d\n",total);

    printf("Palavra:");
    printf("\n");
    printf("%s",r);
    printf("\n");
     for(i=0;i<strlen(palavra); i++) {if
                    (palavra[i]=='_'){printf(" ");}else{
                    printf("-");}}
                    printf("\n");
    printf("Digite uma letra: ");
    scanf(" %c",&letra);
valor=strchr(palavra,letra);
    for (i = 0; palavra[i] !='\0'; i++)
    {
        if (palavra[i] == letra)
        {

            if(r[i]==letra)
                {
                 printf("Essa letra ja foi digitada\n");
                 acerto+=0;
                }

                 else
                    {
                      r[i] = letra;
                      acerto++;
                }
        }
    }
    if(valor==0){
        erro++;
 printf("Erro=%d\nVocê errou\n",erro);}

 switch(erro){
 case 1:
printf("Agora Jim está assim:\n");
printf("\n");
     printf(" O\n");
 break;
 case 2:
printf("Agora Jim está assim:\n");
printf("\n");
    printf(" O\n |\n");
    break;
 case 3:
printf("Agora Jim está assim:\n");
printf("\n");
    printf(" O\n/| \n");
    break;
 case 4:
printf("Agora Jim está assim:\n");
printf("\n");
    printf(" O\n/|\\ \n");
    break;
 case 5:
      printf("Agora Jim está assim:\n");
      printf("\n");
    printf(" O\n/|\\\n | \n");
    break;
 case 6:
      printf("SE VOCÊ ERRAR,O Jim MORRE\n");
      printf("Agora Jonh está assim:\n");
      printf("\n");
        printf(" O\n/|\\\n |\n/ \n");
        break;
 case 7:
printf("Agora Jim está assim:\n");
        printf(" O\n/|\\\n |\n/\\ \n");
        break;
 }
 printf("\n");
 printf("A palavra que esta sendo formada é:");
     puts(r);

    if(acerto==total)

        break;

        if(erro==7)

            break;
    }
    }
    system("cls");

 if(acerto==total)
    {
        printf("Parabens %s\nVocê ganhou\nVocê salvou o Jim!!\nA resposta era:",nome);
        puts(palavra);
    }

    else if(erro=7)
    {
        puts("___________   \n|         |   \n|        _|_\n|         O   Jogo da Forca \n|        /|\\   \n|        / \\ \n| \n| \n| \n");
        printf("Esta morto Jim\nR.I.P Jim!!\nEle acreditava que você iria salva-lo\n",nome);
        printf("\nA resposta certa era:");
        puts(palavra);
    }
}

if(jo == 'n')
{
     system("cls");
        puts("___________   \n|         |   \n|        _|_\n|         O   Jogo da Forca \n|        /|\\   \n|        / \\ \n| \n| \n| \n");
        printf("\nObrigado por jogar %s.\nAté a proxima",nome);
        printf("\nDesenvolvido por Felipe França Nogueira\n");
        return;
}

  printf("\nVocê deseja sair?\n(Digite s para sim ou n para não)\n");
  scanf(" %c",&jo);
  erro=0;
 }

 system("cls");
 puts("___________   \n|         |   \n|        _|_\n|         O   Jogo de Forca \n|        /|\\   \n|        / \\ \n| \n| \n| \n");
        printf("\nObrigado por jogar %s.\nAté a proxima",nome);
        printf("\nDesenvolvido por Felipe França Nogueira\n");
}
