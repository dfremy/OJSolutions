#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, at, qt, qtat;
	while(scanf(" %d", &n)!=EOF && n) {
		at = 1, qtat=0;
		for(int i=0; i<n; i++) {
			scanf(" %d", &qt);
			while(qtat<qt) {
				printf("%d ", at);
				qtat++;
			}
			at++;
		}
		printf("\n");
	}
	return 0;
}

