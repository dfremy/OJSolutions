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
	while(scanf(" %d", &n) != EOF && n) {
		scanf(" %d", &p);
		getchar();
		vector <string> v;
		for(int i = 0; i < n; i++) {
			string line;
			getline(cin, line);
			v.push_back(line);
		}
		int col = 0;
		for(int i = 0; i < n; i++) {
			while(v[i][col] != ' ' && v[i].size() > col)
				col++;
		}
		printf("%d\n", col+1);
	}

	return 0;
}

