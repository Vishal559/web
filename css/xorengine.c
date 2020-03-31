#include<stdio.h>
int main()
{
	int i,j,a,arr[20],arr1[20],m,n,result;

	scanf("%d",&a);
	scanf("%d %d",&m,&n);

	for(i=0;i<m;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(j=0;j<n;j++)
	{
		scanf("%d",&arr1[j]);
	}

	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
		{
			result=arr[i]^arr[j];
		}

	}
}