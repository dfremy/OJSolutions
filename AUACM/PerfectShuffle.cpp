#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	string s;
	while(scanf(" %d", &n)!=EOF && n) {
		vector <string> v;
		for(int i=0; i<n; ++i) {
			cin >> s;
			v.push_back(s);
		}
		for(int i=0; i<(n+1)/2; ++i) {
			cout << v[i] << endl;
			if((n+1)/2+i < n)
				cout << v[(n+1)/2+i] << endl;
		}
	}
	return 0;
}

