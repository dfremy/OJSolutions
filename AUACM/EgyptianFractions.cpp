#include <bits/stdc++.h>

using namespace std;

int red(long long me, long long ma) {
	if(me==0)
		return ma;
	return red(ma%me, me);
}

int main() {
	long long n, m, den;
	while(scanf(" %lld %lld", &n, &m)!=EOF && (n || m)) {
		for(den=2; n>1; den++) {
			long long num = m, fakem = m, faken=n;
			
			faken *= den;
			fakem *= den;
			
			if(faken < num)
				continue;
				
			faken-=num;
			long long div = red(faken, fakem);
			faken/=div;
			fakem/=div;
			
			if(fakem<1000000) {
				m = fakem;
				n = faken;
				printf("%lld ", den);
			}
		}
		printf("%lld\n", m);
	}
	return 0;
}

