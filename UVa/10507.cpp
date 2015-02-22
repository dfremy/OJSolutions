#include <stdio.h>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
#include <cstring>
#include <algorithm>
 
using namespace std;
 
map <char, int> cer;
vector <int> cam[30];
int vis[30];
 
int main()
{
    char a, b, c;
        int i, j, n, ind, m, ano;
        while(scanf(" %d %d", &n, &m)!=EOF)
        {
                ind=ano=0;
                memset(vis, 0, sizeof(vis));
                for(i=0;i<30;i++)
                        cam[i].clear();
                cer.clear();
                scanf(" %c %c %c", &a, &b, &c);
                cer[a] = ind++;
                cer[b] = ind++;
                cer[c] = ind++;
                vis[cer[a]] = vis[cer[b]] = vis[cer[c]] = 3;
                for(i=0;i<m;i++)
                {
                        scanf(" %c %c", &a, &b);
                        if(!cer.count(a))
                                cer[a]=ind++;
                        if(!cer.count(b))
                                cer[b]=ind++;
                        cam[cer[a]].push_back(cer[b]);
                        cam[cer[b]].push_back(cer[a]);
                }
                int qta=3, acordou=1;
                while(qta!=n)
                {
                        if(!acordou)
                                break;
                        acordou=0;
                        for(i=0;i<n;i++)
                                if(!vis[i])
                                {
                                        for(j=0;j<cam[i].size();j++)
                                        {
                                                if(vis[cam[i][j]]==3)
                                                        vis[i]++;
                                        }
                                        if(vis[i]>2)
                                        {
                                                vis[i]=4;
                                                acordou=1;
                                                qta++;
                                        }
                                        else
                                                vis[i]=0;
                                }
                        for(i=0;i<n;i++)
                                if(vis[i]>3)
                                        vis[i]=3;
                        ano++;
                }
                if(qta<n)
                        printf("THIS BRAIN NEVER WAKES UP\n");
                else
                        printf("WAKE UP IN, %d, YEARS\n", ano);
        }
        return 0;
}
