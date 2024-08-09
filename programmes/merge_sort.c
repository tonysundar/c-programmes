#include<stdio.h>
void merge_sort(int a[],int l,int h);
void merge(int a[],int l,int m,int h);
main()
{
	int a[20],i,n;
	printf("enter n");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	merge_sort(a,0,n-1);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
void merge_sort(int a[],int l,int h)
{
	int m;
	if(l<h)
	{
		m=(l+h)/2;
		merge_sort(a,l,m);
		merge_sort(a,m+1,h);
		merge(a,l,m,h);
	}
}
void merge(int a[],int l,int m,int h)
{
	int b[20],i,j,k;
	i=l,j=m+1;
	while(i<=m&&j<=h)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
	     	i++,k++;
		}
		else
		{
		  b[k]=a[j];
		  j++;
		  k++;
	    }
		
	}
	while(i<=m)
	{
		b[k]=a[i];
		i++;
		k++;
	}
	while(j<=h)
	{
		b[k]=a[j];
		j++;
		k++;
	}
	for(i=l;i<=h;i++)
	a[i]=b[i];
}
