#include <bits/stdc++.h>

using namespace std;

int main() {
	int a[15], n, k;
	scanf(" %d", &n);
	while(n--) {
		scanf(" %d", &k);
		for(int i=0; i<15; i++) {
			scanf(" %d", &a[i]);
		}
		int me = 9999999, is=0;
		for(int i=1; i<14; i++) {
			me = a[i];
			for(int j=i; j<14; j++) {
				if(a[j] < me)
					me = a[j];
				if(me > a[i-1] && me > a[j+1])
					is++;
			}
		}
		printf("%d %d\n", k, is);
	}
	return 0;
}

