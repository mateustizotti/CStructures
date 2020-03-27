#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vet[10] = {20,40,85,91,0,3,1,8,4,2}; //Inicialização do vetor
	int pesquisado; // Numero que o usuario vai querer pesquisar no vetor
	int i;
	int encontrado = 0; //sinaliza que o valor foi encontrado

	printf("\nEsse programa pesquisa um valor inteiro em um vetor.\nDigite o valor a ser pesquisado: ");
	scanf("%d", &pesquisado);

	for(i=0; i<=9; i++)
	{
		if(vet[i] == pesquisado)
		{
			printf("\nEncontrado o valor %d na posicao %d do vetor.\n", pesquisado, i);
			encontrado = 1;
			break; //Encerra o laço for
		}
	}
	if(encontrado == 0) {
	    printf("\nO valor %d nao existe no vetor.\n", pesquisado);
    }
    
    system("pause");
}