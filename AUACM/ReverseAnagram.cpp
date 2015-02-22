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
	int n, print;
	while(scanf(" %d", &n)!=EOF && n) {
		char m[n+5][n+5];
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				scanf(" %c", &m[i][j]);
			}
		}
		
		for(int i=0; i<n; i++) {
			int at = 0;
			print = 0;
			for(int j=0; j<n; j++) {
				if(m[i][j] == 'X')
					at++;
				else {
					if(at) {
						printf("%d ", at);
						at = 0;
						print = 1;
					}
				}
			}
			if(at || !print)
				printf("%d", at);
			printf("\n");
		}
		
		for(int i=0; i<n; i++) {
			int at = 0;
			print = 0;
			for(int j=0; j<n; j++) {
				if(m[j][i] == 'X')
					at++;
				else {
					if(at) {
						printf("%d ", at);
						at = 0;
						print = 1;
					}
				}
			}
			if(at || !print)
				printf("%d", at);
			printf("\n");
		}
	}

	return 0;
}

