#include <cstdio>
#include <vector>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <cmath>
#include <cstring>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

struct ponto{
	double a, b, c;
	ponto(double _a, double _b, double _c){
		a=_a;
		b=_b;
		c=_c;
	}
};

vector < ponto > pontos;

int resp[11];

int main(){
	int i, j, dist, menorDist;
	double a, b, c;
	while(scanf(" %lf %lf %lf", &a, &b, &c)!=EOF){
		if(!a && !b &&!c)
			break;
		pontos.push_back(ponto(a,b,c));
	}
	for(i=0;i<pontos.size();i++){
		menorDist = 1000000000;
		for(j=0;j<pontos.size();j++){
			if(i==j)
				continue;
			dist = (int)sqrt( (pontos[i].a-pontos[j].a)*(pontos[i].a-pontos[j].a)
					+ (pontos[i].b-pontos[j].b)*(pontos[i].b-pontos[j].b)
					+ (pontos[i].c-pontos[j].c)*(pontos[i].c-pontos[j].c));
			menorDist = min(menorDist, dist);
		}
		menorDist=min(menorDist, 10);
		resp[menorDist]++;
	}
	for(i=0;i<10;i++)
		printf("%4d", resp[i]);
	printf("\n");

	return 0;
}

