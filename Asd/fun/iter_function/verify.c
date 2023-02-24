#include<stdio.h>

int verifyy(int t[10],int n){
int i=0,j=1;
while(j<n){
if(t[i]==t[j]) {j++;}
else {t[i+1]=t[j];
i++;j++;
}
}
n=i+1;
return n;
}
int main(){
int i,n;
int t[10];
printf("table length:");
scanf("%d",&n);
printf("fill the Table:\n");
for(i=0;i<n;i++){
	scanf("%d",&t[i]);}
n=verifyy(t,n);
printf("the New table is :");
for(i=0;i<n;i++){ printf(" %d",t[i]);}
printf("\n");


}



