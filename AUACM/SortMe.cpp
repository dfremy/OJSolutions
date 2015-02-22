#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

map <char, int> m;
vector <string> v;

int comp(string a, string b) {
	int i;
	for(i=0; i<min(a.size(), b.size()); i++) {
		if(m[a[i]] < m[b[i]])
			return 1;
		if(m[a[i]] > m[b[i]])
			return 0;
	}
	if(i==a.size())
		return 1;
	else
		return 0;
}

int main() {
	int n;
	string s;
	for(int y=1; scanf(" %d", &n)!=EOF && n ;y++) {
		v.clear();
		getline(cin, s);
		for(int i=0; i<s.size(); i++)
			m[s[i]] = i;
		
		for(int i=0; i<n; i++) {
			getline(cin, s);
			v.push_back(s);
		}
		sort(v.begin(), v.end(), comp);
		
		printf("year %d\n", y);
		for(int i=0; i<v.size(); i++)
			cout << v[i] << endl;
	}

	return 0;
}

