#include<stdio.h>
#include<string.h>
void mirr(char t[20]){
	for(int i=0,j=strlen(t)-1;i<j;i++,j--){
		char c=t[i];
		t[i]=t[j];
		t[j]=c;
		printf("%c",t[i]);
	}
}


int main(){
char t[20];
printf("donner le mot :");
scanf("%s",t);
mirr(t);
printf("le mot mirr est : %s\n",t);



}
