#include <cstdio>
#include <vector>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <cmath>
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <ctype.h>

using namespace std;

map < string, int> tem;

int main(){
	int i, j, n;
	char inutil[5000];
	string s;
	scanf(" %d", &n);
	while(n--){
		cin >> s;
		tem[s]++;
		gets(inutil);
	}
	for(map<string, int>::iterator it = tem.begin(); it!=tem.end() ; it++){
		cout << it->first << " " << it->second << "\n";
	}
	return 0;
}

