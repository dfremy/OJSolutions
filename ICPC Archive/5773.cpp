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
	int a, b, c, d;
	while(scanf(" %d %d %d %d", &a, &b, &c, &d)!=EOF && (a || b || c || d)) {
		vector <int> v;
		int res = 0;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		v.push_back(d);
		while(1) {
			if(v[0] == v[1] && v[0] == v[2] && v[0] == v[3])
				break;
			v.push_back(abs(v[0]-v[1]));
			v.push_back(abs(v[2]-v[1]));
			v.push_back(abs(v[3]-v[2]));
			v.push_back(abs(v[0]-v[3]));
			for(int i=0; i<4; i++)
				v.erase(v.begin());
			res++;
		}
		printf("%d\n", res);
	}

	return 0;
}

