#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	string s;
	int pre, pos, odd;
	cin >> s;
	while(s!="0") {
		odd = s.size()%2;
		string s2 = s.substr(0, s.size()/2);
		string s1 = s.substr(s.size()/2+odd, s.size()/2);
		reverse(s2.begin(), s2.end());
		int i1 = atoi(s1.c_str()), i2 = atoi(s2.c_str());
		if(i2 >= i1) {
			printf("%d\n", i2-i1);
		}
		else {
			int pow10 = pow(10, s1.size()), res;
			if(odd)
				res = pow10-i1 + i2 + ((s[s.size()/2+1]=='9')?pow10/10:0);
			else
				res = pow10-i1 + i2 + pow10/10;
			if(odd) {
				res = pow10-i1 + i2 + ((s[s.size()/2+1]=='9')?pow10/10:0);
			}
			else {
				res = pow10-i1 + i2 + pow10/10;
			}
			
			printf("%d\n", res);
		}
		
		cin >> s;
	}

	return 0;
}

