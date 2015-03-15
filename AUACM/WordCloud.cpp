#include <bits/stdc++.h>

using namespace std;

int main() {
	int w, n;
	int tes=1;
	double a;
	string s;
	while(scanf(" %d %d", &w, &n)!=EOF && (w || n)) {
		vector <pair <string, double> > v;
		double cmax = 0;
		for(int i=0; i<n ;++i) {
			cin >> s >> a;
			if(a > cmax)
				cmax = a;
			if(a > 4.0)
				v.push_back(make_pair(s, a));
		}
		sort(v.begin(), v.end());
		
		double hat = 0, res=0;
		int wat = w;
		for(int i=0; i<v.size(); ++i) {
			double p = 8.0 + ceil( (40.0*(v[i].second-4.0))/(cmax-4.0));
			double temp = 9.0 * v[i].first.size() * p;
			int wi = ceil( temp/16.0);
			if(wi > wat) {
				res += hat;
				wat = w;
				hat = 0;
			}
			wat -= wi + 10;
			if(hat < p)
				hat = p;
		}
		
		printf("CLOUD %d: %.0lf\n", tes++, res+hat);
	}
	return 0;
}

