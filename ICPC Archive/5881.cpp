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

#define INF 1000000000

using namespace std;

map <int, int> tem;

int pd[1000005], val[1000005];

int main(){
	int n, q, a, b;
	while(scanf(" %d %d", &n, &q)!=EOF && n){
		tem.clear();
		for(int i=1;i<=n;i++){
			scanf(" %d", &val[i]);
		}
		
		pd[n+1]=INF;
		for(int i=n;i>0;i--){
			if(tem[val[i]]){
				pd[i] = min(tem[val[i]], pd[i+1]);
				tem[val[i]]=i;	
			}
			else{
				pd[i]=pd[i+1];
				tem[val[i]]=i;
			}
		}
		for(int i=0;i<q;i++){
			scanf(" %d %d", &a, &b);
			if(pd[a]<=b)
				printf("%d\n", val[pd[a]]);
			else
				printf("OK\n");
		}
		printf("\n");
	}
	return 0;
}

