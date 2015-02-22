#include <stdio.h>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;

map <char, int> p;
map <char, int>::iterator it;

int main()
{
	int i, j, t, nimp, imp, lin, col, tes, maior, soma;
	char pixel;
	scanf(" %d", &t);
	for(tes=1;tes<=t;tes++)
	{
		maior = soma= 0;
		p.clear();
		scanf(" %d %d %d %d", &lin, &col, &imp, &nimp);
		for(i=0;i<lin;i++)
			for(j=0;j<col;j++)
			{
				scanf(" %c", &pixel);
				maior = max(maior, ++p[pixel]);
			}
		for(it=p.begin();it!=p.end();it++)
			if((*it).second == maior)
				soma += imp*maior;
			else
				soma += nimp*(*it).second;
		printf("Case %d: %d\n", tes, soma);
	}
	return 0;
}
