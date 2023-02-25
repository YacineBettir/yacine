#include<stdio.h>
int addcol(int t[10][10],int k,int n){
    int som=0;
    int i;
    for (i=0;i<n;i++)
          som+=t[i][k];          
    return som;
}
int  main()
{
    /* code */
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
    printf("choose which collum:\n");
    
    scanf("%d",&k);  
    printf("la summe est  de col %d est:%d \n",k,addcol(t,k,n));
    
} 
