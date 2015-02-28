#include <bits/stdc++.h>

using namespace std;

int fib(int k) {
	int size = 2;
	int u = 1, p = 1;
	
	while( !(p==1 && u==0) ) {
		int aux = u;
		u = (p+u)%k;
		p = aux;
		size++;
	}
	
	return size;
}

int main() {
	int n;
	scanf(" %d", &n);
	while(n--) {
		int k, m;
		scanf(" %d %d", &k, &m);
		printf("%d %d\n", k, fib(m));
	}
	return 0;
}

