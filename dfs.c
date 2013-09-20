//dfs
#include<stdio.h>
int a[20][20],v[20]={0},s;
void dfs(int n)
	{
	int i;
	v[n]=1;
	printf("%d ",n+1);
	for(i=0;i<s;i++)
		{
		if((a[n][i]==1)&&(v[i]==0))
		 dfs(i);
		}
	}

void main()
	{
	int i,j,n;
	printf("Enter the no of vertices");
	 scanf("%d",&s);
	printf("Enter the Adj. matrix");
	 for(i=0;i<s;i++)
	 {
	  for(j=0;j<s;j++)
	  {
	   scanf("%d",&a[i][j]);
	   }
	   }
	printf("Enter the starting vertex");
	 scanf("%d",&n);
	dfs(n-1);
	}
