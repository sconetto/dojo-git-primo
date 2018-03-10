#include <stdio.h>
#include <stdlib.h>

int primo(long long n) {
	//Seu código
  long long i = 2;

  while(i < n){
    if (n%i == 0){
      return 1;
      break;
    }
    i++;
  }
  return 0;
}

int main() {
	//Seu código
  long long number;
  int answer;

  scanf("%lld", &number );

  answer = primo(number);

  if (answer==1){
    printf("Não é primo\n");
  }else{
    printf("É primo\n");
  }

}
