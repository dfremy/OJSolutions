#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	char c[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
				'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '_', '.'};
	while(scanf(" %d", &n)!=EOF && n) {
		string s;
		cin >> s;
		for(int i=s.size()-1; i>=0; --i) {
			if(s[i] == '_')
				s[i] = 'Z'+1;
			if(s[i] == '.')
				s[i] = 'Z'+2;
			int pos = s[i]-'A'+n;
			pos = pos%28;
			printf("%c", c[pos]);
		}
		printf("\n");
	}
	return 0;
}

