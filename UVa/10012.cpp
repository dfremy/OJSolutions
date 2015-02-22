#include <stdio.h>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;

vector <int> seq;

double r[15], respfinal, x[15];
int n, t;

void back(int qt, int vis[], double x[])
{
	double at, dist;
	if(qt==n)
	{
		at = 0.0;
		for(int j=0;j<seq.size();j++)
			at = max(at, x[seq[j]]+r[seq[j]]);
		respfinal = min(respfinal, at);
	}
	for(int i=0 ; i<n ; i++)
		if(!vis[i])
		{
			vis[i] = 1;
			x[i] = r[i];
			for(int j=0; j<seq.size() ; j++)
			{
				dist = 2.0 * sqrt( r[seq[j]] * r[i]);
				x[i] = max(x[i], x[seq[j]] + dist);
		 	}
			seq.push_back(i);
			back(qt+1, vis, x);
			vis[i] = 0;
			x[i] = 0;
			seq.pop_back();
		}
}

int main()
{
	int i, j, vis[10];
	double resp, at;
	scanf(" %d", &t);
	while(t--)
	{
		respfinal = 1e12;
		memset(x, 0.0, sizeof(x));
		memset(vis, 0, sizeof(vis));
		scanf(" %d", &n);
		for(i=0 ; i<n ; i++)
			scanf(" %lf", &r[i]);
		back(0, vis, x);
		printf("%.3lf\n", respfinal);
	}
	return 0;
}
