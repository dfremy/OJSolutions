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

int main() {
	int n, l, c;
	char s;
	scanf(" %d", &n);
	for(int i = 0; i < n; i++) {
		c='a';
		while(c!='\n')
			scanf("%c", &c);
		scanf("%c %d %d", &s, &l, &c);
		int ma = max(c, l), mi = min(c, l);
		if(s=='r')
			printf("%d\n", mi);
		if(s=='K')
			printf("%d\n", ((c+1)/2) * ((l+1)/2));
		if(s=='k')
			printf("%d\n", (c*l+1) / 2);
		if(s=='Q')
			printf("%d\n", mi);
	}
	return 0;
}

