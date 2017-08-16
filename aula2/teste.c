#include <stdio.h>
#include <stdlib.h>


void imprimirvetor(int *vet, int vetsize){

	
	printf("O vetor é: ");
	for( int i = 0;i< vetsize;i++ ) {
		printf("%d ",vet[i]);
   }


}
void invertevetor(int vet[], int vetsize){

	int vetinvert[vetsize];
	int j=0;
	printf("\nO vetor invertido fica: ");
	for( int i =vetsize-1;i>=0;i-- ) {
		 
		vetinvert[j] = vet[i];
	printf("%d, ",vetinvert[j]);
   j++;

   }


}
void maiorvalorvetor(int *vet, int vetsize){

	int maior = 0;
	
	for( int i = 0;i< vetsize;i++ ) {
		
		if(vet[i] > maior){
			&maior =vet[i];
			
		}
   }
   printf("\nO maior valor é = %d\n",maior);


}



int main() {



int vetsize = 6;
int vet[] = {1,2,3,4,5,6};
	
imprimirvetor(vet,vetsize);
invertevetor(vet,vetsize);
maiorvalorvetor(vet,vetsize);

return 0;
}





//for( int i = 0;i<10 ;i++ ) {
  //    printf("This loop will run forever.\n");
   //}