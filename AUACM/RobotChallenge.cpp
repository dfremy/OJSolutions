#include <bits/stdc++.h>

using namespace std;

double dist(pair<double, double> a, pair<double, double> b) {
	return sqrt( (a.first-b.first)*(a.first-b.first) + (a.second-b.second)*(a.second-b.second) );
}

int main() {
	int n;
	while(scanf(" %d", &n)!=EOF && n) {
		double x, y, p;
		double psum[1005];
		double best[1005];
		vector < pair<double, double> > v;
		
		for(int i=0; i<=n+1; ++i) {
			best[i] = 999999;
			psum[i] = 0;
		}
		best[0] = 0;
		
		v.push_back(make_pair(0,0));
		double sump = 0;
		
		for(int i=1; i<=n; ++i) {
			scanf(" %lf %lf %lf", &x, &y, &p);
			sump += p;
			psum[i] = sump;
			v.push_back(make_pair(x,y));
		}
		
		v.push_back(make_pair(100, 100));
		
		for(int i=1; i<=n+1; ++i) 
			for(int j=0; j<i; ++j) 
				best[i] = min(best[i], best[j]+dist(v[i], v[j]) + psum[i-1] - psum[j] + 1);
				
		printf("%.3lf\n", best[n+1]);
	}
	return 0;
}

