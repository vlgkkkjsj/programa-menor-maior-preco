#include <stdio.h>
#include<stdlib.h>


main(void){

		int i, valores[2],soma,media;
		char produto;
		
		printf("informe o produto que deseja levar: ");
		scanf("%s",&produto);
		
		for( i=0; i<2;i++){
					
			printf("informe a %d valor do produto: ",i);
			scanf("%d", &valores[i], i+1);	
				
		}
			//soma e divisao
			for(i=0;i<2;i++){
				soma= soma+valores[i];
				media= soma/3;
			}
			
			for(i=0;i<2;i++){	
				if (valores[i]< media){
					
				printf("\n os valores a seguir sao menores: %d \n ", valores[i],i+1);
				}
				else{
				printf("\n os valores a seguir sao maiores: %d \n", valores[i]);
				
				}	
			}
			
			
}

