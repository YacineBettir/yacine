#include<stdio.h>
int pgcd(int a,int b){
  	if(a%b==0) return b;
	else return pgcd(b,a%b);
}


int main(){
	printf("Donner les 2 Nbr :");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Le pgcd est :%d\n",pgcd(a,b));	
}
