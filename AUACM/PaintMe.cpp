#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n, w, l, h, a, m;
	while( scanf(" %d %d %d %d %d %d", &n, &w, &l, &h, &a, &m)!=EOF
	&& (n || w || l || h || a || m) ) {
		int at = 2*w*h + 2*l*h + w*l, at2 = 0;
		at *= n;
		for(int i=0; i<m; i++) {
			int da, db;
			scanf(" %d %d", &da, &db);
			at2 += da*db;
		}
		at-=at2*n;
		printf("%d\n", at/a+((at%a)?1:0));		
	}

	return 0;
}

