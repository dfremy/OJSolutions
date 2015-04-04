#include <bits/stdc++.h>

using namespace std;

double dist(double x, double y, double x1, double y1) {
	return sqrt( (x1-x)*(x1-x) + (y1-y)*(y1-y) );
}

int main() {
	double k, x, y;
	int tes = 1;
	while(scanf(" %lf %lf %lf", &k, &x, &y)!=EOF && (k || x || y)) {
		double xi, yi;
		int end = 0;
		while(scanf("%lf %lf", &xi, &yi)!=EOF && (xi!=-1 || yi!=-1)) {
			if(!end) {
				if(dist(x, y, xi, yi) < k+1) {
					printf("Firefly %d caught at (%.0lf,%.0lf)\n", tes, xi, yi);
					end = 1;
				}
				else {
					double module = sqrt((xi-x)*(xi-x) + (yi-y)*(yi-y));
					x += ((xi-x) / module) * k;
					y += ((yi-y) / module) * k;
				}
			}
		}
		
		if(!end)
			printf("Firefly %d not caught\n", tes);
		
		tes++;
	}
	return 0;
}

