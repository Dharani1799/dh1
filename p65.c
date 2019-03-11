#include <stdio.h>
void main()
{
    int d,a[10],i;
	scanf("%d",&d);
	for(i=0;i<d;i++)
	{
	    scanf("%d",&a[i]);
	}
    for(i=0;i<d;i++)
    {
        if(a[i]<d)
        {
            printf("%d ",a[i]);
        }
    }
}
