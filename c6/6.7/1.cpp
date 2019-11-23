#include<stdio.h>
#define N 100
int main()
{
	int n,a[N][N],t,x,y,tx,ty,i,j;
	int book[N][N];                                                              
	scanf("%d",&n);
	t=1;x=1;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			a[i][j]=book[i][j]=0;
	y=(n+1)/2;
	a[x][y]=1;
	while(t<n*n)
	{
		book[x][y]=1;
		t++;
		tx=x-1;
		ty=y+1;
		if(tx<1)
			tx=n;
		if(ty>n)
			ty=1;
		if(book[tx][ty])
		{
			tx=x+1;
			ty=y;
		}
		if(tx<1)
			tx=n;
		if(ty>n)
			ty=1;
		x=tx;
		y=ty;
		a[x][y]=t;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%-3d",a[i][j]);
		printf("\n");
	}
	printf("\n");
	return 0;
}