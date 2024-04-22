#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    char sexo;
    float altura, peso;
    int cont = 0;
    do
    {
        if(cont == 0){
          cont++;
        }
        else{
          printf("\n");
        }
        printf("Digite seu sexo: ");
        scanf("%c", &sexo);
        getchar();
        while(sexo != 'M' && sexo != 'm' && sexo != 'f' && sexo != 'F')
        {
            printf("Sexo inválido, digite novamente: ");
            scanf("%c", &sexo);
            getchar();
        }
        printf("Digite sua altura: ");
        scanf("%f", &altura);
        getchar();
        if(sexo == 'm' || sexo == 'M')
        {
            peso = (72.7 * altura) - 58;
        }
        else
        {
            peso = (62.1 * altura) - 44.7;
        }
        printf("\nO seu peso ideal é: %.1f kilos\n", peso);
        printf("\nDeseja continuar no programa?");
        printf("\nSe sim, digite 's' do contário digite outra letra: ");
        scanf("%c", &sexo);
        getchar();
    }
    while(sexo != 's' && sexo != 'S');
  printf("\n\n");
  printf("Finalizando programa");
  getchar();
}
