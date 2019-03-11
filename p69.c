#include <stdio.h>
void main()
{
    int n,a[10],i,d;
	scanf("%d %d",&n,&d);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
    for(i=0;i<n-d;i++)
    {
        printf("%d ",a[i]);
    }

}
