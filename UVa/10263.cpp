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

using namespace std;

struct ponto{
	double x, y;
	ponto(double _x, double _y){
	x=_x;
	y=_y;
	}
	ponto(){
		x=y=0;
	}
};

ponto at, ant, resp, respat, m;

double distPonto(ponto p1, ponto p2){
	return sqrt( (p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y) );
}

double distSeg(ponto x){
	if( (x.x<=ant.x)!=(x.x<=at.x) || x.x==ant.x || x.x==at.x)
		if( (x.y<=ant.y)!=(x.y<=at.y) || x.y==ant.y || x.y==at.y)
			return distPonto(x, m);
	double xant = distPonto(m, ant);
	double xat = distPonto(m, at);
	if(xant < xat)
		respat = ant;
	else
		respat = at;
	return min(xant, xat);
}

double distReta(){
	double prop = ((m.x-ant.x)*(at.x-ant.x) + (m.y-ant.y)*(at.y-ant.y)) 
				/ ((at.x-ant.x)*(at.x-ant.x) + (at.y-ant.y)*(at.y-ant.y));
	respat = ponto(ant.x + prop*(at.x-ant.x), ant.y + prop*(at.y-ant.y));
	return distSeg(respat);
}

int main(){
	int i, j, n;
	double x, y, distancia, menorDist;
	while(scanf(" %lf %lf", &x, &y)!=EOF){
		menorDist = 2000000000;
		m = ponto(x, y);
		scanf(" %d", &n);
		scanf(" %lf %lf", &x, &y);
		at = ponto(x, y);
		for(i=0;i<n;i++){
			ant = at;
			scanf(" %lf %lf", &x, &y);
			at = ponto(x, y);
			distancia = distReta();
			if(menorDist > distancia){
				menorDist = distancia;
				resp = respat;
			}
		}
		printf("%.4lf\n%.4lf\n", resp.x, resp.y);
	}

	return 0;
}

