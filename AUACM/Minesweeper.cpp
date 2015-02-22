#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int qt(char b[105][105], int i, int j, int l, int c) {
	int h[] = {-1, -1, -1, 0, 1, 1, 1, 0};
	int v[] = {-1, 0, 1, 1, 1, 0, -1, -1};
	int sum = 0;
	for(int k=0; k<8; k++) {
		int iat = i+h[k];
		int jat = j+v[k];
		if( iat>=0 && iat<l && jat>=0 && jat<c )
			sum += ( b[iat][jat] == '*');
	}
	return sum;
}

int main() {
	int l, c;
	char b[105][105];
	while(scanf(" %d %d", &l, &c)!=EOF && (l || c)) {
		char ch;
		for(int i=0; i<l; i++) {
			for(int j=0; j<c; j++) {
				scanf(" %c", &ch);
				b[i][j] = ch;
			}
		}
		
		for(int i=0; i<l; i++) {
			for(int j=0; j<c; j++) {
				if(b[i][j]=='*')
					printf("*");
				else
					printf("%d", qt(b, i, j, l, c));
			}
			printf("\n");
		}
	}

	return 0;
}

