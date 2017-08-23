#include <stdio.h>
#include <stdlib.h>

int realoca(int *vet,int x);
void mostra(int *vet, int x);
void preenche(int *vet, int x);


int main() {
	int x;
	printf("digite tamanho do vetor\n");
	scanf("%d",&x);

	int *vet;

	vet =malloc(x);
	
	realoca(vet,x);

return 0;
}


int realoca(int *vet,int x){

				
			preenche(vet, x);

			mostra(vet,x);
			free(vet);
			int novo;
			printf("digite o valor para o novo tamanho do vetor ");
			scanf("%d",&novo);
			vet =malloc(novo);
			preenche(vet, novo);

			mostra(vet,novo);


}

void preenche(int *vet, int y){
	
	for(int i=0;i<y;i++){
			
			int valor;
			printf("digite o valor do vetor na posição %d : ",i);
			scanf("%d",&valor);
			

			vet[i]= valor;

		}
}

void mostra(int *vet, int y){

	for(int i=0;i<y;i++){
		
		printf("posição %d valor do vetor : %d \n ",i,vet[i]);
		

	}

}