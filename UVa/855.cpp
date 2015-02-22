#include <stdio.h>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;

int l[100005], c[100005];

int main()
{
	int i, j, n, t, lin, col, a, b, idl, idc, menor, soma;
	scanf(" %d", &t);
	while(t--)
	{
		memset(l, 0, sizeof(l));
		memset(c, 0, sizeof(c));
		scanf(" %d %d %d", &lin, &col, &n);
		for(i=0;i<n;i++)
			scanf(" %d %d", &l[i], &c[i]);
		sort(l, l+n);
		idl=l[(n-1)/2];
		sort(c, c+n);
		idc=c[(n-1)/2];
		printf("(Street: %d, Avenue: %d)\n", idl, idc);
	}
	return 0;
}
