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

vector < pair<int, int> > x, y;

int main(){
	int n, XLL1, YLL1, XUR1, YUR1, XLL2, YLL2, XUR2, YUR2;
	scanf(" %d", &n);
	while(n--){
		x.clear();
		y.clear();
		scanf(" %d %d %d %d", &XLL1, &YLL1, &XUR1, &YUR1);
		scanf(" %d %d %d %d", &XLL2, &YLL2, &XUR2, &YUR2);
		x.push_back(make_pair(XLL1, 1));
		x.push_back(make_pair(XUR1, 1));
		x.push_back(make_pair(XLL2, 2));
		x.push_back(make_pair(XUR2, 2));
		y.push_back(make_pair(YLL1, 1));
		y.push_back(make_pair(YUR1, 1));
		y.push_back(make_pair(YLL2, 2));
		y.push_back(make_pair(YUR2, 2));
		sort(x.begin(), x.end());
		sort(y.begin(), y.end());
		if(x[0].second != x[1].second && y[0].second != y[1].second && x[1].first != x[2].first && y[1].first != y[2].first)
			printf("%d %d %d %d\n", x[1].first, y[1].first, x[2].first, y[2].first);
		else
			printf("No Overlap\n");
		if(n)
			printf("\n");
	}

	return 0;
}

