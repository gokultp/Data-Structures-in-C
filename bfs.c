//bfs
#include<stdio.h>
int a[20][20],v[20]={0},s,q[20],f=0;
void enq(int n)
	{
	 q[f++]=n;
	 }
int dq()
	{
	int t,i;
	t=q[0];
	for(i=0;i<20;i++)
	 q[i]=q[i+1];
	return t;
	}
	
void bfs(int n)
	{
	int i;
	v[n]=1;
	printf("%d ",n+1);
	for(i=0;i<s;i++)
		{
		if((a[n][i]==1)&&(v[i]==0))
		 enq(i);
		}
		bfs(dq());
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
	bfs(n-1);
	}

