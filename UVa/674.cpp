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

long long pd[8000];
int moeda[] = {1,5,10,25,50};

void prepd(){
	pd[0]=1;
	for(int i=0;i<5;i++){
		for(int j=moeda[i];j<8000;j++)
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

