#include <bits/stdc++.h>

using namespace std;

int main() {
	string p1, p2;
	cin >> p1;
	cin >> p2;
	while( (p1!="E" || p2!="E") ) {
		int v1=0, v2=0;
		for(int i=0; i<p1.size(); ++i) {
			if(p1[i]=='R' && p2[i]=='P')
				v2++;
			if(p1[i]=='R' && p2[i]=='S')
				v1++;
			if(p1[i]=='S' && p2[i]=='P')
				v1++;
			if(p1[i]=='S' && p2[i]=='R')
				v2++;
			if(p1[i]=='P' && p2[i]=='R')
				v1++;
			if(p1[i]=='P' && p2[i]=='S')
				v2++;
		}
		printf("P1: %d\nP2: %d\n", v1, v2);
		cin >> p1;
		cin >> p2;
	}
	return 0;
}

