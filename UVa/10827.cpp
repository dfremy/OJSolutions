#include <stdio.h>

using namespace std;

int m[200][200], at[200];

int maior(int a, int b)
{
	if(a>b)
		return a;
	return b;
}

int main()
{
	int t, n, i, j, maxat, k, l, num, resp, s;
	scanf(" %d", &t);
	while(t--)
	{
		scanf(" %d", &n);
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				scanf(" %d", &num);
				m[i][j] = m[i][j+n] = m[i+n][j] = m[i+n][j+n] = num;
			}
		resp=m[0][0];
		for(i=0;i<n;i++)
			for(j=1;j<n;j++)
			{
				s=0;
				for(k=0;k<n;k++)
				{
					num=0;
					for(l=i;l<=i+j;l++)
						num+=m[k][l];
					at[s]=at[s+n]=num;
					s++;
				}
				maxat=0;
				for(k=0;k<n;k++)
				{
					num=0;
					for(l=0;l<n;l++)
						num=maior(num+at[k+l], 0);
					maxat=maior(num,maxat);
				}
				resp = maior(resp, maxat);
			}
		printf("%d\n", resp);
	}
	return 0;
}
