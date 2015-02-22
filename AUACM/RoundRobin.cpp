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
	int n, t;
	vector <int> v;
	while(scanf(" %d", &n)!=EOF && n) {
		v.clear();
		scanf(" %d", &t);
		for(int i=0; i<=n; i++)
			v.push_back(0);
			
		int at = 2, qt, p = 1;
		while(at != v.size() && at != 1) {
			at--;
			if(p) {
				p = 0;
				at--;
			}
			v.erase(v.begin()+at);
			if(v.size()==1)
				break;
			qt = t;
			while(qt) {
				if(at==v.size())
					at = 0;
				qt--;
				v[at++]++;
			}
		}
		if(v.size()==1)
			printf("1 %d\n", v[0]);
		else if(at==1)
			printf("%d %d\n", v.size()-1, v[1]);
		else
			printf("%d %d\n", v.size()-1, v[0]);
	}

	return 0;
}

