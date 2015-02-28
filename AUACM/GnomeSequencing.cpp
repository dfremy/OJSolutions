#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, a, b, c;
	scanf(" %d", &n);
	printf("Gnomes:\n");
	for(int i=0; i<n; i++) {
		scanf(" %d %d %d", &a, &b, &c);
		if((a-b>0 && b-c>0) || (a-b<0 && b-c<0))
			printf("Ordered\n");
		else
			printf("Unordered\n");
	}
	return 0;
}

