#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	string s;
	int v[1005];
	
	while(1) {
		getline(cin, s);
		if(s=="0")
			break;
		for(int i=0; i<1000; i++)
			v[i] = 0;
			
		for(int i=1; i<s.size(); i++) {
			if((s[i]=='1' && v[i]%2==0) || (s[i]=='0' && v[i]%2)) {
				printf("%d ", i);
				for(int j=i; j<s.size(); j+=i)
					v[j]++;
			}
		}
		
		printf("\n");
	}

	return 0;
}

