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

#define MAXN 1000000

using namespace std;

vector<int>primo;
bool naoehprimo[MAXN];

void crivo(){
	primo.push_back(2);
	for(long long i=3;i<=MAXN;i+=2){
		if(!naoehprimo[i]){
			for(long long j=i*i;j<=MAXN;j+=2*j){
				naoehprimo[j]=true;
			}
		}
	}
	for(long long i=3;i<=MAXN;i+=2){
		if(!naoehprimo[i]){
			primo.push_back(i);
		}
	}
}

int main(){
	int i, n, m, qt;
	bool entrou;
	crivo();
	while(scanf(" %d", &n)!=EOF && n){
		qt=0;
		m = n;
		for(i=0;i<primo.size() && n>1;i++){
			entrou=false;
			while(n%primo[i]==0){
				entrou=true;
				n/=primo[i];
			}
			qt+=entrou;
		}
		printf("%d : %d\n", m, qt);
	}

	return 0;
}

