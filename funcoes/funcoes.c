#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fatorial(int x){
	
	if(x<0){
		printf("erro numero menor que zero\n"); 
		return 0;
	}
	else if (x==0){
			
			return 1;
	}
	else{
			return x*fatorial(x-1);
	}

}
int somarvet(int *x,int tam){
	
	if(x<0){
		printf("erro numero menor que zero\n"); 
		return 0;
	}
	else if (x==0){
			
			return 1;
	}
	else{
		int total=0;
			for(int i=0;i<sizeof(x);i++){

				total = x[i]+total;
				
			}
			printf("o valor do somatorio do vetor e %d \n ",total);
	}

}
void main(){ //função principal
	int x ,fat ;
	int tamvet ;
	int vet[]={2,3,4,5};
	
	fat=1;
	printf("Digite o valor para o fatorial: "); 
	scanf("%d",&x);
	printf("Digite o valor para o tamanho do verto: "); 
	scanf("%d",&tamvet);
   fat =+ fatorial(x)* fat;
   somarvet(vet,tamvet);
   printf("O fatorial de %d e %d",x,fat);

  
}//fim do programa



