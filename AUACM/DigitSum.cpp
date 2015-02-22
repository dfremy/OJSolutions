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
	while(scanf(" %d", &n) != EOF && n) {
		vector <int> v;
		int qt0 = 0, res = 0, first = 2, pow10 = pow(10, n/2);
		for(int i = 0; i < n; i++) {
			int num;
			scanf(" %d", &num);
			v.push_back(num);
			if(num==0)
				qt0++;
		}
		sort(v.begin(), v.end());
		if(v.size() % 2) {
			first--;
			res += pow10*v[qt0];
			v.erase(v.begin()+qt0);
		}
		int i = 1;
		while(v.size()) {
			if(i%2)
				pow10 /= 10;
			if(first) {
				first--;
				res += pow10*v[qt0];
				v.erase(v.begin()+qt0);
			}
			else {
				res += pow10*v[0];
				v.erase(v.begin());
			}
			i++;
		}
		printf("%d\n", res);
	}

	return 0;
}

