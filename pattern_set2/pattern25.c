#include<stdio.h>
int main()
{
    int i,j,n=5,k=1;
    char c = 'a';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2 == 1)
                printf("%d ",k);
            else
                printf("%c ",c);
            
           
        }
        k++;
        c++;
        printf("\n");
    }
}