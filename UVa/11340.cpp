#include <cstdio>
#include <vector>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <cmath>
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <ctype.h>

using namespace std;

map <char, int> m;

int main() {
	int n, k, v;
	double soma;
	char c;
	scanf(" %d", &n);
	while(n--) {
		soma = 0;
		m.clear();
		scanf(" %d ", &k);
		for(int i = 0; i < k; i++) {
			scanf("%c %d ", &c, &v);
			m[c] = v;
		}
		scanf(" %d ", &k);
		int lin = 0;
		while(lin < k) {
			c = getchar();
			if(c=='\n')
				lin++;
			else
				soma += m[c];
		}
		printf("%.2lf$\n", soma/100);
	}
	return 0;
}

