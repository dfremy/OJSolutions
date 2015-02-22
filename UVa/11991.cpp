#include <stdio.h>
#include <map>
#include <vector>

using namespace std;

map <int, int> num;
vector <int> ocorrencia[100005];

int main()
{
	int n, m, l, k, val, usa=0;
	while( scanf(" %d %d", &n, &m) != EOF )
	{
		for(int i=1;i<=n;i++)
		{
			scanf(" %d", &val);
			if(num.count(val))
				ocorrencia[num[val]].push_back(i);
			else
			{
				num[val] = usa;
				ocorrencia[usa++].push_back(i);
			}
		}
		for(int i=0; i<m;i++)
		{
			scanf(" %d %d", &l, &k);
			if(!num.count(k) || ocorrencia[num[k]].size()<l)
				printf("0\n");
			else
				printf("%d\n", ocorrencia[num[k]][l-1]);
		}
	}
	return 0;
}
