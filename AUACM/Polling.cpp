#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n;
	vector < pair<int, string> > v;
	map <string, int> m;
	map <string, int>::iterator it;
	string s;
	scanf(" %d", &n);
	for(int i=0; i<n; i++) {
		cin >> s;
		m[s]++;
	}
	for(it=m.begin(); it!=m.end(); it++) {
		v.push_back(make_pair(-it->second, it->first));
	}
	sort(v.begin(), v.end());
	int i = 0;
	int ma = v[i].first;
	while(ma==v[i].first) {
		cout << v[i].second << endl;
		i++;
	}

	return 0;
}

