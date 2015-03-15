#include <bits/stdc++.h>

#define PI 3.14159265358979323846

using namespace std;

int main() {
	int n, melhorraio, melhorpreco, menu = 1;
	
	while(scanf(" %d", &n)!=EOF && n) {
		int raio, preco;
		melhorraio = 0, melhorpreco = 1;
		for(int i=0; i<n; i++) {
			scanf(" %d %d", &raio, &preco);
			if(PI*raio*raio/preco > PI*melhorraio*melhorraio/melhorpreco) {
				melhorraio = raio;
				melhorpreco = preco;
			}
		}
		printf("Menu %d: %d\n", menu++, melhorraio);
	}
	return 0;
}

