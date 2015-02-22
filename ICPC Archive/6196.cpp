#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string.h>
#include <iostream>
#include <cctype>

using namespace std;

vector <string> nomes;

int main(){
	int n, i;
	string s;
	while(scanf(" %d", &n)!=EOF && n){
		nomes.clear();
		for(i=0;i<n;i++){
			cin >> s;
			nomes.push_back(s);
		}
		sort(nomes.begin(), nomes.end());
		string at = nomes[n/2 -1];
		string prox = nomes[n/2];
		for(i=0;i<at.size() && at[i]==prox[i];i++);
		if(i+1<at.size()){
			if(i+1<prox.size()){
				char w = at[i]+1;
				at = at.substr(0,i);
				at+=w;
			}
			else{
				if(at[i]+1==prox[i]){
					i++;
					while(i<at.size() && at[i]=='Z')i++;
					if(i+1<at.size()){
						char w = at[i]+1;
						at = at.substr(0,i);
						at+=w;
					}
				}
				else{
					char w = at[i]+1;
					at = at.substr(0,i);
					at+=w;
				}
			}	
		}
		cout << at;
		printf("\n");
	}
	return 0;
}
