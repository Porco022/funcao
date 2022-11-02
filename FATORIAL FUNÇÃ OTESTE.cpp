#include<stdio.h>
long int fatorial(int num){
	int i;
	long int fat=1;
	for(i=1;i<=num;i++){
		fat *= i;
		
	}
	return fat;	
}
int main(){
	int num;
	printf("digite um valor : ");
	scanf("%d", &num);
	printf("o fat de %d eh %ld",num,fatorial(num));
	return 0;
}
