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
	int n, p;
	string a, b;
	
	while(scanf(" %d %d", &n, &p)!=EOF && (n || p)) {
		
		string v[101005];
		map <string, int> m;
		
		for(int i=0; i<101005; i++)
			v[i] = "";
		
		int k = 1;
		
		for(int i=0; i<n; i++) {
			cin >> a;
			m[a] = k++;
		}
		
		for(int i=0; i<p; i++) {
			cin >> a >> b;
			if(m[b]!=0)
				v[m[b]] += a +"\n";
			else {
					m[b] = k;
					v[k++] += a +"\n";
			}
		}
		
		for(int i=1; i<k; i++) 
			cout << v[i];
		
	}

	return 0;
}

