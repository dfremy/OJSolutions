#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	while(scanf(" %d", &n)!=EOF && n) {
		int last=0, at;
		for(int i=0; i<n ;i++) {
			scanf(" %d", &at);
			if(at != last) {
				printf("%d ", at);
				last = at;
			}
		}
		printf("$\n");
	}
	return 0;
}

