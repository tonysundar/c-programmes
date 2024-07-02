main()
{
	int a[20],i,n,index,ele;
	printf("enter n");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter element");
	scanf("%d",&ele);
	printf("enter index");
	scanf("%d",&index);
	for(i=n-1;i>=index-1;i--)
	{
		a[i+1]=a[i];
	}
	  a[index-i]=ele;
	for(i=0;i<=n;i++)
	printf("%d ",a[i]);
}
