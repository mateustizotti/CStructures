#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int size, add;
	int *array = NULL, *newArray=NULL;

	printf("Tamanho do vetor de int:\n");
	scanf("%d", &size);
	
	if (size <= 1) { 
		printf("Tamanho invalido. Vetor precisa ser maior do que 1.\n");
		return 0;
	}

	array = malloc (size*(sizeof(int))); 

	if (array == NULL)
	{ 
		printf("Erro malloc.\n");
		return 0;
	}
	
	printf("malloc OK. End. vet = %p\n\n", array);

	printf("Digite %d inteiros:\n", size);

	for(i=0; i<size; i++) {
		scanf("%d", &array[i]);
	}

	printf("vet:\n\n");
	for(i=0; i<size; i++) {
		printf("%d ", array[i]);
	}

	printf("\n\nDeseja armazenar quantos numeros a mais? Se quiser sair digite 0.\n");
	scanf("%d", &add);
	
	if(add <= 0) {
		printf("Tamanho invalido ou usuario solicitou sair.\n");
		return 0;
	}

	newArray = realloc(array, (size + add)*sizeof(int));

	if (newArray == NULL) { 
		printf("Erro realloc.\n");
		return 0;
	}
	
	printf("realloc OK. End. novovet = %p\n\n", newArray);

	printf("Digite %d inteiros:\n", add); 
	for(i=size; i<(size+add); i++) {
		scanf("%d", &newArray[i]);
	}

	printf("novovet:\n\n");
	for(i=0; i<(size+add); i++) { 
		printf("%d ", newArray[i]);
	}
	
	printf("\n");
}
