#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
   
   	//Variáveis que podem ser usadas
   	unsigned int x[200]; //vetor que guardará os números
   	int y; //variável de leitura
   	int z;
   	int k;
   	int w;
   	int j;//
   	int i;
   	//#########################

    // Zerando os valores do vetor
    for (z = 0; z <= 199; z++) {
        x[z] = 0;
    }    

    // Lendo os números e marcando no vetor bit a bit
    while (1) {
        printf("Digite um número: ");
        scanf("%d", &y);

        if (y == -1) break;  //encerramento da leitura de números
        if (y < 0 || y > 5000) { //verificação do número que o usuário digitou
            printf("Número inválido!\n");
            continue;
        }

        x[y / 32] |= (1 << (y % 32));
    }

    // Mostrando os números marcados bit a bit no vetor
    printf("Números digitados: ");

    for (j = 0; j <= 5000; j++) {
        if (x[j / 32] & (1 << (j % 32))) {
            printf("%d ", j);
        }
    }

    printf("\n");
   	
   	//#########################
   
	return 0;  
}
