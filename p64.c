#include <stdio.h>
void main()
{
    int n,a[10],b[10],i,k,t=0,j;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
           
        } 
        if(a[i]<k)
        {
            printf("%d ",a[i]);
        }
    }
}
