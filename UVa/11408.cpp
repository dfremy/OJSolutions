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

#define MAXN 5000000

using namespace std;

int DePrime[MAXN + 5];
bool naoehprimo[MAXN + 5];

void crivo(){
	for(int i=2;i<=MAXN;i++){
		if(!naoehprimo[i]){
			for(int j=1;j*i<=MAXN;j++){
				if(j>1)
					naoehprimo[j*i]=true;
				DePrime[j*i]+=i;
			}
		}	
	}
	DePrime[2]=1;
	for(int i=3;i<=MAXN;i++){
		if(!naoehprimo[DePrime[i]])
			DePrime[i]=DePrime[i-1]+1;
		else
			DePrime[i]=DePrime[i-1];
	}
}

int main(){
	int a, b;
	crivo();
	while(scanf(" %d", &a)!=EOF && a){
		scanf(" %d", &b);
		printf("%d\n", DePrime[b]-DePrime[a-1]);
	}

	return 0;
}

