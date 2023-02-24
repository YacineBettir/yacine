#include<stdio.h>

void permit(int *a,int *b){
int c;
c=*a;
*a=*b;
*b=c;
}
void switchcollum(int t[10][10],int c1,int c2,int n){
for(int i=0;i<n;i++)
permit(&t[i][c1],&t[i][c2]);
}
main(){
int n,m,k;
    printf("enter col Nbr and line nbr:\n");
    scanf("%d%d",&m,&n);
    int t[10][10];
    printf("fill in the table:\n");
    for (int i=0;i<n;i++)
    {
        /* code */
        for (int j=0;j<m;j++)
       scanf("%d",&t[i][j]); 
    }
    printf("the matrix is :\n");
    for (int i=0;i<n;i++)
    {
        /* code */
        for (int j=0;j<m;j++)
            printf("\t%d",t[i][j]);
              printf("\n");
    }	
    printf("enter the colums  to switch :\n");
    int c1,c2;
    scanf("%d%d",&c1,&c2);
    switchcollum(t,c1,c2,n);
      printf("the matrix is :\n");
    for (int i=0;i<n;i++)
    {
        /* code */
        for (int j=0;j<m;j++)
            printf("\t%d",t[i][j]);
              printf("\n");
    }
     
	
}
