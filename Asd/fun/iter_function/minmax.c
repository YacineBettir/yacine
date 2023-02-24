#include<stdio.h>
void permit(int *a,int *b){
int c;
c=*a;
*a=*b;
*b=c;
}
int addcol(int t[10][10],int k,int n){
    int som=0;
    int i;
    for (i=0;i<n;i++)
          som+=t[i][k];          
    return som;
}
void switchcol(int t[10][10],int c1,int c2,int n){
for(int i=0;i<n;i++)
permit(&t[i][c1],&t[i][c2]);
}

main(){
int n,m;
    printf("enter col Nbr and line nbr:\n");
    scanf("%d%d",&m,&n);
    int t[10][10];
    int i,j;
    printf("fill in the matrix:\n");
    for (i=0;i<n;i++)
    {
        /* code */
        for (j=0;j<m;j++)
       scanf("%d",&t[i][j]); 
    }
    printf("the matrix is :\n");
    for (i=0;i<n;i++)
    {
        /* code */
        for (j=0;j<m;j++)
            printf("\t%d",t[i][j]);
              printf("\n");
    }
    int indmin=0,somax=addcol(t,0,n);
    int indmax=0,somin=addcol(t,0,n);
    for(i=0;i<n;i++){
    int some=addcol(t,i,n);
    	if(somax<some){
    	indmax=i;
    	somax=some;
    	}
    	if(somin>some){
    	indmin=i;
    	somin=some;
    	}
    }
    switchcol(t,indmin,indmax,n);
    printf("L'indice de Col Min est:%d\nL'indice de Col Max est:%d\n",indmin+1,indmax+1);
     printf("the New matrix is :\n");
    for ( i=0;i<n;i++)
    {
        /* code */
        for (j=0;j<m;j++)
            printf("\t%d",t[i][j]);
              printf("\n");
    }
    
    




}
