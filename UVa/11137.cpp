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

long long pd[10010];
vector <int> moeda;

void prepd(){
	for(int i=1;i<22;i++)
		moeda.push_back(i*i*i);
	pd[0]=1;
	for(int i=0;i<21;i++){
		for(int j=moeda[i];j<10005;j++)
			pd[j]+=pd[j-moeda[i]];
	}
}

int main(){
	int i, j, n;
	prepd();
	while(scanf(" %d", &n)!=EOF){
		printf("%lld\n", pd[n]);
	}
	return 0;
}

