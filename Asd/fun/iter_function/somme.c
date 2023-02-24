#include<stdio.h>
puiss(int a,int n){
    int i=0;
    int s=1;
    while(i<n){
        s=s*a;
        i++;
    }return s;
    

}


 main(i)
{
    /* code */
    int a,n;
    printf("donnes le nbr et la ^");       
    scanf("%d%d",&a,&n);
    printf("la puiss est : %d\n",puiss(a,n));
    
}
