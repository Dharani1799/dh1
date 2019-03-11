#include <stdio.h>
void main() 
{
    int n,a[10],i,j,m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0,j=i+1;i<n,j<n;i++,j++)
	{
	   if(a[i]>a[j])
	   {
	       m=a[i];
	   }
	   else
	   {
	        m=a[j];    
	   }
	   printf("%d ",m);
	}
	
}
