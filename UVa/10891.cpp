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

int pd[105][105], num[105], n;

int resolve(int i, int j){
	int k, soma, pego=-9999999;
    if(i==j) 
		return num[i];
    if(pd[i][j]!=-1) 
		return pd[i][j];
	soma=0;
    for(k=i;k<=j;k++){
        soma+=num[k];
        if(k==j) 
			pego=max(pego, soma);
        else
            pego=max(pego, soma-resolve(k+1,j));
    }
    soma=0;
    for(k=j;k>=i;k--){
        soma+=num[k];
        if(k==i)
            pego=max(pego, soma);
        else
            pego=max(pego, soma-resolve(i,k-1));
    }
    return pd[i][j]=pego;
}

int main(){
	int n, i;
    while(scanf(" %d", &n)!=EOF && n){
		memset(pd, -1, sizeof(pd));
        for(i=0;i<n;i++)
			scanf(" %d", &num[i]);
        printf("%d\n",resolve(0,n-1));
    }
    return 0;
}
