#include<stdio.h>
int confere(int impar){
    if(impar%2==0){
    
    return 1;
}
else{
    return 0;
}
}
int main(){
    int n;
    printf("digite um n : ");
    scanf("%i", &n);
    if(confere(n)==1){
        printf("PAR");
		}
        
    else{
        printf("impar");
    }
   return 0;
    }
    
    

