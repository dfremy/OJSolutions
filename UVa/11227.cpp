#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct ponto {
	double x, y;
	ponto(double _x, double _y) {
		x = _x;
		y = _y;
	}
};

struct reta {
	double a, b, c;
	reta(ponto p1, ponto p2) {
		if(p1.x == p2.x) {
			a = 1;
			b = 0;
			c = -p1.x;
		}
		else {
			a = -(p1.y-p2.y)/(p1.x - p2.x);
			b = 1;
			c = -(a*p1.x)-(b*p1.y);
		}
	}
	
	int nareta(ponto p) {
		if(a*p.x + b*p.y + c == 0)
			return 1;
		return 0;
	}
};

map < pair<int,int>, int> tem;
vector < ponto > p;

int main() {
	int i, j, k, n, t, tes, resp, qt;
	double x, y;
	scanf(" %d", &t);
	for(tes = 1; tes <= t; tes++) {
		p.clear();
		qt = resp = 0;
		tem.clear();
		scanf(" %d", &n);
		for(i=0; i<n; i++) {
			scanf(" %lf %lf", &x, &y);
			if(!tem[make_pair((int)(x*100), (int)(y*100))]) {
				tem[make_pair((int)(x*100), (int)(y*100))] = 1;
				p.push_back(ponto(x, y));
			}
		}
		for(i = 0; i < p.size(); i++) {
			for(j=0; j < p.size(); j++) {
				if(i == j)
					continue;
				qt = 0;
				reta r = reta(p[i], p[j]);
				for(k=0; k<p.size(); k++) {
					if(r.nareta(p[k]))
						qt++;
				}
				resp = max(qt, resp);
			}
		}
		if(p.size()==1)
			printf("Data set #%d contains a single gnu.\n", tes);
		else
			printf("Data set #%d contains %d gnus, out of which a maximum of %d are aligned.\n", tes, p.size(), resp);
	}
	return 0;
}
