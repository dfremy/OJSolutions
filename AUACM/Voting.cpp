#include <bits/stdc++.h>

using namespace std;

int main() {
	int yes, no, ab, pre;
	string in;
	cin >> in;
	while(in != "#") {
		yes=0, no=0, ab=0, pre=0;
		for(int i=0; i<in.size(); i++) {
			if(in[i]=='Y')
				yes++;
			else if(in[i]=='N')
				no++;
			else if(in[i]=='A')
				ab++;
			else if(in[i]=='P')
				pre++;
		}
		if(yes+no+pre <= ab)
			printf("need quorum\n");
		else if(yes>no)
			printf("yes\n");
		else if(no >yes) 
			printf("no\n");
		else
			printf("tie\n");
		cin >> in;
	}
	return 0;
}

