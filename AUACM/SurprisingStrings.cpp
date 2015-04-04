#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	while(s != "*") {
		int fail = 0;
		for(int i=1; i<=s.size()/2; ++i) {
			map <string, int> m;
			for(int j=0; j < s.size()-i; ++j) {
				string a = "";
				a += s[j];
				a += s[j+i];
				if(m[a]) {
					fail = 1;
					break;
				}
				m[a] = 1;
			}
			if(fail)
				break;
		}
		if(!fail)
			cout << s << " is surprising." << endl;
		else
			cout << s << " is NOT surprising." << endl;
		
		cin >> s;
	}
	return 0;
}

