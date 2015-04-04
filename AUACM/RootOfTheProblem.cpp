#include <bits/stdc++.h>

using namespace std;

int main() {
	int b, n;
	while(scanf(" %d %d", &b, &n)!=EOF && (b || n)) {
		int i;
		for(i=0; pow(i, n) < b; ++i);
		if(abs(pow(i, n) - b) < abs(pow(i-1, n) - b))
			printf("%d\n", i);
		else
			printf("%d\n", i-1);
	}
	return 0;
}

