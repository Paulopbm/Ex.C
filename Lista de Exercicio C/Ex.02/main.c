
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

     void main() {

      int primeiro_valor;
      int segundo_valor;
      int i, passo;

   printf("Por favor informe o primeiro valor ");
      scanf("%i",&primeiro_valor);
   printf("Por favor informe o segundo valor");
      scanf("%i",&segundo_valor);
      if (primeiro_valor == segundo_valor){
   printf("valores iguais\n");
}else {
      if (primeiro_valor < segundo_valor) {
   printf("O primeiro valor � menor que o segundo \n");
      for(i=primeiro_valor;i<=segundo_valor;i++){
   printf("%i \n",i);
    };
    
  } else {
    printf("O segundo valor � menor que o primeiro\n");
    for(i=primeiro_valor;i>=segundo_valor;i--){
      printf("%i \n",i);
    }
  }
 }
}
