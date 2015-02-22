#include <cstdio>
#include <vector>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <cmath>
#include <string>
#include <iostream>
#include <algorithm>

#define MAXN 1000005

using namespace std;

vector <int> primos;
int naoehprimo[MAXN];

void crivo(){
	for(int i=3;i*i<=MAXN;i+=2){
		if(!naoehprimo[i]){
			for(int j=i*i;j<=MAXN;j+=2*i)
				naoehprimo[j]=1;
		}
	}
	for(int i=3;i<=MAXN;i+=2)
		if(!naoehprimo[i])
			primos.push_back(i);
}

int main(){
	int n, res;
	crivo();
	while(scanf(" %d", &n)!=EOF && n){
		for(int i=0;i<primos.size();i++){
			if(!naoehprimo[n-primos[i]]){
				res = primos[i];
				break;
			}
		}
		printf("%d = %d + %d\n", n, res, n-res);
	}

	return 0;
}
