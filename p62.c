#include<stdio.h>
void main()
{
	int n,i,d;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			d=n/i;
			if(d%2==1)
			{
				printf("%d",i);
				break;
			}
		}
		
	}
    
}
