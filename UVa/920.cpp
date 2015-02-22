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

vector < pair <double, double> > pos;

int main(){
	int i, j, tes, n;
	double x, y;
	scanf(" %d", &tes);
	while(tes--){
		pos.clear();
		scanf(" %d", &n);
		double resp=0;
		for(i=0;i<n;i++){
			scanf(" %lf %lf", &x, &y);
			pos.push_back(make_pair(x, y));
		}
		sort(pos.begin(), pos.end());
		int maxat=0;
		for(i=pos.size()-1;i>=0;i--){
			if(pos[i].second > maxat){
				double prop = (pos[i+1].first - pos[i].first)*(pos[i].second - maxat)/(pos[i].second  - pos[i+1].second);
				resp += sqrt( prop*prop + (pos[i].second - maxat)*(pos[i].second - maxat) );
				maxat = pos[i].second;
			}
		}
		printf("%.2lf\n", resp);
	}

	return 0;
}

