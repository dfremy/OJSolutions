#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, sth, stm, dh, dm;
	scanf(" %d", &n);
	for(int i=0; i<n; i++) {
		scanf(" %d %d %d %d", &sth, &stm, &dh, &dm);
		printf("------+---------\n time | elapsed\n------+---------\n");
		int first = sth, last = sth+dh + ((stm+dm>=60)?1:0);
		for(int j=first; j<=last; j++) {
			if(j==first) {
				printf("%2d:XX | XX", j);
				if(stm>0)
					printf(" - %d", stm);
				printf("\n");
			}
			else {
				printf("%2d:XX | XX", (j-1)%12 +1);
				printf(" + %d", -stm + 60*(j-first));
				printf("\n");
			}
		}
	}
	return 0;
}

