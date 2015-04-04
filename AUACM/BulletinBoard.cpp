#include <bits/stdc++.h>

using namespace std;

int main() {
	// Number of posters, width, height
	int n, w, h;
	while(scanf(" %d", &n)!=EOF && n) {
		scanf(" %d %d", &w, &h);
		
		// Save the coordinates where a post beggins and ends on each row
		vector < pair<int, bool> > posterRow[50005];
		
		for(int i=0; i<n; ++i) {
			// Coordinates of the corners of the poster
			int x1, y1, x2, y2;
			scanf(" %d %d %d %d", &x1, &y1, &x2, &y2);
			
			// Go throw each row of the poster and put the the value where it begins and ends
			for(int j=x1; j<x2; ++j) {
				posterRow[j].push_back(make_pair(y1, 1));
				posterRow[j].push_back(make_pair(y2, 0));
			}
		}
		
		// Sort the coordinates of each row
		for(int i=0; i<50005; ++i) {
			sort(posterRow[i].begin(), posterRow[i].end());
		}
		
		// Area covered by posters (not counting overlaps)
		int areaCovered=0;
		// Maximum depth
		int mdepth = 0;
		
		// Go throw each row
		for(int i=0; i<50005; ++i) {
			// So far there is no poster
			int depth = 0;
			// Go throw each coordinate on that row
			for(int j=0; j<posterRow[i].size(); ++j) {
				
				// If the depth is at least 1, than this section has to be considered
				if(depth > 0) {
					// The size of this section is from the last point to the point I am now
					areaCovered += posterRow[i][j].first - posterRow[i][j-1].first;
				}
				
				// The depth is increased if this coordinate is a beggin and decreased if it's an end
				if(posterRow[i][j].second > 0)
					depth += 1;
				else
					depth -= 1;
				
				// Save the maximum depth
				mdepth = max(mdepth, depth);
			}
		}
		// The area not covered it the total area minus the area covered 
		printf("%d ", h*w - areaCovered);
		
		// So far there i no areas with the max depth
		int maxDepthAreas = 0;
		// Go throw each row
		for(int i=0; i<50005; ++i) {
			// So far there is no poster, so the depth is 0
			int depth = 0;
			
			// Go throw each coordinate on that row
			for(int j=0; j<posterRow[i].size(); ++j) {
				
				// If the depth is equal to the maximum depth, than this section has to be considered
				if(depth == mdepth)
					maxDepthAreas += posterRow[i][j].first - posterRow[i][j-1].first;
				
				// The depth is increased if this coordinate is a beggin and decreased if it's an end
				if(posterRow[i][j].second > 0)
					depth += 1;
				else
					depth -= 1;
			}
		}
		
		printf("%d %d\n", mdepth, maxDepthAreas);
	}
	return 0;
}

