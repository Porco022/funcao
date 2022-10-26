#include<stdio.h>
#include <math.h>
int div(int d1,int d2){
	int d;
	d=d1/d2;
	return d;
}int mult(int m1,int m2){
	int m;
	m=m1*m2;
	return m;
}
int soma(int s1,int s2){
	int s;
	s=s1+s2;
	return s;
}
int sub(int n1,int n2){
	int m;
	m=n1-n2;
	return m;
}
int main(void){
	int l1,l2,res,res2,res3,res4;
	printf("digite o n1 : ");
	scanf("%d",&l1);
	printf("digite o n2 : ");
	scanf("%d",&l2);
	res = soma(l1,l2);
	res2 = sub(l1,l2);
	res3 = mult(l1,l2);
	res4= div(l1,l2);
	printf("soma : %d\n",res);
	printf("sub : %d\n",res2);
	printf("multiplicacao : %d\n",res3);
	printf("divisao : %d",res4);
	return 0;
}
