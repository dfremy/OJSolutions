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
	vector <long long> v1;
	map <long long, int> m;
	char c[9];
	long long l;
	string s;
	
	scanf(" %d", &n);
	
	for(int i=0; i<n; i++) {
		*(long long*)c = 0;
		scanf("%s", c);
		l = *(long long*)c;
		v1.push_back(l);
	}
	
	int dif = 0, at = 0;
	
	for(int i=0; i<n; i++) {
		at++;
		*(long long*)c = 0;
		scanf("%s", c);
		l = *(long long*)c;
		
		if(m[v1[i]] > 0)
			dif--;
		else
			dif++;
		m[v1[i]]--;
		
		if(m[l] < 0)
			dif--;
		else
			dif++;
		m[l]++;
		
		if(!dif) {
			printf("%d\n", at);
			at = 0;
		}
	}

	return 0;
}

