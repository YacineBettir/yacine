#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool pali(int i,char t[20],int j){
if(i==j) return true;
else if(t[j]!=t[i]) return false;
else return pali(i+1,t,j-1);
}

int main(){
char t[20];
printf("Gimme the word:");
scanf("%s",t);
if(pali(0,t,strlen(t)-1)==true) printf("Le mot est palindrome\n");
else printf("Le mot n'est pas palindrome\n");

}
