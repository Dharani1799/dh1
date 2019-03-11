#include <stdio.h>
void main()
{
    int c,a[10],b[10],i,j;
	scanf("%d",&c);
	for(i=0;i<c;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<c;i++)
	{
	    scanf("%d",&b[i]);
	}
    for(i=0;i<c;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d ",a[i]);
                b[j]='+';
                break;
            }
        }

}
