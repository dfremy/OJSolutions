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
	string a, b, c;
	while(1) {
		getline(cin, a);
		if(a == "END")
			break;
		int first = a.find('\"', 0);
		int second = a.find('\"', first+1);
		int last = a.find("\" ", first+1);
		if(first == 0 && second==last && last > 0) {
			b = a.substr(1, last-1);
			c = a.substr(last+2, a.length());
			if(b == c)
				cout << "Quine(" << b << ")" << endl;
			else
				cout << "not a quine" << endl;
		}
		else
			cout << "not a quine" << endl;
	}
	
	return 0;
}

