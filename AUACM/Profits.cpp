#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n, m, at, k;
	while(scanf(" %d", &n)!=EOF && n) {
		m = -999999, at = -999999;
		for(int i=0; i<n; i++) {
			scanf(" %d", &k);
			if(at<0)
				at = k;
			else
				at += k;
				
			if(m<at)
				m = at;
		}
		printf("%d\n", m);
	}

	return 0;
}

