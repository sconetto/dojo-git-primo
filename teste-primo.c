#include <stdio.h>
#include <stdlib.h>

int primo(long long n) {
	//Seu código

	int resultado = 1;

	for (long long i = n-1; i > 1; --i) {
		
		if(n % i == 0){
			resultado = 0;
			break;
		}

	}

	return resultado;

}

int main() {
	//Seu código

	long long num = 0;

	printf("Digite um numero: ");
	scanf("%lld", &num);

	int resultado = primo(num);

	if(resultado == 0){
			printf("Nao primo\n");
	}else{
		printf("Primo");
	}


}