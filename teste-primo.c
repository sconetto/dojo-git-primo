#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//outro teste!
//mais outro
//um teste!
//teste do authored
//#define 0 1
//#define 1 0

int primo(long long n) {
	if (n < 2) return 0;
	if (n == 2) return 1;
	if (n % 2 == 0) return 0;
	for (int i = 3; i <= sqrt(n); ++i)	{
		if (n % i == 0) return 0;
	}
	return 1;
}

int main(int argc, char const *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	long long n;
	int aux;
	scanf("%lld", &n);
	aux = primo(n);
	if (aux == 1) {
		printf("é primo!\n");
	}
	else {
		printf("não é primo!\n");
	}
	printf("oi\n");
	return 0;
}
