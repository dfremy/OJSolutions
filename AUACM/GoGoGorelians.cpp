#include <bits/stdc++.h>

using namespace std;

struct point {
	public:
	double x, y, z;
	vector <int> adj;
	
	point(double xi, double yi, double zi) {
		x=xi, y=yi, z=zi;
		adj.clear();
	}
};

double dist(point a, point b) {
	return sqrt( (a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y) + (a.z-b.z)*(a.z-b.z));
}

int main() {
	int n;
	while(scanf(" %d", &n)!=EOF && n) {
		vector < pair< int, point> > v;
		vector < int > idsalvo;
		map <int, int> m;
		
		for(int i=0; i<n; ++i) {
			int id;
			double x, y, z;
			scanf(" %d %lf %lf %lf", &id, &x, &y, &z);
			v.push_back(make_pair(id, point(x, y, z)));
			m[id] = i;
			idsalvo.push_back(id);
			
			int idx = 0;
			for(int j=1; j<v.size()-1; ++j) {
				if(dist(v[i].second, v[j].second) < dist(v[i].second, v[idx].second))
					idx = j;
			}
			if(i) {
				v[i].second.adj.push_back(idsalvo[idx]);
				v[idx].second.adj.push_back(id);
			}
		}
		
		vector< pair<int, vector<int> > > cam;
		int vis[1005];
		memset(vis, 0, sizeof(vis));
		vector <int> b;
		b.push_back(v[0].first);
		cam.push_back(make_pair(v[0].first, b));
		vis[v[0].first] = 1;
		
		for(int i=0; i<cam.size(); ++i) {
			for(int j=0; j<v[m[cam[i].first]].second.adj.size(); ++j) {
				if(!vis[v[m[cam[i].first]].second.adj[j]]) {
					vector <int> a = cam[i].second;
					a.push_back(v[m[cam[i].first]].second.adj[j]);
					cam.push_back(make_pair(v[m[cam[i].first]].second.adj[j], a));
					vis[v[m[cam[i].first]].second.adj[j]] = 1;
				}
			}
		}
		
		int idfar = cam[cam.size()-1].first;
		cam.clear();
		memset(vis, 0, sizeof(vis));
		b.clear();
		b.push_back(idfar);
		cam.push_back(make_pair(idfar, b));
		vis[idfar] = 1;
		
		for(int i=0; i<cam.size(); ++i) {
			for(int j=0; j<v[m[cam[i].first]].second.adj.size(); ++j) {
				if(!vis[v[m[cam[i].first]].second.adj[j]]) {
					vector <int> a = cam[i].second;
					a.push_back(v[m[cam[i].first]].second.adj[j]);
					cam.push_back(make_pair(v[m[cam[i].first]].second.adj[j], a));
					vis[v[m[cam[i].first]].second.adj[j]] = 1;
				}
			}
		}
		if(cam[cam.size()-1].second.size()%2)
			printf("%d\n", cam[cam.size()-1].second[(cam[cam.size()-1].second.size())/2]);
		else {
			int id1 = cam[cam.size()-1].second[cam[cam.size()-1].second.size()/2];
			int id2 = cam[cam.size()-1].second[cam[cam.size()-1].second.size()/2-1];
			printf("%d %d\n", min(id1, id2), max(id1, id2));
		}
		
	}
	return 0;
}

