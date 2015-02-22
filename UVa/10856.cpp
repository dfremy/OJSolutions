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

#define MAXN 10000001

using namespace std;

int resp[MAXN];

void pre(){
	for(int i=2;i<MAXN;i++){
		if(!resp[i])
			resp[i]=1;
		for(int j=2; j<=i && j*i<MAXN;j++){
			if(resp[j]==1){
				resp[j*i]=resp[i]+resp[j];
			}
		}
	}
	for(int i=2;i<MAXN;i++)
		resp[i]+=resp[i-1];
}

int main(){
	int n, l, r, m, tes=1;
	pre();
	while(scanf(" %d", &n)!=EOF && n>=0){
		l=0, r=MAXN-1;
		while(l+1<r){
			m=(l+r)/2;
			if(resp[m]>=n)
				r=m;
			else
				l=m;
		}
		if(resp[l]==n)
			printf("Case %d: %d!\n", tes++, l);
		else if(resp[r]==n)
			printf("Case %d: %d!\n", tes++, r);
		else
			printf("Case %d: Not possible.\n", tes++);
	}

	return 0;
}

