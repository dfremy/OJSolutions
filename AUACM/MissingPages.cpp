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
	int n;
	while(scanf(" %d", &n) != EOF && n) {
		scanf(" %d", &p);
		int at = p;
		vector <int> v;
		if(p > n/2)
			p = n + 1 - p;
		if(p % 2)
			p++;
		v.push_back(p);
		v.push_back(p-1);
		v.push_back(n+1-p);
		v.push_back(n+2-p);
		sort(v.begin(), v.end());
		for(int i = 0; i < v.size(); i++)
			if(v[i] != at)
				printf("%d ", v[i]);
		printf("\n");
	}

	return 0;
}

