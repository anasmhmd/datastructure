#include <stdio.h>
int main()
{
	int i,n1,n2,a[20],b[20],c[50],j,k;
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
	k=n1+n2;
	i=0;j=0;k=0;
	while(i<n1&&j<n2)
	{
	     if(a[i]<b[j])
	     {
		c[k]=a[i];
		k++;
		i++;
	     }
	     else
	     {
	       c[k]=b[j];
	       j++;
	       k++;
	     }
	  }
	  while(i<n1)
	  {
	    c[k]=a[i];
    	    k++;
            i++;
          }
	  while(j<n2)
	  {
	     c[k]=b[j];
	     k++;
	     j++;
	  }
	  printf("merged array is ");
	  for(k=0;k<n1+n2;k++)
	  { 
	  printf("%d\t",c[k]);
	  }  
	  return 0;
	
}
