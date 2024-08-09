#include<stdio.h>
main()
{
	int a[10],i,n;
	printf("enter n");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	quick_sort(a,0,n-1);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
void quick_sort(int a[],int l, int h)
{
	int i,j,p,t;
	
	if(l<h)
	{
	   i=l=p;j=h;
	   while(i<=j)
	   {
	   	 while(a[i]<=a[p])
	   	 i++;
	   	 while(a[j]>a[p])
	   	 j--;
	   	 if(i<j)
	   	 {
	   	 	t=a[i];
	   	 	a[i]=a[j];
	   	 	a[j]=t;
			}
	   	 
	   }
	   t=a[j];
	   a[j]=a[p];
	   a[p]=t;
	   quick_sort(a,l,j-1);
	   quick_sort(a,j+1,h);
	   
	}
}
