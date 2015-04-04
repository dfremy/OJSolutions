#include <bits/stdc++.h>

using namespace std;


char c[] = {' ','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
			'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\'', ',', '-', '.', '?'};

char binToString(string s, int k) {
	int p2=pow(2, 4), su = 0;
	for(int i=0; i<5; ++i) {
		if(s[k+i] == '1')
			su += p2;
		p2/=2;
	}
	
	return c[su];
}

int main() {
	string s, ans;
	getline(cin, s);
	while(s != "#") {
		ans = "";
		
		while(s != "*") {
			int i = 0;
			while(i<s.size()) {
				
				while(s[i]!=' ' && i<s.size())
					++i;
					
				int qt = 0, yes = 0;
				while(s[i]==' ' && i<s.size()) {
					++qt;
					++i;
					yes = 1;
				}
				
				if(qt%2 && yes)
					ans += '0';
				else if(yes)
					ans += '1';
				
			}
			
			getline(cin, s);
		}
		
		while(ans.size()%5)
			ans += '0';
		
		for(int i=0; i<ans.size(); i+=5)
			cout << binToString(ans, i);
			
		cout << endl;
		
		getline(cin, s);
	}
	return 0;
}

