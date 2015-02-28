#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, p, s, dll[25], prog[15], at, ans, mat;
	string req[15];
	map <char, int> need;
	while(scanf(" %d", &n)!=EOF && n) {
		ans = 0, mat = 0;
		need.clear();
		scanf(" %d %d", &p, &s);
		
		for(int i=0; i<n; ++i)
			scanf(" %d", &dll[i]);
			
		for(int i=0; i<p; ++i) {
			scanf(" %d ", &prog[i]);
			cin >> req[i];
		}	
		
		for(int i=0; i<s; ++i) {
			scanf(" %d", &at);
			if(at>0){
				at -= 1;
				for(int j=0; j<req[at].size(); ++j) {
					if(need[ req[at][j] ] == 0)
						mat += dll[req[at][j]-'A'];
					need[req[at][j]]++;
				}
				mat += prog[at];
			}
			else {
				at = -at - 1;
				for(int j=0; j<req[at].size(); ++j) {
					if(need[req[at][j]] == 1)
						mat -= dll[req[at][j]-'A'];
					need[req[at][j]]--;
				}
				mat -= prog[at];
			}
			if(mat > ans)
				ans = mat;
		}
		printf("%d\n", ans);
	}
	return 0;
}

