#include <bits/stdc++.h>

using namespace std;

int main() {
	string frase;
	int letra[26];
	bool fail;
	
	getline(cin, frase);
	
	while(frase != "END") {
		fail = false;
		for(int i=0; i<26; ++i)
			letra[i] = 0;
		
		for(int i=0; i<frase.size(); ++i) {
			if(frase[i]!=' ')
				if(letra[s[i]-'A']++) {
					fail = true;
					break;
				}
		}
		if(!fail)
			cout << frase << endl;
		
		getline(cin, frase);
	}
	return 0;
}

