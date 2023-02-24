#include<stdio.h>
#include<stdbool.h>
bool find(int v,int t[20],int n){
if(n==0) return false;
else if(t[n-1]==v) return true;
else return(find(v,t,n-1));
}


int main(){
int v,a,n,t[n];
printf("Donner le nbr des ele :");
scanf("%d",&n);
printf("fill the table :\n");
for(int i=0;i<n;i++)scanf("%d",&t[i]);
printf("Donner l'ele chercher :");
scanf("%d",&v);
if(find(v,t,n)==true)printf("La val existe\n");
else printf("La val n'existe pas\n");


}
