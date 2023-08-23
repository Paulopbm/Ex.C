#include <stdio.h>


int main()

{

   float a,b,c,m;
    printf("============================================\n");
    printf("Digite 3 valores \n");
    printf("============================================\n");
       scanf("%2f",&a);
       scanf("%2f",&b);
       scanf("%2f",&c);
       m = (a+b+c)/3;

    printf("O valor da media eh :%0.2f", m);


   return 0;

}
