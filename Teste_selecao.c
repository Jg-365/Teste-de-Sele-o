#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Questão 01*/
int fib_pertence(int n) {
    int a = 0, b = 1, temp;
    
    while (b < n) {
        temp = b;
        b = a + b;
        a = temp;
    }
    
    if (b == n || a == n) {
        return 1;
    }
    return 0;
}
/*Questão 02*/
int presente_a(char a[]){
	int i, n, cont = 0;
	n = strlen(a);
	if(n==0){
		printf("Não existem letras a na string informada.\n");
		return 0;
	}
	for(i=0; i < n; i++){
		if(a[i] == 'a' || a[i] == 'A'){
			cont++;
		}
	}
	printf("Existem %d letras a na string informada.\n",cont);
	if(cont > 0){
		return 1;
	}else{
		printf("Não existem letras a na string informada.\n");
		return 0;
	}
} 


int main(){
	int b;
	printf("Digite um numero para verificar se está ou não na sequencia.\n");
	scanf("%d",&b);
	
	if(fib_pertence(b)){
		printf("A o numero esta presente.");
	}else{
		printf("O número nao esta presente.");
	}
	
	int i, tam;
	printf("Digite o tamanho da string: \n");
	scanf("%d",&tam);
	
	char a[tam];
	
	for(i = 0; i < tam; i++){
		printf("Digite a posição a[%d]: \n",i);
		scanf(" %c",&a[i]);
	}
	
	presente_a(a);
	return 0;
}
