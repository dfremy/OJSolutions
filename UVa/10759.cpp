#include <stdio.h>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;

long long res[30][150], pow6[30];

int main()
{
	int i, j, n, x;
	long long num, den, divi, a, b;
	
	res[0][0]=1;
	for(i=1;i<=24;i++)
		for(j=0;j<=6*(i-1);j++)
			if(res[i-1][j])
			{
				res[i][j+1]+=res[i-1][j];
				res[i][j+2]+=res[i-1][j];
				res[i][j+3]+=res[i-1][j];
				res[i][j+4]+=res[i-1][j];
				res[i][j+5]+=res[i-1][j];
				res[i][j+6]+=res[i-1][j];
			}
	pow6[0]=1;
	for(i=1;i<=24;i++)
		pow6[i]=6*pow6[i-1];
	while(1)
	{
		scanf(" %d %d", &n, &x);
		if(!n && !x)
			break;
		num=den=0;
		for(i=x;i<150;i++)
			num+=res[n][i];
		den = pow6[n];
		
		a=num;
		b=den;
		
		while(a && b)
		{
			if(a>b)
				a-=(a/b)*b;
			else
				b-=(b/a)*a;
		}	
		divi = (a==0)? b : a;
		if(num/divi == den/divi)
			printf("1\n");
		else if(num==0)
			printf("0\n");
		else
			printf("%lld/%lld\n", num/divi, den/divi);
	}
	
	return 0;
}
