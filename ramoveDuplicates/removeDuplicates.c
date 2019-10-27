#include<stdio.h>
#include<string.h>
int main()
{
	int ary[10],i,j,k,x;
	printf("enter the size of the array:");
	scanf("%d",&x);
	printf("enter the element: ");
	for(i=0;i<x;i++)
	{
		scanf("%d",&ary[i]);
	}
	printf("remove the duplicates\n");
	for(i=0;i<x;i++)
	{
		for(j=i+1;j<x;j++)
		{
			if(ary[i]==ary[j])
			{
				for(k=j;k<x;k++)
				{
					ary[k]=ary[k+1];
				}
				j--;
			    x--;
			}
			
		}
	}
	for(i=0;i<x;i++)
	{
		printf("%d",ary[i]);
		
	}
	return 0;
}
