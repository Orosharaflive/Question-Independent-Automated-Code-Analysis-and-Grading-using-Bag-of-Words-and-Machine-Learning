#include <stdio.h>

int main()
{
	int t,n,m;
	int a[35],b[35];
	int i,c,sum;
	scanf("%d",&t);
	a[0]=0;
	a[1]=2;
	a[2]=5;
	for(i=3;i<35;i++)
	a[i]=a[i/2]+a[(i-1)/2]+i+1;

	b[0]=0;
	for(i=1;i<35;i++)
	{
		sum=0;
		i++;
		c=i;
		while(c!=1)
			{
				sum=sum+c;
				c--;

			}
			i--;
			b[i]=sum;
	}

	//for(i=30;i<35;i++)
	//printf("%d ",a[i]);

	//printf("\n\n");
	//for(i=30;i<35;i++)
	//printf("%d ",b[i]);


	while(t--)
	{
		scanf("%d %d",&n,&m);
		if(m>b[n])
		{
			printf("%d\n",m-b[n]);
		}
		else if(m<=b[n] && m>=a[n])
		{
			printf("0\n");
		}
		else
		printf("-1\n");
	}
//getch();
return 0;
} 
