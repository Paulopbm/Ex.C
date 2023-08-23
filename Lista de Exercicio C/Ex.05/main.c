#include <stdio.h>
#include <conio.h>
main()
{
     char nome[50];
     int i;
 printf("Digite o nome completo com inicais maiusculas: ");
     gets(nome);
 printf("Nome abreviado: ");
     for(i=0;i<50;i++)
  if ((nome[i]>='A')&&(nome[i]<='Z'))
 printf("%c.", nome[i]);
    getch();
}  



