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
	int n, at = 1;
	char c;
	vector <char> v;
	while(scanf(" %d ", &n)!=EOF && n) {
		v.clear();
		printf("Simulation %d\n", at++);
		while(scanf("%c", &c)!=EOF && c!='\n') {
			if(c=='!') {
				for(int i=0; i<v.size(); i++)
					printf("%c", v[i]);
				printf("\n");
			}
			else if(v.size() < n && find(v.begin(), v.end(), c) == v.end())
				v.push_back(c);
			else {
				if(find(v.begin(), v.end(), c) != v.end())
					v.erase(find(v.begin(), v.end(), c));
				else
					v.erase(v.begin());
				v.push_back(c);
			}
		}
	}

	return 0;
}

