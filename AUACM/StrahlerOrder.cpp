#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k, m, p;
	int source[1005], num[1005], an[1005];
	scanf(" %d", &n);
	while(n--) {
		vector <int> v[1005], path, meu[1005];
		scanf(" %d %d %d", &k, &m, &p);
		for(int i=0; i<=m; i++) {
			source[i]=1;
			num[i] = 0;
			an[i] = 0;
		}
		int a, b;
		for(int i=0; i<p; i++) {
			scanf(" %d %d", &a, &b);
			v[a].push_back(b);
			source[b]=0;
			an[b]++;
		}
		for(int i=1; i<=m; i++)
			if(source[i]) {
				path.push_back(i);
				num[i] = 1;
			}
		while(!path.empty()) {
			for(int i=0; i<path.size(); i++) {
				int at = path[i];
				if(!num[at]) {
					sort(meu[at].begin(), meu[at].end());
					if(meu[at].size()==1 || meu[at][meu[at].size()-1] > meu[at][meu[at].size()-2])
						num[at] = meu[at][meu[at].size()-1];
					else
						num[at] = meu[at][meu[at].size()-1]+1;
				}
				for(int j=0; j<v[at].size(); j++) {
					if(--an[v[at][j]] == 0)
						path.push_back(v[at][j]);
					meu[v[at][j]].push_back(num[at]);
				}
				path.erase(path.begin()+i);
				break;
			}
		}
		printf("%d %d\n", k, num[m]);
	}
	return 0;
}

