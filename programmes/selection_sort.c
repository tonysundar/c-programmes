#include<stdio.h>
int main()
{
    int a[20],i,n,j,k,t;
    printf("enter n");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {   
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            
                k=j;
            
        }
        t=a[k];
        a[k]=a[i];
        a[i]=t;
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}