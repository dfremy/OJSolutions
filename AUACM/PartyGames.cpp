#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	string s, c;
	while(scanf(" %d", &n)!=EOF && n) {
		vector <string> v;
		for(int i=0; i<n; i++) {
			cin >> s;
			v.push_back(s);
		}
		sort(v.begin(), v.end());
		s = v[v.size()/2];
		c = v[v.size()/2 - 1];
		
		// SO IMPORTA A PARTIR DAQUI
		
		string ans = "";
		int i = 0;
		while(1) {
			if(c[i]==s[i])
				ans += c[i];
			else {
				if(i+1!=c.size() && i+1!=s.size())
					ans += c[i]+1;
				else if(i+1==c.size())
					ans += c[i];
				else {
					if(s[i]-c[i]>1)
						ans += c[i]+1;
					else {
						ans += c[i];
						if(++i+1==c.size())
							ans += c[i];
						else {
							while(c[i]=='Z') {
								ans += c[i++];
							}
							if(i<c.size())
								if(i+1==c.size())
									ans += c[i];
								else
									ans += c[i]+1;
						}
					}
				}
				break;
			}
			
			i++;
			if(i == c.size())
				break;
		}
		cout << ans << endl;
		
		// ATE AQUI
	}
	
	return 0;
}

