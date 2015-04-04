#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	vector <string> words;
	cin >> s;
	while(s != "#") {
		words.clear();
		
		while(s != "*") {
			words.push_back(s);
			cin >> s;
		}
		
		cin >> s;
		
		while(s != "**") {
			vector <string> term;
			string at = "";
			for(int i=0; i<s.size(); ++i) {
				if(s[i]=='|') {
					term.push_back(at);
					at = "";
				}
				else
					at+=s[i];
			}
			term.push_back(at);
			
			string ans = "NONE";
			
			for(int w=0; w<term.size(); ++w) {
				at = term[w];
				vector <char> yes, no, maybe;
				for(int i=0; i<at.size(); ++i) {
					if(at[i]=='+')
						yes.push_back(at[++i]);
					else if(at[i]=='-')
						no.push_back(at[++i]);
					else
						maybe.push_back(at[i]);
				}
				
				
				for(int i=0; i<words.size(); ++i) {
					int fail = 0;
					
					for(int j=0; j<yes.size() && !fail; ++j) {
						int found = 0;
						for(int k=0; k<words[i].size(); ++k) {
							if(words[i][k]==yes[j]) {
								found = 1;
								break;
							}
						}
						if(!found)
							fail = 1;
					}
					
					for(int j=0; j<no.size() && !fail; ++j) {
						for(int k=0; k<words[i].size(); ++k) {
							if(words[i][k]==no[j]) {
								fail = 1;
								break;
							}
						}
					}
					
					int found = 0;
					for(int j=0; j<maybe.size() && !fail; ++j) {
						for(int k=0; k<words[i].size(); ++k) {
							if(words[i][k]==maybe[j]) {
								found = 1;
								break;
							}
						}
						if(found)
							break;
					}
					
					if(!fail && found) {
						if(ans == "NONE" || (ans!="NONE" && words[i] < ans) )
							ans = words[i];
					}
				}
			}
			
			cout << ans << endl;
			
			cin >> s;
		}
		cout << "$" << endl;
		cin >> s;
	}
	return 0;
}

