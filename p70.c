#include<stdio.h>
#include<string.h>
void main() 
{
    char a[10],b[5];
    int i,d,j;
	scanf("%s %s",a,b);
	d=strlen(a);
    for(i=0;i<d;i++)
    {
        
    }
    for(j=0;a[j]!='\0';j++)
    {
        a[i]=b[j];
        i++;
    }
    a[i]='\0';
    printf("%s",a);

}
