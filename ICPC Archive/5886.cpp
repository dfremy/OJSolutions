#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <string.h>
#include <map>
#include <vector>
#include <iostream>

int main(){
	int n;
	char d[1005][1005], m[1005][1005];
	while(scanf(" %d", &n)!=EOF && n){
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				scanf(" %c", &d[i][j]);
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				scanf(" %c", &m[i][j]);
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				if(d[i][j]=='O')
					printf("%c", m[i][j]);
		for(int j=0;j<n;j++)
			for(int i=n-1;i>=0;i--)
				if(d[i][j]=='O')
					printf("%c", m[j][n-1-i]);
		for(int i=n-1;i>=0;i--)
			for(int j=n-1;j>=0;j--)
				if(d[i][j]=='O')
					printf("%c", m[n-1-i][n-1-j]);
		for(int j=n-1;j>=0;j--)
			for(int i=0;i<n;i++)
				if(d[i][j]=='O')
					printf("%c", m[n-1-j][i]);
		printf("\n");
	}
	return 0;
}
