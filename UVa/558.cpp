#include <cstdio>
#include <vector>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <cmath>
#include <string>
#include <iostream>
#include <algorithm>

#define INF 1000000000;

using namespace std;

vector < pair< int, pair <int, int> > > edges;
int dist[2005], n, m;

int bellman_ford(int start){
	int i, edit;
	for(i=0;i<n;i++)
		dist[i] = INF;
	dist[start] = 0;
	for(i=0;i<n;i++)
	{
		edit=0;
		for(int j=0;j<m;j++)
			if(dist[edges[j].second.first] + edges[j].first < dist[edges[j].second.second])
			{
				dist[edges[j].second.second] = dist[edges[j].second.first] + edges[j].first;
				edit = 1;
			}
		if(!edit)
			break;
			
	}
	if(i==n)
		return 1;
	return 0;
}

int main(){
	int i, j, tes, u, v, w;
	scanf(" %d", &tes);
	
	while(tes--)
	{
		edges.clear();
		scanf(" %d %d", &n, &m);
		for(i=0;i<m;i++)
		{
			scanf(" %d %d %d", &u, &v, &w);
			edges.push_back(make_pair(w, make_pair(u, v)));
		}
		int ok=0;
		for(i=0;i<n && !ok;i++)
			if(bellman_ford(i))
				ok=1;
		if(ok)
			printf("possible\n");
		else
			printf("not possible\n");
	}
	return 0;
}
