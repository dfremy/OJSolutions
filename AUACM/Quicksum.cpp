#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	while(s != "#") {
		int n = 0;
		for(int i=0; i<s.size(); ++i) {
			if(s[i] == ' ')
				continue;
			n += (s[i]-'A'+1)*(i+1);
		}
		printf("%d\n", n);	
	
		getline(cin, s);
	}
	return 0;
}

