#include <cstdio>
#include <vector>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <cmath>
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <ctype.h>

using namespace std;

int lin, col;
char m[105][105];

int resolve(int l, int c){
	int t=0;
	if(l>0){
		if(m[l-1][c]=='*')
			t++;
		if(c>0 && m[l-1][c-1]=='*')
			t++;
		if(c+1<col && m[l-1][c+1]=='*')
			t++;
	}
	if(l+1<lin){
		if(m[l+1][c]=='*')
			t++;
		if(c>0 && m[l+1][c-1]=='*')
			t++;
		if(c+1<col && m[l+1][c+1]=='*')
			t++;
	}
	if(c>0 && m[l][c-1]=='*')
		t++;
	if(c+1<col && m[l][c+1]=='*')
		t++;
	return t;
}

int main(){
	int i, j, tes=1, resp[105][105];
	while(scanf(" %d %d", &lin, &col)!=EOF && lin){
		if(tes>1)
			printf("\n");
		printf("Field #%d:\n", tes++);
		for(i=0;i<lin;i++){
			for(j=0;j<col;j++){
				scanf(" %c", &m[i][j]);
			}
		}
		for(i=0;i<lin;i++){
			for(j=0;j<col;j++){
				if(m[i][j]=='*')
					printf("*");
				else
					printf("%d", resolve(i, j));
			}
			printf("\n");
		}
	}
	return 0;
}

