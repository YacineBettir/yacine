#include<stdio.h>
int fibo(int n){
if(n==1||n==0)return 1;
else return fibo(n-1)+fibo(n-2);

}
int main(){
int c;
printf("Donner le Nbr:");
scanf("%d",&c);
 printf("Le n-ieme de fibo(%d)=%d\n",c,fibo(c));


}
