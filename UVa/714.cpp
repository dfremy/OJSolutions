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

vector <int> aqui;
int livros, homens, liv[505];

bool resolve(long long m){
	long long val=0;
	int qt=1;
	for(int i=0;i<livros;i++){
		val+=liv[i];
		if(val>m){
			qt++;
			val=liv[i];
		}
		if(qt>homens || liv[i]>m)
			return false;
	}
	return true;
}

void onde(long long m){
	long long val=0;
	for(int i=livros-1;i>=0;i--){
		val+=liv[i];
		if(val>m){
			val=liv[i];
			aqui.push_back(i);
		}
	}
}

void printa(long long m){
	int qt = homens - aqui.size()-1, iaqui=0;
	for(int i=0;i<livros;i++){
		printf("%d", liv[i]);
		if(i+1!=livros)
			printf(" ");
		if(iaqui<aqui.size() && aqui[iaqui]==i){
			printf("/ ");
			iaqui++;
		}
		else if(qt){
			printf("/ ");
			qt--;
		}
	}
}

int main(){
	int i, j, n;
	long long l, r, m;
	scanf(" %d", &n);
	while(n--){
		aqui.clear();
		scanf(" %d %d", &livros, &homens);
		for(i=0;i<livros;i++){
			scanf(" %d", &liv[i]);
		}
		l=0, r=livros*10000000;
		while(l+1<r){
			m=(l+r)/2;
			if(resolve(m))
				r=m;
			else
				l=m;
		}
		onde(r);
		sort(aqui.begin(), aqui.end());
		printa(r);
		printf("\n");
	}
	return 0;
}
