#include <stdio.h>
#include <stdlib.h>

main(){
	int x;
	printf("Digite o valor!");
	scanf("%d", &x);
	
	if(x==0){
		printf("Valor nulo!");
	}
	else{
		if(x>0)
		{
			if(x%2==0){
				printf("Valor positivo e par!\n");
			}
			else{
				printf("Valor positivo e impar!\n");
			}
		}
		else{
			if(x%2!=0) {
				printf("Valor negativo e impar!\n");
			}
			else{
				printf("Valor negativo e par!\n");
			}
		}
	}
	system("pause");
}


