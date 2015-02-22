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
 
int main() {
    int n, b, h, w, val, camas, resp;
    while (scanf(" %d %d %d %d", &n, &b, &h, &w) != EOF) {
        resp = 2000000000;
        while (h--) {
            scanf(" %d", &val);
            for (int i = 0; i < w; ++i) {
                scanf("%d", &camas);
                if (camas >= n && val * n <= b)
                    resp = min(resp, val * n);
            }
        }
        if (resp != 2000000000)
            printf("%d\n", resp);
        else
            printf("stay home\n");
    }
    return 0;
}
