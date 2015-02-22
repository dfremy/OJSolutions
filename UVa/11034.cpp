#include <stdio.h>
#include <vector>

using namespace std;

vector <int> car[2];

int main()
{
	int t, l, m, i, val, vez, soma, usa[2],resp;
	char s[10];
	scanf(" %d", &t);
	while(t--)
	{
		usa[0] = usa[1] = resp = 0;
		vez=1;
		car[0].clear();
		car[1].clear();
		scanf(" %d %d", &l, &m);
		l*=100;
		for(i=0;i<m;i++)
		{
			scanf(" %d %s", &val, s);
			if(s[0]=='l')
				car[0].push_back(val);
			else
				car[1].push_back(val);
		}
		while(1)
		{
			if(usa[0]==(int)car[0].size() && usa[1]==(int)car[1].size())
				break;
			soma=0;
			vez++;
			vez%=2;
			while(usa[vez]<(int)car[vez].size() && soma+car[vez][usa[vez]]<=l)
			{
				soma+=car[vez][usa[vez]];
				usa[vez]++;
			}
			resp++;
		}
		printf("%d\n", resp);
	}
	return 0;
}
