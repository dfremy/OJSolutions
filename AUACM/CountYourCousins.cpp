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
	int n, k, a[1005], b[1005], c[1005], raiz;
	map <int, int> m;
		
	while(scanf(" %d %d", &n, &k)!=EOF && (n || k)) {
		for(int i=0; i<1005; i++)
			c[i] = 0;
		for(int i=0; i<n; i++) {
			scanf(" %d", &a[i]);
		}
		raiz = a[0];
		m[a[1]] = raiz;
		// Quantos filhos cada um tem
		int at = 1, pos=0;
		for(int i=2; i<n; i++) {
			if(a[i] == a[i-1] + 1)
				at++;
			else {
				b[pos++] = at;
				at = 1;
			}
			m[a[i]] = a[pos];
		}
		b[pos] = at;
		c[0]=1, c[1]=b[0];
		at = b[0], pos = 2;
		// Quantos nos por profundidade
		for(int i=1; i<n; i++) {
			if(at) {
				at--;
				c[pos]+=b[i];
			}
			if(!at)
				at = b[(pos++) - 1];
		}
		
		// Achar profundidade do k
		int pro = 0, seq = 0, eu = k;
		while(eu != raiz){
			eu = m[eu];
			pro++;
		}
		int res = c[pro], i;
		//Achar quantos remover
		for(i = 0; i < n; i++) {
			if(k==a[i])
				break;
		}
		i--;
		int ind = 0;
		while(i>=0) {
			i -= b[ind++];
		}
		res -= b[ind-1];
		printf("%d\n", res);
	}

	return 0;
}

