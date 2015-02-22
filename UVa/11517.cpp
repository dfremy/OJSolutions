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

int main(){
    int t, val, n, moeda[105], pd[10010], i, j;
    scanf(" %d", &t);
    while (t--){
        scanf (" %d %d", &val, &n);
        for(i=0;i<n;i++){
            scanf(" %d", &moeda[i]);
        }
        for(i=0;i<10010;i++)
			pd[i]=2000000000;
		pd[0]=0;
        for(i=0;i<n;i++){
            for(j=10000-moeda[i];j>=0;j--){
                if(pd[j]!=2000000000 && pd[j+moeda[i]]>pd[j]+1){
                	pd[j+moeda[i]] = pd[j]+1;
            	}
            }
        }
        for(i=val;i<=10000;i++){
            if(pd[i]!=2000000000){
                printf("%d %d\n", i, pd[i]);
                break;
            }
        }
    }
    return 0;
}

