#include <cstdio>
#include <queue>

#define INF 2147483647

using namespace std;

int src, dest;
int flow[102][102], path[102];

int BFS(int nodes){
	int at, cf, i;
	queue<int> q;
	for(i=1;i<=nodes;i++)
		path[i]=-2;
	q.push(src);
	path[src]=-1;
	while(!q.empty()) {
		at=q.front();
		q.pop();
		if(at==dest) {
			i=dest;
			cf=INF;
			while(path[i]!=-1) {
				if(cf>flow[path[i]][i])
					cf=flow[path[i]][i];
				i=path[i];
			}
			return cf;
		}
		for(i=1;i<=nodes;i++) {
			if(flow[at][i]!=0 && path[i]==-2) {
				q.push(i);
				path[i]=at;
			}
		}
	}
	return 0;
}

int maxflow(int nodes){
	int tflow = 0, cf, i;
	while((cf=BFS(nodes))!=0) {
		tflow+=cf;
		i=dest;
		while(path[i]!=-1) {
			flow[path[i]][i]-=cf;
			flow[i][path[i]]+=cf;
			i=path[i];
		}
	}
	return tflow;
}

int main(){
	int nodes, edges, rflow;
	int a, b, c, tes=1;
	while(scanf(" %d", &nodes) && nodes)
	{
		for(int i=1;i<=nodes;i++)
			for(int j=1;j<=nodes;j++)
				flow[i][j] = 0;
		scanf(" %d %d %d", &src, &dest, &edges);
		for(int i=0; i<edges ; i++)
		{
			scanf(" %d %d %d", &a, &b, &c);
			flow[a][b]+=c;
			flow[b][a]+=c;
		}
		rflow = maxflow(nodes);
		printf("Network %d\nThe bandwidth is %d.\n\n", tes++, rflow); 
	}
	
}
