#include <stdio.h>
int main()
{
	int i,n1,n2,n3,a[20],b[20],c[50];
	printf("enter the size of first array");
	scanf("%d",&n1);
	printf("enter the elements in sorted order:");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the size of second array ");
	scanf("%d",&n2);
	printf("enter the elements in sorted order:");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	n3=n1+n2;
	for(i=0;i<n1;i++)
		c[i]=a[i];
	for(i=0;i<n2;i++)
		c[i+n1]=b[i];
	printf("merged array is ");
	for(i=0;i<n3;i++)
		printf("%d\t",c[i]);
	return 0;
}
	
