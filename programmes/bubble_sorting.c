#include<stdio.h>
int main()
{
    int a[20],i,n,p,c,t;
    printf("enter n");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(p=0;p<n-1;p++)
    {
        for(c=0;c<n-p-1;c++)
        {
            if(a[c]>a[c+1])
            {
                t=a[c];
                a[c]=a[c+1];
                a[c+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}