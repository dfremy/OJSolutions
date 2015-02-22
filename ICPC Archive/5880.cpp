#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <string.h>
#include <map>
#include <vector>
#include <iostream>

using namespace std;

vector <int> chave;

int main(){
	string key, s, resp;
	while(1){
		chave.clear();
		resp="";
		cin >> key;
		if(key.size()==1 && key[0]=='0')
			break;
		cin >> s;
		for(int i=0;i<key.size();i++)
			chave.push_back(key[i] - 'A'+1);
		for(int i=0;chave.size()<s.size();i++)
			chave.push_back(chave[i]);
		for(int i=0; i<s.size();i++)
			resp+='A'+(s[i]+chave[i]-'A')%26;
		cout<<resp;
		printf("\n");
	}
	return 0;
}
