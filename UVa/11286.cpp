#include <stdio.h>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;

vector < pair < int, pair < int, pair < int, pair < int, int > > > > > grades;
map < pair < int, pair < int, pair < int, pair < int, int > > > >, int > qt;

int main()
{
	int i, j, n, soma, maior, aula[6];
	while(scanf(" %d", &n)!=EOF && n)
	{
		qt.clear();
		grades.clear();
		soma = maior = 0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<5;j++)
				scanf(" %d", &aula[j]);
			sort(aula,aula+5);
			grades.push_back(make_pair(aula[0], make_pair(aula[1], make_pair(aula[2], make_pair(aula[3], aula[4])))));
			maior = max(maior, ++qt[grades.back()]);
		}
		for(i=0; i<n ;i++)
		{
			if(qt[grades[i]]==maior)
				soma+=1;
		}
		printf("%d\n", soma);
	}
	return 0;
}
