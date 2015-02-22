#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

vector <int> v, r;

int main() {
	int n, t, m, soma, mt;
	int pd[1000000], vim[1000000];
	while(scanf(" %d", &n)!=EOF) {
		v.clear();
		r.clear();
		memset(pd, 0, sizeof(pd));
		memset(vim, 0, sizeof(vim));
		pd[0] = 1;
		soma = mt = 0;
		scanf(" %d", &t);
		for(int i = 0; i < t; i++) {
			scanf(" %d", &m);
			soma += m;
			v.push_back(m);
		}
		for(int i = 0; i < t; i++) {
			for(int j = n - v[i]; j >= 0; j--) {
				if(pd[j] && !pd[j+v[i]]) {
					vim[j+v[i]] = j;
					pd[j+v[i]] = v[i];
					mt = max(mt, j+v[i]);
				}
			}
		}
		int somar = 0;
		while(mt != 0) {
			r.push_back(pd[mt]);
			somar += pd[mt];
			mt = vim[mt];
		}
		for(int i = r.size()-1; i>=0; i--)
			printf("%d ", r[i]);
		printf("sum:%d\n", somar);
	}
	return 0;
}
