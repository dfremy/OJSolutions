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

set < pair<int, int> > v;

int main() {
	int n, soma;
	while(scanf(" %d", &n) != EOF && n) {
		soma = 0;
		v.clear();
		for(int i = 0; i < n; i++) {
			int a;
			scanf(" %d", &a);
			v.insert(make_pair(a,i));
		}
		while(v.size() > 1) {
			int a = v.begin()->first;
			v.erase(v.begin());
			a += v.begin()->first;
			int b = v.begin()->second;
			soma += a;
			v.erase(v.begin());
			v.insert(make_pair(a, b));
		}
		printf("%d\n", soma);
	}
	return 0;
}

